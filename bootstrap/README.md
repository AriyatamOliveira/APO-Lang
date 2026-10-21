# C source bootstrap

compiler.c is a generated C11 lowering of compiler.apo. runtime.h supplies host
integer, memory, string, printing and file operations. The produced APO executables
do not link this header or a C runtime written here.

Use the explicit Apple SDK command in the root README, then run build.apo through
the resulting .apo-bootstrap. No older APO release is required. This directory
contains no precompiled executable. GCC/Clang are supported host compilers for
the development checks; only Apple Silicon macOS is an executable target.
