# APO 2.1.5

Based on the last recoverable source release, APO 2.0.15. The previously advertised
2.1 archive was not available and its claimed validation results are not reused.

## Implemented

- Named `use name` imports; compiler-adjacent libraries, PATH lookup, APO_LIB and
  --lib-dir. Quoted relative imports remain available.
- task fn callbacks with private stack bounds, native register preservation,
  synchronous bounded batches, and compile-time restrictions on unsafe runtime
  operations inside workers.
- Aligned checked 64-bit atomic loads/stores and acquire-release fetch-add.
- Explicit binary32 conversion and little-endian loadf32/storef32 helpers.
- A Metal compute and instanced-rendering implementation, MSAA, depth-tested blue
  edges and pink markers, and three reusable in-flight frame slots.
- Explicit layer frame updates, including paused-window resizing, sample-count
  negotiation, nil-drawable handling, NSError diagnostics and joined shutdown.
- APO source build/test drivers and CPU/GPU benchmark entry points. No .sh files.

## Fixes

- Missing-source errors separate the filename from the `apo:` diagnostic prefix.
- Undefined-variable diagnostics include the missing name.
- Source bootstrap instructions supply an explicit SDK, avoiding reliance on a
  manually exported CPATH for macOS system headers.
- Process helper rejects embedded NULs in executable paths and arguments.
- Existing sampled-FPS floating-point fix, checked decimal semantics and source
  overwrite safeguards are retained.

## Performance scope

The Metal path replaces CPU pixel rasterization with compute projection and two
instanced draw calls per frame. The per-frame CPU upload is a 640-byte parameter
block. Repeated geometry, shaders and pipelines are not rebuilt every frame.
Parallel work submits one contiguous range per lane instead of one dispatch per
item. These are implementation changes, not measured native speedup claims.
