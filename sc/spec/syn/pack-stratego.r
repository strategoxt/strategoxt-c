\literate[Pack-Stratego: Flattening a Stratego module hierarchy]

	\begin{abstract}

	Module flattening strategy for Stratego based on the generic
	graph flattening algorithm from the library.
	The program handles command-line options for indicating paths
	to directories with library modules and finds modules based on
	such a path.
	It writes dependencies for inclusion in a Makefile to the .r.dep file.
	Pack-stratego calls an external process (parse-mod) for parsing
	individual modules.

	\end{abstract}

\begin{code}
module pack-stratego
imports lib pack-graph pack-modules sugar dynamic-rules config
signature
  constructors
    Ext : String -> ConfigKey

strategies

  main = 
    where([get-path => prefix | id])
    ; where(prim("get_conf_datadir") => datadir)
    ; where(prim("get_conf_pkgdatadir") => pkgdatadir)
    ; import-config-file(
        find-config-file(![prefix, pkgdatadir], !"pack-stratego.config")
      )
    ; import-config-files(
        find-plugins(![prefix, <conc-strings>(datadir,"/pack-stratego-plugins")], 
		     !".plugin")
      )
    ; pack-modules(pack-stratego, basename)

  pack-stratego(mkpt) =
    \ root -> (["list-cons","tuple-cons",root], (), []) \
    ; graph-nodes-roots(Fst; get-module(!["." | <mkpt>()])
		       , get-stratego-imports
		       , \ (n,x,xs) -> [x|xs] \ )
    ; unzip
    ; (id, flatten-stratego)

  get-module(mkpath) =
    ? mod
    ; get-config-keys(?Ext(<id>))
    ; fetch-elem(!(<id>, mod); get-module-ext(mkpath))
    <+ <fatal-error> ["*** module ", <id>, " not found"]

  get-module-ext(mkpath) =
    ?(ext, <id>)
    ; guarantee-extension(!ext)
    ; <find-in-path>(<id>, <mkpath>)
    ; (  !(<id>
           , <parse-file(mkpath)> (<id>
			          ,<basename; guarantee-extension(!"mtree")>
				  ,<get-config> Ext(ext)))
       <+ <fatal-error> ["parse error in ", <id>] )

  get-stratego-imports =
    \ (_, Specification(xs)) -> xs \;
    filter(\Imports(xs) -> xs\ );
    concat

  flatten-stratego = 
    map(\Specification(xs) -> xs\; filter(not(Imports(id))));
    concat; 
    \ xs -> Specification(xs) \ 

  parse-file(mkpath) : 
    (filein, fileout, tool) -> trm
    where <not(eq)> (None, tool)
	; if-verbose2(<debug(!"parsing: ")> filein)
        ; <if-verbose4(debug); call>
		(tool, [ "-i", filein, "-o", fileout, "--verbose", <verbosity; int-to-string>,
		       | <conc>(<get-config> "-I", <!["-silent"]; if-verbose2(![])>) ])
	; <ReadFromFile> fileout => trm

  parse-file(mkpath) : 
    (filein, fileout, None) -> <if-verbose2(debug(!"reading ")); ReadFromFile> filein

\end{code}
% Copyright (C) 2000-2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.
