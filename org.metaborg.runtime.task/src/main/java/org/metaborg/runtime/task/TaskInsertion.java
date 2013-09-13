package org.metaborg.runtime.task;

import static org.metaborg.runtime.task.util.InvokeStrategy.invoke;
import static org.metaborg.runtime.task.util.ListBuilder.makeList;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Map.Entry;
import java.util.Set;

import org.metaborg.runtime.task.util.SingletonIterable;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.library.ssl.StrategoHashMap;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Iterables;
import com.google.common.collect.LinkedHashMultimap;
import com.google.common.collect.Lists;
import com.google.common.collect.Multimap;
import com.google.common.collect.Sets;

import fj.P;
import fj.P2;
import fj.data.Either;

public final class TaskInsertion {
	/**
	 * Returns all instruction permutations of given task based on its dependencies. For regular tasks,
	 * {@link #instructionCombinations} is called. For task combinators, {@link #combinatorCombinations} is called. This
	 * function assumes that all dependencies of the given task have been solved.
	 */
	public static P2<? extends Iterable<IStrategoTerm>, Boolean> taskCombinations(ITermFactory factory,
		ITaskEngine taskEngine, IContext context, Strategy collect, Strategy insert, IStrategoTerm taskID, Task task) {
		final IStrategoTerm instruction = task.instruction;
		final boolean isCombinator = task.isCombinator;
		final Iterable<IStrategoTerm> resultIDs = taskEngine.getDependencies(taskID);

		if(Iterables.isEmpty(resultIDs)) {
			return P.p(new SingletonIterable<IStrategoTerm>(instruction), false);
		} else if(!isCombinator) {
			return insertResultCombinations(taskEngine, context, collect, insert, instruction, resultIDs);
		} else {
			return P
				.p(new SingletonIterable<>(insertResultLists(factory, taskEngine, context, insert, instruction,
					resultIDs)), false);
		}
	}

	/**
	 * Returns instruction permutations for a regular instruction, or dynamic dependencies encountered while creating
	 * the instruction permutations. To create all permutations a cartesian product of all dependencies is created and
	 * applied to the instruction. If all dependencies have only one result, this will result in just one instruction.
	 * Otherwise multiple instructions are returned. If a dependency has failed or has no results, null is returned
	 * instead. If dynamic dependencies are encountered, the resulting iterable contains task IDs of these dependencies.
	 */
	public static P2<? extends Iterable<IStrategoTerm>, Boolean> insertResultCombinations(ITaskEngine taskEngine,
		IContext context, Strategy collect, Strategy insert, IStrategoTerm term, Iterable<IStrategoTerm> dependencies) {
		final Set<IStrategoTerm> seen = Sets.newHashSet();
		final Either<Multimap<IStrategoTerm, IStrategoTerm>, ? extends Iterable<IStrategoTerm>> result =
			createResultMapping(taskEngine, context, collect, insert, dependencies, seen);

		if(result == null) {
			return null;
		} else if(result.isRight()) {
			return P.p(result.right().value(), true);
		} else {
			return P.p(insertCarthesianProduct(context, insert, term, result.left().value()), false);
		}
	}


	private static Either<Collection<IStrategoTerm>, ? extends Iterable<IStrategoTerm>> getResultsOf(
		ITaskEngine taskEngine, IContext context, Strategy collect, Strategy insert, IStrategoTerm taskID,
		Set<IStrategoTerm> seen) {
		seen.add(taskID);
		final Task task = taskEngine.getTask(taskID);

		if(!task.solved()) {
			return Either.right(new SingletonIterable<>(taskID));
		} else if(task.failed() || !task.hasResults()) {
			return null;  // If a dependency does not have any results, the task cannot be executed.
		}

		final Collection<IStrategoTerm> results = Lists.newLinkedList();
		final Collection<IStrategoTerm> dynamicDependencies = Lists.newLinkedList();

		for(final IStrategoTerm result : task.results()) {
			final Iterable<IStrategoTerm> nestedResultIDs = getResultIDs(context, collect, result);
			if(Iterables.isEmpty(nestedResultIDs)) {
				results.add(result);
			} else {
				final Either<Multimap<IStrategoTerm, IStrategoTerm>, ? extends Iterable<IStrategoTerm>> resultMapping =
					createResultMapping(taskEngine, context, collect, insert, nestedResultIDs, seen);

				if(resultMapping == null) {
					return null;
				} else if(resultMapping.isRight()) {
					Iterables.addAll(dynamicDependencies, resultMapping.right().value());
				} else {
					final Collection<IStrategoTerm> insertedResults =
						insertCarthesianProduct(context, insert, result, resultMapping.left().value());
					results.addAll(insertedResults);
				}
			}
		}

		if(dynamicDependencies.isEmpty())
			return Either.left(results);
		else
			return Either.right(dynamicDependencies);
	}

