module Sdf2Stratego
imports
  lib
  Prod2Oper
  Sdf2Overlays

rules

  imports2moditems :
    Imports(ns) 	-> [Imports(ns)]

  section2moditems(n) :
    Exports(gram) -> moditems
    where 
       <collect(gram2moditems(n) <+ imports2moditems);concat>gram => moditems
    
rules
  gram2moditems(n) :
    Signature(t)	-> Signature(t)
  gram2moditems(n) :
    Overlays(t)		-> Overlays(t)
  gram2moditems(n) :
    Rules(t)		-> Rules(t)
  gram2moditems(n) :
    Strategies(t)	-> Strategies(t)

