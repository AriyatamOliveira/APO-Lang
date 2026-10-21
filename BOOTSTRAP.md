# Building from source

`bootstrap/compiler.c` is a C11 lowering of the compiler implementation, with
`bootstrap/runtime.h` providing host operations. It is source, not an embedded
Mach-O executable. Compiling it produces a compiler that directly emits ARM64
instructions and signed Mach-O structures from parsed APO programs.

`compiler.apo` is the authoritative implementation. The source bootstrap was
regenerated after the 2.1.5 compiler edits. A development AST exporter and C
lowering tool performed that translation. Neither Python nor that development
lowerer is needed to build or use this distribution. The C snapshot is included
and can be inspected in full; editing compiler.apo does not require regenerating
it for normal subsequent self-builds.

The first native build requires an existing executable translator. With no old
APO compiler and no prebuilt executable included, the local C compiler provides
that initial step. Source text alone cannot execute itself. This requirement is
not removed by giving a shell script an `.apo` extension; no such disguise is used.

From the release directory, follow the explicit SDK compile command in README.md,
then `./.apo-bootstrap run build.apo`. The build driver is actual APO source. It
uses a fixed-argument posix_spawn bridge, not shell command expansion. Later,
`./apo run build.apo` rebuilds without the C compiler.

The driver compares stage 2 and stage 3, verifies stage 3's signature and a newly
compiled smoke executable, then renames stage 3 to `apo`. Failures before that
rename leave an existing compiler intact. It rejects symlink/directory targets,
uses a build lock, and retains failed stages and logs. It requires the current
working directory to contain compiler.apo and lib/.

On Linux, GCC and Clang source bootstraps emitted identical complete compiler
images. The sanitizer-enabled bootstrap emitted the same image. These checks do
NOT mean that a generated native compiler was run through its complete self-build
on macOS during development. That remains an explicit check in build.apo.
