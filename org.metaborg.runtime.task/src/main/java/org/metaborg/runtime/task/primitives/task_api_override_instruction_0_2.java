package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_override_instruction_0_2 extends AbstractPrimitive {
	public static task_api_override_instruction_0_2 instance = new task_api_override_instruction_0_2();

	public task_api_override_instruction_0_2() {
		super("task_api_override_instruction", 0, 2);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final IStrategoTerm taskID = tvars[0];
		final IStrategoTerm newInstruction = tvars[1];
		TaskManager.getInstance().getCurrent().getTask(taskID).overrideInstruction(newInstruction);
		return true;
	}
}
