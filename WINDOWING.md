# Windows and Metal

Window APIs remain main-thread only. `use window` exposes the earlier AppKit
window/input interface; `use metal` adds explicit GPU resources. The implementation
is APO calling system frameworks through the fixed-prototype native bridge, not
a C++ window helper, browser or Pygame wrapper.

## Example

```sh
./apo run hypercube.apo -- 8 max
```

Profiles are in README.md. `hypercube.apo` is the program, not a shell launcher.
The window starts at 1280x720 points; max renders 1920x1080 pixels and up to 4x MSAA.
The window's content aspect ratio is fixed, while the layer's frame is updated
when the view size changes. A paused resize triggers a fresh presentation.

The renderer loads Metal and QuartzCore, creates a Metal device, command queue,
CAMetalLayer, pipelines and depth/MSAA textures, and maintains three uniform/point
buffer slots. Reusing a slot waits for its previous command to complete. Command
errors include Metal's localized error message. Closing first waits for all slots,
then releases GPU resources before the window and its autorelease pools.

One compute pass produces camera-space points. One instanced draw expands every
edge into a screen-space quad; another draws circular vertex quads. Both use
antialiased fragments and the same depth attachment. Near-plane clipping is
performed on edges; points behind the near plane are dropped. Binary vertex IDs
and procedural one-bit edge construction retain the full topology through 12D.
Coordinates use GPU float32 and are approximate, not exact real-number rotations.

Shader reference: shaders/hypercube.metal. The actual embedded source is returned
by hypercube_shader() in lib/hypercube_shader.apo. They are byte-identical. Editing
one does not automatically regenerate the other. Rebuild the APO program after
updating the embedded source. Apple's shader compiler runs during initialization;
there is no standalone `.metal` launcher.

## Lower-level interface

- metal_open(window,width:int,height:int,samples:int) -> buffer
- metal_buffer(gpu,window,bytes:int) -> pointer (owned Metal object)
- metal_library(gpu,window,source:string) -> pointer (owned library)
- metal_compute(gpu,window,library,name) -> pointer
- metal_pipeline(gpu,window,library,vertex,fragment) -> pointer
- metal_finish(gpu,window), metal_close(gpu,window)
- metal_gpu_ms(gpu), metal_gpu_average_ms(gpu) -> float
- hypercube_gpu_init(gpu,window)
- hypercube_uniforms(gpu,matrix,params,dimension,time,pitch,yaw,zoom)
- hypercube_gpu_draw(gpu,window,params) -> bool

The low-level helpers expose ownership. Do not free/overwrite resources in use,
call them from tasks, mutate handle metadata, or mix window_present with a window
whose content view has been converted to Metal. Returned custom buffers/pipelines
are not automatically registered for metal_close; the hypercube explicitly stores
its resources in its GPU handle. This is a small first renderer API, not a general
resource graph, mesh loader or ownership-safe graphics framework.

## Native smoke checklist

Metal has not executed in the Linux development environment. On a real Mac:

1. Run 4D then 8D max; verify blue edges, pink dots, smooth rotation and correct
   occlusion. Check the startup shader/pipeline diagnostics.
2. Drag/zoom, pause, resize while paused, and resume. Cover/uncover and minimize/
   restore the window. Check that keyboard states reset on focus loss.
3. Change dimensions from 1 to 12. Every corner is represented, but overlapping
   projected vertices and depth occlusion can hide rear markers.
4. Close during animation. A clean exit waits for outstanding GPU commands.
5. Run benchmarks/gpu.apo. Timing samples must be read only after completion;
   they are not equivalent to uncapped whole-application FPS.

No platform smoke result is claimed before these checks run. The CPU viewer in
examples/hypercube_cpu.apo remains available for comparison and fallback.

## Primary interface references

https://developer.apple.com/documentation/QuartzCore/CAMetalLayer
https://developer.apple.com/documentation/metal/synchronizing-cpu-and-gpu-work
https://developer.apple.com/documentation/metal/mtlcommandbuffer/gpustarttime
https://developer.apple.com/documentation/dispatch/dispatch_apply_f
