\literate[sdf2sdf]

	\begin{abstract}
	This module defines a tool for applying transformations to SDF
	definitions. By means of command line options the application
	of several transformations can be applied. Without any options
	the tool acts as a pretty-printer.
	\end{abstract}

% Sdf Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

\paragraph{Usage}

\begin{verbatim}
  sdf2sdf -i file -o file [--pack-sdf] [--sdfcons] [--sdf2asdf] [--sdf-bracket]
\end{verbatim}

This tool combines several tools working on SDF abstract syntax and
provides a parsing front-end and pretty-printing back-end.

\begin{code}
module sdf2sdf
imports lib gt-paths sglr
signature
  constructors
    Tool : String -> Option

strategies

  sdf2sdf = 
  parse-options(sdf2sdf-options <+ io-options)
  ; ((option-defined(Input(?input))
     ; option-defined(Output(?output))
     ; where(filter( \ Tool(x) -> x\ ; not("pack-sdf") ) => tools)
     ; where(new-file => tmp1)
     ; where(new-file => tmp2)
     )
    <+ default-usage)
  ;(((option-defined(Tool("pack-sdf"))
     ; <call-sdf-tool> ("pack-sdf", ["-i", input, "-o", tmp2])
     ; <call-asfix-tool> ("implode-asfix", ["-i", tmp2, "-o", tmp1])
     ) 
     <+ <sglr> (<concat-strings>[SDFTOOLS, "/share/sdf-tools/sdf.cons.tbl"],
                input,
                tmp1))
      ;<call-asfix-tool>("implode-asfix", ["-i", tmp1, "-o", tmp2])
    ; (  <call-tools> (tmp2, tmp1, tools) => tmp
    ; <call-sdf-tool> ("sdf-bracket", ["-i", tmp, "-o", tmp1])
    ; <call-sdf-tool> ("sdf2text", ["-a", "-i", tmp1,  "-o", output])
    ; <rm-files> [tmp1, tmp2]
    )
   <+ <rm-files> [tmp1, tmp2]
    )

  sdf2sdf-options = 
      Option("--pack-sdf",    !Tool("pack-sdf"))
    + Option("--sdfcons",     !Tool("sdfcons"))
    + Option("--sdf2asdf",    !Tool("sdf2asdf"))
    + Option("--sdf-bracket", !Tool("sdf-bracket"))

  call-tools = ?(tmp1, tmp2, []); !tmp1

  call-tools = ?(tmp1, tmp2, [tool | tools])
    ; <call-sdf-tool> (tool, ["-i", tmp1, "-o", tmp2])
    ; <call-tools> (tmp2, tmp1, tools)

  call-sdf-tool = 
    ?(prog, args);
    <call-noisy>( <concat-strings>[SDFTOOLS, "/bin/", prog], args)

  call-asfix-tool = 
    ?(prog, args);
    <call-noisy>( <concat-strings>[ASFIXTOOLS, "/bin/", prog], args)
\end{code}
