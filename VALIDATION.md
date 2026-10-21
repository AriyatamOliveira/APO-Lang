# APO 2.1.5 validation

## Boundary

Work was performed in Linux. GCC and Clang compiled the source bootstrap. A
small development AArch64 instruction interpreter executed selected generated
Mach-O code with modeled Darwin calls. The parallel model time-slices callbacks
on separate simulated stacks sharing memory and simulates exclusive-store retries.
It is not the macOS kernel, libdispatch, a cache-coherence simulator, or a real GPU.

No native M1 frame rate, macOS loader execution, complete native self-build,
Metal shader compilation, AppKit display, input delivery, or native thread
execution was available. These are necessary follow-up platform tests, not passes.
The previous nonexistent 2.1 archive's test claims are not used.

## Results actually obtained

| Check | Observation |
|---|---|
| Inherited manifest entries | 187 compiler checks, with expected acceptance/rejection |
| New manifest entries | 22 compiler checks, with expected acceptance/rejection |
| Generated programs executed in the model | 140 expected-output/error cases passed |
| Expected compiler rejections | 56 passed |
| Additional accepted cases | 13 compiled only; reasons below |
| Program/example/benchmark/tool sources | 26 checked successfully |
| Named imports outside release directory | 3 cases passed, including spaces and PATH invocation |
| GPU procedural topology | 45,057 aggregate edges across dimensions 1..12 checked for uniqueness, adjacency and vertex degree |
| Compiler image from GCC/Clang host bootstraps | Byte-identical |
| Sanitizer-enabled bootstrap | Compiler and Metal-viewer code generation completed without reported address/undefined-behavior errors |
| Mach-O audit | 170 images; 2,470 code-page SHA-256 digests verified independently |
| Representative instruction decoding | Compiler, viewer, parallel, build and test images decoded without unknown instructions |

Counts describe different layers and are not additive claims of thousands of
independent unit tests. The 140 program cases include expected runtime failures.
The compiler's complete target image was 363,440 bytes. Hashes are in
`docs/build-comparison.json`; no precompiled compiler is included in the release.

The 13 compile-only cases are legacy_052, overlap_exhaustive, far_branch,
large_string, rasterizer, v2_ffi, v2_ffi_float, v2_fill_differential, v2_renderer,
v201_fps, v201_topology, v201_vertices, and v201_lines. The two FFI tests need the
native platform. legacy_052 and v201_fps exceeded this turn's model instruction
budget. The remaining large cases were compiled rather than fully interpreted.
The native APO test driver includes all of them; --stress selects long fixtures.

## New tests

The new core program checks binary32 representation/round trips, exact decimal
compatibility, a thousand awkward FPS denominators, signed-bit wrapping atomic
fetch-add, and zero-duration FPS handling.

The parallel program uses lane counts 1, 2, 3, 4, 8 and 64 with 509 items, including
empty batches. Every item is written to its own slot, and all workers increment
a shared atomic counter. The interpreter time-slices callbacks every seven
instructions. All 82 callback invocations preserved native callee-saved registers
and their stack pointer. The program matched all index/counter assertions in
740,285 interpreted instructions. This is a modeled concurrency result, not a
native speed or memory-ordering conformance result.

Rejection/error cases include allocation/free/printing/native calls in tasks,
ordinary-function calls from tasks, invalid task signatures, missing libraries,
invalid import names, float32 NaN/overflow/width, unaligned/out-of-bounds/stale
atomic access, invalid pool size, exact decimal precision errors, and embedded
NUL in process paths. Initial test expectations used wording different from the
runtime's existing diagnostic categories; the expected text was corrected and
the cases rerun. No wrong diagnostic was relabeled a language success.

## Graphics checks

The actual Metal viewer and GPU benchmark compile to ARM64. ABI lowering of a
24-byte integer aggregate and a four-double homogeneous aggregate was compared
with Clang-generated Apple ARM64 assembly. This supports the native-call layout
used for MTLSize, CGRect and MTLClearColor, but does not validate every platform
method or driver behavior.

The shader's procedural edges were compared independently with hypercube bit-flip
topology for dimensions 1..12. Embedded and reference shader text are identical.
No shader compilation, GPU pixels, antialiasing quality, real command completion,
window resize/close, or native rendering performance is claimed as tested.
Legacy PNG files in docs are reference images from the CPU release, not images
produced by this Metal implementation.

## Build and benchmarks

build.apo and test.apo were compiled and independently decoded, but not executed
through their full native posix_spawn/codesign paths here. The first native build
explicitly checks its two self-builds and a smoke program before replacing apo.
Do not call the bootstrap comparison in this report an executed self-hosting proof.

The CPU and GPU benchmark sources are included and compiler-checked. No measured
native speedup, FPS, GPU time, RAM usage, or comparison against C++/Python exists
for this release. Run on the actual Mac:

```sh
./apo run test.apo -- --stress
./apo run benchmarks/cpu.apo
./apo run benchmarks/gpu.apo -- 8 max
```

Inspect the viewer using WINDOWING.md's checklist. Failed shader/native tests
must be investigated, not converted into passing claims because APO compilation
succeeded. Passing these bounded checks is not proof of absence of bugs.
