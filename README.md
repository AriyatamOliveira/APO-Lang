# APO 2.1.5

A small language that emits native macOS ARM64 executables. This source release
adds named library imports, a Metal hypercube renderer, restricted parallel tasks,
atomic integer operations, and binary32 conversion. The compiler is written in APO.

Experimental. The CPU instruction tests described in VALIDATION.md ran in a
Linux development model. Metal shader compilation, macOS window presentation,
and the complete native build must still be tested on an Apple Silicon Mac.

## First build

Requirements: an Apple Silicon Mac, macOS 11 or later, and Apple Command Line
Tools. No previous APO release, Python, package manager, or network download is
needed during the build. No compiler executable is included in this archive.

Open Terminal in the extracted `apo-2.1.5` directory:

```sh
cd ~/Downloads/apo-2.1.5
SDK="$(xcrun --sdk macosx --show-sdk-path)"
SDKROOT="$SDK" xcrun --sdk macosx clang -std=c11 -O2 -arch arm64 \
  -isysroot "$SDK" bootstrap/compiler.c -lm -o .apo-bootstrap
./.apo-bootstrap run build.apo
./apo --version
```

The first command that compiles C creates the source bootstrap. The next command
runs **build.apo**, which compiles the APO compiler, performs two self-builds,
compares them, verifies the embedded signature, and runs a native smoke test.
Only after those checks does it install `./apo` in the current release directory.
A failure preserves an existing `apo`; logs and stages remain in `.apo-build-*`.
A destination named `apo` that is a directory or symlink is rejected.

If `xcrun` is missing, install Apple's tools with `xcode-select --install`, finish
the installer, and retry. An `inttypes.h` error should not require a global CPATH
workaround: the compile command explicitly supplies the macOS SDK. Do not continue
past a failed bootstrap command.

The C bootstrap is needed only to start from source with no APO compiler. Ordinary
APO builds do not invoke C, C++, LLVM, an assembler, or a linker. There are no `.sh`
launchers in this archive. The build driver, programs, tests, and benchmarks are
APO files; the resulting compiler and program outputs are native executable files.

For a later rebuild after editing compiler.apo:

```sh
./apo run build.apo
```

Run build.apo from this release directory. A killed build can leave
`.apo-build-lock`; remove that empty directory only after checking that no build
is still running. No automatic deletion of another build's lock is attempted.

## Metal hypercube

```sh
./apo run hypercube.apo -- 8 max
```

Or compile once and run the result:

```sh
./apo build hypercube.apo -o out/hypercube
./out/hypercube 8 max
```

`hypercube_live.apo` is an alias entry point for the same program.

| Profile | Internal pixels | Samples | Rate cap |
|---|---:|---:|---:|
| max / high (default) | 1920 x 1080 | up to 4x MSAA | 60 Hz |
| quality / balanced | 1280 x 720 | up to 4x MSAA | 60 Hz |
| eco | 960 x 540 | 1 | 30 Hz |

Dimensions are 1..12. Drag to orbit, scroll to zoom, Space to pause, R to reset,
left/right arrows to change dimension, and Escape/window close to quit. All
vertices and edges are retained. Pink markers remain depth-tested, so a rear
vertex can be obscured by nearer geometry. Rate caps are not promised frame rates.

This path uses a GPU compute pass for projection and instanced triangles for blue
edges and pink circular markers. It does not upload a CPU-rendered image. The CPU
updates the small rotation matrix and camera parameters. Three resource slots
avoid waiting for every frame immediately after submission. A slot is waited on
before its buffers are written again, and shutdown waits for all outstanding work.

Metal shader source is embedded in `lib/hypercube_shader.apo`. The matching
`shaders/hypercube.metal` is an editable reference, not a launcher. Apple's Metal
implementation compiles the shader at program startup. APO is not an independent
compiler for Apple GPU machine code. No external shader command is run.

An explicit software-rendered fallback is also included:

```sh
./apo run examples/hypercube_cpu.apo -- 8 balanced
```

It uses the older CPU resolution profiles, not the Metal ones.

## Libraries and separate project folders

```apo
use memory
use parallel
```

Named imports are resolved against the `lib` directory beside the compiler. They
do not search the application's directory first. The compiler can be invoked
through an absolute path or PATH from another project directory. Keep the
compiler and its `lib` folder together. A symlink to the compiler does not resolve
its target's installation directory automatically; set APO_LIB for that setup.

```sh
/path/to/apo-2.1.5/apo run /path/to/my-project/main.apo
```

`APO_LIB=/absolute/library/directory` or `--lib-dir /absolute/library/directory`
selects another library root. Quoted relative imports remain supported. `use`
composes source in one namespace; this is not a namespaced package manager.

## Parallel work

```sh
./apo run examples/parallel.apo
```

A worker is declared as `task fn` and receives a buffer plus a half-open index
range. Allocate before dispatch, give workers disjoint memory regions or use
atomics, and free after the synchronous batch returns. The task compiler rejects
allocation, printing, timers, native calls, and calls to ordinary functions.
Unsafe pointer access and instruction words still require programmer discipline.

See LANGUAGE.md for the exact API and restrictions. Worker lanes are not a promise
of a physical core each. GPU drawing does not need the CPU parallel API; the CPU
batch facility is separate and useful for simulations or data preparation.

## Tests and benchmarks: APO entry points

```sh
./apo run test.apo
./apo run test.apo -- --stress
./apo run benchmarks/cpu.apo
./apo run benchmarks/gpu.apo -- 8 max
```

The native test runner verifies expected outputs, rejections, runtime errors, and
signatures. It deliberately does not fake a display or call successful compilation
a successful Metal run. Test the Metal viewer manually in a logged-in macOS session.

The CPU benchmark compares identical work with 1, 2, 4, and 8 lanes and checks
identical results. The GPU benchmark warms up, presents 360 measured frames, and
reports wall time plus completed-command GPU time. Its FPS includes presentation
and the profile's cap. No native M1 speedup or FPS result is claimed here.

## Files

- `compiler.apo`, `bootstrap/`: complete compiler and source bootstrap.
- `build.apo`, `test.apo`: build and test drivers, without shell launchers.
- `hypercube.apo`, `examples/`, `benchmarks/`: runnable APO source.
- `lib/`, `shaders/`: reusable source and the Metal shader reference.
- `tests/`: legacy and new regression fixtures and expected text outputs.
- `VALIDATION.md`, `LANGUAGE.md`, `WINDOWING.md`: contracts and test boundaries.

This is not a general-purpose game engine or a claim of superiority to C++ or
Python. Unsupported features include arbitrary native callbacks, an ownership
checker, a general module system, audio, and GPU shader compilation in APO syntax.