	private static Either<Multimap<IStrategoTerm, IStrategoTerm>, ? extends Iterable<IStrategoTerm>>
		createResultMapping(ITaskEngine taskEngine, IContext context, Strategy collect, Strategy insert,
			Iterable<IStrategoTerm> resultIDs, Set<IStrategoTerm> seen) {
		final Multimap<IStrategoTerm, IStrategoTerm> resultsMap = LinkedHashMultimap.create();
		final Collection<IStrategoTerm> dynamicDependencies = Lists.newLinkedList();

		for(final IStrategoTerm resultID : resultIDs) {
			if(seen.contains(resultID))
				continue;
			final Either<Collection<IStrategoTerm>, ? extends Iterable<IStrategoTerm>> results =
				getResultsOf(taskEngine, context, collect, insert, resultID, Sets.newHashSet(seen));

			if(results == null) {
				return null;
			} else if(results.isRight()) {
				Iterables.addAll(dynamicDependencies, results.right().value());
			} else {
				resultsMap.putAll(resultID, results.left().value());
			}
		}

		if(dynamicDependencies.isEmpty())
			return Either.left(resultsMap);
		else
			return Either.right(dynamicDependencies);
	}

	private static Collection<IStrategoTerm> insertCarthesianProduct(IContext context, Strategy insert,
		IStrategoTerm term, Multimap<IStrategoTerm, IStrategoTerm> resultMapping) {
		final Collection<StrategoHashMap> resultCombinations = cartesianProduct(resultMapping);
		final Collection<IStrategoTerm> instructions = Lists.newLinkedList();
		for(StrategoHashMap mapping : resultCombinations) {
			instructions.add(insertResults(context, insert, term, mapping));
		}
		return instructions;
	}

	/**
	 * Returns an iterable that only has one instruction where the results have been inserted as lists.
	 */
	private static IStrategoTerm insertResultLists(ITermFactory factory, ITaskEngine taskEngine, IContext context,
		Strategy insert, IStrategoTerm term, Iterable<IStrategoTerm> resultIDs) {
		final StrategoHashMap mapping = new StrategoHashMap();
		for(IStrategoTerm resultID : resultIDs) {
			final Task task = taskEngine.getTask(resultID);
			mapping.put(resultID, makeList(factory, task.results()));
		}

		return insertResults(context, insert, term, mapping);
	}

	/**
	 * Given a multimap from task identifiers to their results, returns the cartesian product of that mapping. The
	 * product is returned as a collection of maps that map task identifiers to one result.
	 */
	public static Collection<StrategoHashMap> cartesianProduct(Multimap<IStrategoTerm, IStrategoTerm> results) {
		Collection<StrategoHashMap> result = new ArrayList<StrategoHashMap>();
		if(results.size() > 0)
			result.add(new StrategoHashMap());

		for(Entry<IStrategoTerm, Collection<IStrategoTerm>> entry : results.asMap().entrySet()) {
			Collection<StrategoHashMap> newResults = new ArrayList<StrategoHashMap>();
			for(StrategoHashMap map : result) {
				for(IStrategoTerm val : entry.getValue()) {
					StrategoHashMap mapping = new StrategoHashMap();
					mapping.putAll(map);
					mapping.put(entry.getKey(), val);
					newResults.add(mapping);
				}
			}
			result = newResults;
		}
		return result;
	}


	private static Iterable<IStrategoTerm> getResultIDs(IContext context, Strategy collect, IStrategoTerm term) {
		return invoke(context, collect, term);
	}

	private static IStrategoTerm insertResults(IContext context, Strategy insertResults, IStrategoTerm instruction,
		StrategoHashMap resultCombinations) {
		return invoke(context, insertResults, instruction,
			createHashtableTerm(context.getFactory(), resultCombinations));
	}

	private static IStrategoAppl createHashtableTerm(ITermFactory factory, StrategoHashMap hashMap) {
		return factory.makeAppl(factory.makeConstructor("Hashtable", 1), hashMap);
	}
}
