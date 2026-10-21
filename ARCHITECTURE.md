# Implementation

The compiler parses APO into typed statements/expressions, emits raw ARM64
instruction words, writes Mach-O headers/load commands, hashes the code pages,
and constructs an embedded ad-hoc signature. It does not route ordinary program
compilation through another compiler, assembler or linker.

Named imports are expanded before parsing. Declarations share a namespace and
functions must still precede their use. The new task modifier records an effect
restriction and a native adapter address. Referencing a task function returns that
adapter pointer. No general function-pointer type or native callback FFI is added.

The task adapter preserves X19-X30 and the ABI-required low halves of D8-D15,
constructs APO's argument pairs, loads the read-only allocation registry, and
sets a private 128 KiB soft stack bound before entering the worker. Quotient/
remainder partitioning creates balanced disjoint index intervals even when the
count is not divisible by the lane count. dispatch_apply_f joins the batch.
Bounds and stale-generation checks remain enabled for ordinary buffer access.

64-bit atomics validate the handle, entire access range and 8-byte alignment.
Loads use LDAR; stores use STLR; fetch-add uses LDAXR/STLXR retry. Fetch-add returns
the old bit pattern and wraps modulo 2^64. No unsupported global claim of
sequential consistency, lock-free progress under all scheduling, or race freedom
for arbitrary user pointers is made.

Metal uses the existing fixed-prototype native-call emitter. MTLSize is passed
as an indirect 24-byte integer aggregate, while four-double homogeneous aggregates
such as CGRect/MTLClearColor use floating registers. Shader compilation and GPU
execution belong to the system Metal implementation. The shader is included as
source. No external native graphics helper or prebuilt shader is linked.

The CPU renderer from 2.0.15 remains. Its raw line kernel and checked memory fills
are not removed. Default CPU instruction-selection optimizations and --no-opt
remain as documented in LANGUAGE.md; this release does not invent an SSA optimizer
or claim measured native superiority to mature compilers.

Development built the C bootstrap with GCC and Clang, independently decoded output
with LLVM, audited signatures, and ran selected generated instructions in an A64
model. Model code/tools are not deployment dependencies. See VALIDATION.md for the
precise distinction between executed models, compilation and native platform tests.
