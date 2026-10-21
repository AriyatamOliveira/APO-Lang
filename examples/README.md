# Examples

Run these commands from the project root after the source bootstrap and `build.apo` steps in README.md.

| Command | Program |
|---|---|
| `./apo run main.apo` | Printing, variables, control flow, exact decimal addition |
| `./apo run examples/syntax.apo` | Declarations, strict updates, elif, trailing commas |
| `./apo run examples/memory.apo` | Checked manually allocated buffers |
| `./apo run examples/memory_control.apo` | Resizing, layouts, arena allocation |
| `./apo run examples/arena.apo` | Aligned allocations and arena reset |
| `./apo run examples/assembly.apo` | Explicit ARM64 instruction words |
| `./apo run examples/arguments.apo -- one "two words"` | Command-line arguments |
| `./apo run examples/optimization.apo` | Bulk memory fill and arithmetic |
| `./apo run examples/window.apo` | Native framebuffer presentation |
| `./apo run examples/cube_window.apo` | Interactive, depth-tested 3D cube |
| `./apo run hypercube.apo -- 8 max` | Metal 8D topology, blue edges and pink vertices |
| `./apo run examples/render_cube.apo -- out/cube.png` | Static color render |
| `./apo run examples/render_hypercube.apo -- 6 out/hypercube.png` | Static 6D render |
| `./apo run examples/cube.apo` | Terminal software-rendered rotating cube |
| `./apo run examples/donut.apo` | Timed playback of stored terminal donut frames |

`examples/hypercube_window.apo` includes the root `hypercube_live.apo` viewer,
so both entry points use the same profiles and FPS measurement. `examples/render.apo` is the original PNG renderer retained as a
regression example. The donut is pre-rendered; the cubes and hypercubes are not.

Window rendering needs a logged-in graphical macOS session. Assembly and raw
pointer examples are explicitly unsafe. Frame-rate targets are not guarantees.

`./apo run examples/parallel.apo` demonstrates bounded CPU workers.
`./apo run examples/hypercube_cpu.apo -- 8 balanced` selects the CPU fallback.
Benchmarks are `./apo run benchmarks/cpu.apo` and
`./apo run benchmarks/gpu.apo -- 8 max`.
