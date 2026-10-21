# APO 2.1.5 language reference

This reference describes implemented syntax. Source files use `.apo`. There is
include-once `use` composition (section 16), but no namespace/module system. Source bytes are UTF-8; identifier characters
are ASCII letters, digits, and underscore, with no leading digit.

## 2.0.15 syntax additions

`println` accepts the same items as `print` and appends one newline. Bare `println`
is a blank line. `print` remains unchanged, including its explicit `\nl` item.

```apo
println: "Hello", " world"
println
let score = 7i
set score += 1i
if score < 5i then
  println "low"
elif score < 10i then
  println "middle"
else
  println "high"
end
```

`set` updates an existing visible binding. An undefined name is a compile error.
It cannot reassign a `const`, change a type, or introduce a type annotation. Indexed
buffer writes are allowed. Ordinary `x = value` retains its original infer-or-update
behavior. `let`, `const`, and `set` are different operations, not interchangeable words.

`elif` branches are tried in order, stop at the first true condition, and have separate
lexical scopes. A chain is limited to 64 `elif` branches. Non-void functions still
need returns on every recognized path.

A final comma before `)` is accepted in function parameter lists and calls. This
does not allow missing arguments, double commas, or a final comma in `print`.

Source files may begin with a UTF-8 BOM. LF, CRLF, and CR line endings are accepted.
The `.apo` suffix is case-insensitive for both entry files and `use` paths; other path
characters still follow the filesystem's case rules. Either `#` or `//` may follow
`use "path.apo"`. Includes still start at column one and are bounded to 64 files.

`elif`, `println`, and `set` are reserved words in this release. Rename an older
variable or function using one of those names.


## 1. Program structure

Execution starts at the first top-level statement. Definitions do not execute
their bodies until called. A program reaching its end exits with status zero.
Statements normally end at a newline. Blocks end with `end`; indentation is for
readability, not block structure. `#` and `//` start line comments.

```apo
# Top-level code; no required main function.
answer = 42
print: answer, \nl
exit 0
```

An empty or comment-only file is valid. A source file is limited to 8 MiB by the
CLI. Reserved words and built-in function names cannot be user function names.

## 2. Values and variables

| Type | Meaning |
|---|---|
| `number` (`num`) | Signed 64-bit coefficient divided by 1,000,000 |
| `int` | Signed 64-bit integer, not decimal-scaled |
| `float` (`f64`) | Explicit IEEE 754 binary64; approximate arithmetic |
| `bool` | `true` or `false` |
| `string` | Immutable byte sequence; source text is UTF-8 |
| `buffer` | Generation-tagged handle to a manually freed byte allocation |
| `pointer` (`ptr`) | Raw 64-bit process virtual address |
| `void` | Function result only; not a storable value |

```apo
score = 176          # inferred number
name = "Aiun"        # inferred string
ready = true         # inferred bool
bits = 42i           # inferred int
count: int = 42      # exact conversion of the numeric initializer
```

The first assignment declares a variable in its current scope. A later assignment
to a visible variable updates it; its type cannot change. Explicit annotations
must match except for supported explicit numeric annotations/conversions; `float` annotations
can convert a number or int to binary64. Conditions must be `bool`, not arbitrary truthy numbers or strings.

Blocks have lexical scope. An existing outer variable can be updated; a new name
inside a block does not escape it. A `for` variable shadows an outer name while
the loop executes. Functions have their own scope and cannot capture top-level
variables: pass values as arguments.

### Number literals and exact arithmetic

```apo
price = 12.345678
result = 0.1 + 0.2
assert(result = 0.3)
```

A `number` stores up to six fractional decimal places, with range
`-9223372036854.775808` through `9223372036854.775807`. Decimal literals need digits
before and, when a dot appears, after the dot. Exponent notation is not supported.
Negative values use unary minus. Unrepresentable literals/results are rejected;
there is no silent arithmetic rounding, overflow wrapping, infinity, or NaN.

`1 / 8` is exactly `0.125`; `1 / 3` is a runtime precision error. Likewise,
`0.000001 * 0.1` errors rather than silently becoming zero. A literal with more than six fractional digits is rejected even when the extra
digits are zero; write `1.0`, not `1.0000000`.

### Full-width integers

```apo
maximum = 9223372036854775807i
minimum = -9223372036854775808i
mask = 0xff
all_bits = 0xffffffffffffffff  # signed interpretation: -1
```

The `i` suffix marks a decimal integer literal. Hexadecimal literals begin with
`0x`/`0X` and describe a 64-bit bit pattern, interpreted as signed. No unsigned
integer arithmetic type exists yet, although memory loads of widths 8/16/32
return unsigned values representable as `number`.

Mixing `int` and `number` in an arithmetic or comparison expression is a type
error. Use `int(value)` or `number(value)`. `int(0.5)` is an error, not a truncating
conversion. `number(huge_int)` can overflow the decimal range. Identity conversions
are allowed. For intentional truncation of positive decimal values, use
`int(floor(value))`; for signed truncation choose the appropriate floor/ceil rule.

### Strings and escapes

```apo
text = "Hi\nHello"
print "\e[H", text, \nl
```

Supported escapes: `\n`, `\r`, `\t`, `\"`, `\\`, `\e` (ESC byte 27), and `\0`
(NUL byte). `\nl` is a standalone print newline item, not a general expression.
Actual line breaks cannot appear inside quoted strings; use `\n`.

Strings compare by byte content using `=` and `!=`. No automatic concatenation, ordering,
or Unicode code-point indexing is implemented. `len(text)` counts bytes.
`text[index]` and `char_at(text,index)` return a one-byte string. On UTF-8 text,
a single selected byte may not be a complete character. Strings cannot be modified.

## 3. Printing and expressions

Both forms are valid:

```apo
print: "Hi", " ", "Hello", \nl
print "value = ", 2 + 3, \nl
```

`print` evaluates its comma-separated items left to right, without inserting
separators. It supports number, int, float, bool, string, and pointer, not buffers or void.
Numbers print without redundant fractional zeroes. Pointers print as `0x` and
16 hexadecimal digits. A newline must be explicitly requested.

Operators, from strongest to weakest:

1. Parentheses, function calls, and indexing.
2. Unary `-` and unary `+`.
3. `*`, `/`, `%`.
4. `+`, `-`.
5. `<`, `<=`, `>`, `>=`.
6. `=`, `!=`.
7. `not`.
8. `and`.
9. `or`.

Use parentheses to make mixed comparisons and negation unambiguous. Arithmetic
requires matching numeric types; float does not support `%`. Decimal arithmetic is exact-or-error. Integer
`+`, `-`, `*`, and unary negation check signed overflow; division truncates toward
zero and errors for zero divisors or `INT64_MIN / -1`. `%` is a remainder with
the dividend's sign, for both numeric types. `INT64_MIN % -1` is zero.

`and` and `or` short-circuit. Equality is available for matching scalar types,
strings, and pointers; buffers cannot be compared. `=` inside an expression means
equality. Float comparisons obey unordered NaN rules. `x = ...` as a statement is assignment; there is no C-style assignment
expression and `==` is also accepted as equality in expressions.

## 4. Conditions and loops

```apo
hello = 176
a = 7
if a = 7 then
  print hello, \nl
else
  print "different", \nl
end
```

`elif condition then` introduces another branch; one `end` closes the complete chain. `elseif` is not a keyword.

```apo
for word in "yo" "yup" "yah"
  print word, \nl
end

for amount in 1 -2 (1 + 2)
  print amount, \nl
end
```

List items are separated by whitespace. Use parentheses for compound expressions.
All list items have the same type and are evaluated once, before the loop body.
There is no general list/array literal or iterable container yet.

```apo
i = 0
while i < 10 do
  i = i + 1
  if i = 2 then
    continue
  end
  if i = 4 then
    break
  end
  print i
end
```

`break` exits the innermost loop; `continue` advances to its next iteration. These
also work in `for` loops. They are errors outside a loop.

## 5. Functions

```apo
fn square(x)
  return x * x
end

fn factorial(n: int): int
  if n <= 1i then
    return 1i
  end
  return n * factorial(n - 1i)
end

fn announce(text: string): void
  print text, \nl
  return
end

print square(12), " ", factorial(10i), \nl
announce("Finished")
```

Parameters and return types default to `number`. Functions must be defined before
use, but can call themselves recursively. Mutual recursion through forward names
is not supported. Definitions are top-level only. No closures, overloading,
default arguments, variadic arguments, or methods exist.

Arguments evaluate left to right. Parameters are passed by value: copying a string
or buffer copies its reference pair, not its contents. A `void` call can be a
statement but not a value; any other returned value may also be explicitly ignored
by calling as a statement.

Non-void functions must return an exactly matching type on every recognized path.
This analysis is conservative: an infinite loop is not assumed to prove a return.
Use a `return` after a loop when necessary. A `void` function may return with no
expression or fall through. No implicit conversion is performed at call/return
boundaries.

Limits: 16 parameters/arguments per call; 2,048 local slots per frame; 32 KiB frame
allocation; an approximately 1 MiB soft limit on generated function stack use.
The kernel stack mapping requested by the executable is larger. These are
implementation limits, not guarantees of unlimited recursion.

## 6. Timing

| Function | Signature and behavior |
|---|---|
| `clock()` | Returns a `number`: elapsed seconds since runtime initialization |
| `sleep(seconds)` | `number -> void`; blocks for a nonnegative relative interval |
| `sleep_until(deadline)` | `number -> void`; blocks until an absolute clock deadline |

The timer is monotonic Mach absolute time, not date/time-of-day and not the count
of instructions executed. It is an awake-time clock rather than a continuous
clock that includes system sleep. The runtime asks the kernel for the hardware
timebase; code does not assume a particular M1/M2/M3 tick frequency.

Clock readings floor the sampled time to microseconds because `number` stores
six decimal places. Wait conversions round deadlines upward to a hardware tick.
Those sampling choices are explicit timer behavior, not silent rounding in
ordinary arithmetic. The OS may wake a waiting process later than requested;
there is no hard-real-time or exact-FPS guarantee.

```apo
start = clock()
sleep(0.05)
assert(clock() - start >= 0.05)
sleep_until(start + 0.1)
```

A past nonnegative deadline returns promptly. Negative durations/deadlines and
unrepresentable timer calculations error. Interrupted kernel waits are retried
against the same deadline.

For animation, derive state from time and sleep to absolute deadlines. Merely
adding a fixed sleep after a CPU-dependent update loop does not compensate for
the time spent computing. The donut shows elapsed-time frame selection and
skipping missed frames. `movement.apo` uses `x = speed * elapsed` for constant
velocity. Stateful collision/physics needs a deliberate integration strategy.

## 7. Checked manual memory

### Allocation and lifetime

```apo
b = alloc(64)
assert(len(b) = 64)
assert(b[0] = 0)
b[0] = 72
b[1] = 105
write_bytes(b, 0, 2)
free(b)
```

`alloc(size)` accepts number or int, but the size must be exactly integral and
from 1 through 1,073,741,824 bytes (1 GiB). It returns a zero-initialized,
read/write, non-executable anonymous mapping. The OS aligns and rounds the backing
mapping to its page granularity; APO checks the requested byte length, not the
extra mapped tail. Custom alignment and executable memory are not exposed.

`free(buffer)` explicitly releases the mapping. No garbage collection, reference
counting, ownership inference, or automatic end-of-scope freeing exists. Losing
the handle without freeing leaks until process exit. Process exit releases the
remaining mappings through normal OS teardown.

There can be 1,024 live allocations at once. A lazily allocated 32 KiB descriptor
registry tracks requested lengths and generation numbers and remains until exit.
Free slots can be reused, so there is no limit of only 1,024 total allocations over
a program's lifetime. Generation-counter exhaustion retires that slot.

```apo
b = alloc(4)
alias = b
free(b)
# alias[0] now raises an error, even if another alloc reuses the descriptor slot.
```

Checked operations detect stale handles and double-free. These checks do not
protect against a program that deliberately corrupts its metadata with unsafe
raw pointer writes.

### Operations and widths

All offsets and lengths below are **bytes**, zero-based, not typed element indices.
Offsets/counts accept `number` or `int`, but must be nonnegative and integral.
Checks include the entire access width. For example, `load32(b, 1)` needs bytes
1 through 4 to be within the requested allocation.

| Read | Write | Stored bytes | Read result / write value |
|---|---|---:|---|
| `load8(b, offset)` | `store8(b, offset, value)` | 1 | unsigned 0..255 as number |
| `load16(b, offset)` | `store16(b, offset, value)` | 2 | unsigned 0..65535 as number |
| `load32(b, offset)` | `store32(b, offset, value)` | 4 | unsigned 0..4294967295 as number |
| `load64(b, offset)` | `store64(b, offset, value)` | 8 | signed full-width int |
| `loadnum(b, offset)` | `storenum(b, offset, value)` | 8 | number's exact coefficient |

Widths 8/16/32 accept integral number or int writes and check that the value fits.
They do not silently mask high bits. `store64` requires `int`; `storenum` requires
`number`. `b[index]` is sugar for `load8`; `b[index] = value` is `store8`.
Multi-byte values are little-endian. The generated heap loads/stores allow
unaligned offsets in ordinary mapped RAM; this is not an MMIO interface.

```apo
b = alloc(24)
store16(b, 0, 65535)
store32(b, 4, 4294967295)
store64(b, 8, -9223372036854775808i)
storenum(b, 16, 0.3)
print loadnum(b, 16), \nl
free(b)
```

Other operations:

- `len(buffer)` returns the valid allocation's requested byte length as number.
- `fill(buffer, byte)` fills the entire requested length; the byte is range-checked.
- `write_bytes(buffer, offset, count)` writes the selected slice to stdout.
  A zero-length slice at the allocation end is valid.

The first allocator is intentionally simple: one mapping per buffer and a linear
scan of descriptor slots. It is not a high-throughput game allocator. Build arenas
or improve allocation strategies only after measuring and adding ownership tests.

## 8. Explicit unsafe pointers

```apo
b = alloc(16)
unsafe
  p = address(b)
  poke8(p, 72)
  poke64(offset(p, 8), 123456789012345i)
  print p, " ", peek8(p), " ", peek64(offset(p, 8)), \nl
end
free(b)
```

Unsafe blocks still use normal syntax and lexical scope. The following built-ins
require that the call itself is inside `unsafe ... end`:

| Function | Meaning |
|---|---|
| `address(buffer_or_string)` | Returns its current base pointer; buffers are validated |
| `pointer(int_bits)` | Reinterprets an integer bit pattern as a raw pointer |
| `address_int(pointer)` | Reinterprets pointer bits as a signed int |
| `offset(pointer, bytes)` | Adds a signed integral byte delta; addresses wrap modulo 2^64 |
| `peek8/16/32/64/num(pointer)` | Loads at the raw address |
| `poke8/16/32/64/num(pointer, value)` | Stores at the raw address |

The width/type meanings match `load`/`store`. Raw address validity, mapped range,
and lifetime are **not checked**. Narrow writes still range-check their numeric
value before storing; that does not make the destination safe.

A pointer has no generation tag. Once its buffer is freed, the pointer is stale
and must not be used. Arbitrary or stale accesses may fault or silently corrupt
other memory. `unsafe` does not bypass OS memory protection, give kernel access,
make memory executable, or grant access to other processes. Raw BSD syscalls and individual encoded instructions are available as described
below; there is no assembly text parser or privilege escalation.

A function may contain its own unsafe block and expose a checked public interface.
The language does not yet have a function-level unsafe effect/type system; the
caller of that function is responsible for trusting its implementation.

## 9. Other built-ins

| Name | Contract |
|---|---|
| `int(x)` | Exact number -> int; int identity accepted |
| `number(x)` | Checked int -> number; number identity accepted |
| `floor(x)` | Number -> integral number toward negative infinity; may overflow |
| `ceil(x)` | Number -> integral number toward positive infinity; may overflow |
| `abs(x)` | Number or int -> same type, with overflow checking |
| `band(a,b)` | Bitwise AND, both int |
| `bor(a,b)` | Bitwise OR, both int |
| `bxor(a,b)` | Bitwise XOR, both int |
| `bnot(a)` | Bitwise NOT, int |
| `shl(a,n)` | Left shift; both int; discarded high bits are lost |
| `shr(a,n)` | Logical right shift; fills with zero bits |
| `sar(a,n)` | Arithmetic right shift; extends the sign bit |
| `assert(condition)` | Bool -> void; runtime error when false |

Shift counts must be from 0i through 63i. Bitwise operations intentionally operate
on all 64 bits, unlike checked arithmetic. `shl(1i,63i)` therefore returns the
minimum signed int rather than producing an arithmetic-overflow error.

## 10. Errors and implementation boundaries

Compile errors report a filename, location when available, and message. Generated
runtime errors write `APO runtime error: ...` to stderr and exit 70; they currently
do not carry source-line backtraces. I/O failure exits 74. Explicit `exit` accepts
a `number` that is exactly integral, or an `int`, in 0..255. Compiler usage errors return 64 and compiler
build/check errors return 65. A macOS crash from unsafe access is not converted
into a friendly APO exception.

No exceptions, debugger, namespace modules, structures, automatic string
concatenation, full C ABI, assembly-text parser, general optimizer pipeline,
multithreading, GPU renderer, audio, or game engine are implemented. APO 2.0 adds
bounded native calls, source inclusion, buffer helper libraries, and an AppKit
window/input layer, as described below. File I/O and instruction access can be implemented with
the unsafe primitives below; the examples render 3D in software. The source is an
experimental compiler, not hardened for hostile/untrusted compilation services.


## 11. Explicit floating point (new in 1.5)

Use binary64 for geometry, approximate calculations, or values outside the exact
six-decimal arithmetic model. It does not silently replace `number`.

```apo
x: float = 1
third = x / float(3)
print: third, \nl
print: sqrt(float(2)), \nl
print: trunc(float(-3.75)), \nl
```

The `f` literal suffix is new in 2.0 (section 16); exponent notation is not
supported. You can also convert an existing number/int using `float(value)`, or use a `float`/`f64` annotation. The full
binary64 value is retained in memory; printing rounds to six fractional digits,
using a scientific-scale form for nonzero magnitudes below 1e-6 or at least 1e12.
Printing is not a shortest-round-trip serializer. Use `float_bits` for exact bit
inspection. Conversion of an int/number to float may round.

| Built-in | Contract |
|---|---|
| `float(x)` | number, int, or float -> binary64 |
| `sqrt(x)` | float -> float; negative/nonfinite result errors |
| `floor(x)`, `ceil(x)`, `abs(x)` | float -> float in addition to existing numeric overloads |
| `int(x)` | float -> int only if finite, in range, and exactly integral |
| `trunc(x)` | float -> int toward zero, checked for finite/in-range result |
| `float_bits(x)` | float -> int containing its exact 64 bits |
| `float_from_bits(bits)` | int -> float; requires unsafe |
| `loadfloat(b,offset)` / `storefloat(b,offset,value)` | checked eight-byte binary64 access |
| `peekfloat(p)` / `pokefloat(p,value)` | unchecked address access; requires unsafe |

`number(float_value)` is not supported. Arithmetic/comparison requires matching
types; there is no implicit `float + number`. Float `%` is not implemented.

Ordinary float division by zero and nonfinite arithmetic results are errors.
`float_from_bits`, raw memory, or checked loading of arbitrary buffer bits can
create NaN/infinity. Comparisons follow IEEE unordered behavior: NaN is not equal
to itself, `!=` is true, and ordered comparisons are false. Printing/conversions
and finite-required operations reject nonfinite inputs/results. Negative zero's
bits are preserved but it compares equal to positive zero. These are explicit
floating-point semantics, not exact decimal promises.

## 12. String, buffer, and argument additions

| Built-in | Contract |
|---|---|
| `byte_at(text,index)` | string -> unsigned byte as int, checked bounds |
| `slice(text,offset,count)` | checked immutable string slice, zero-copy |
| `copy(dst,dst_offset,src,src_offset,count)` | dst buffer, src buffer or string; checked memmove semantics |
| `view(buffer,offset,count)` | unsafe borrowed string view after initial handle/range check |
| `string_at(pointer,count)` | unsafe raw string view with caller-managed validity/lifetime |
| `argc()` | original program argument count as int, including executable name |
| `arg(index)` | argument string; index must be int and in range |
| `envp()` | unsafe original environment-vector pointer |

Memory-copy offsets/counts accept exact integral number or int. The full source
and destination ranges are checked. A zero-length copy/slice at the end is valid;
negative counts/offsets and overflow-sized ranges error. Overlapping copies act
like memmove, including when source and destination are the same buffer.

```apo
b = alloc(16)
copy(b, 0, "Hello", 0, 5)
copy(b, 1, b, 0, 5)
write_bytes(b, 0, 6) # HHello
print: \nl
free(b)
```

A borrowed `view` is NOT a lifetime-tracked string. After its buffer is freed or
its storage is reused, the view can dangle; printing or slicing it may read invalid
memory. Taking a safe-looking slice of that borrowed string does not recover its
lost lifetime protection. Raw pointer corruption can also damage immutable data.

## 13. Raw ARM64 instruction access

```apo
unsafe
  result = asm32(0x8B010000, 7i, 5i) # ADD X0, X0, X1
  print: result, \nl
end
```

`asm32(opcode, arg0, ..., arg5)` emits one actual 32-bit instruction word at the
call site. The opcode must be an int literal fitting 32 bits, not a runtime
variable. Up to six int/pointer operands are evaluated and placed in X0..X5;
omitted operands are zero. The expression returns X0 as an int, and its normal
result-pair handling clears X1 afterward. Cast pointer bits explicitly when needed.

This is not an assembler for strings such as `"add x0,x0,x1"`. It does not validate
that the word decodes, that the instruction is legal in user mode, that branches
land safely, or that memory/register effects respect compiler assumptions.

**Contract:** preserve SP, X18, X19..X30, and platform callee-saved FP/SIMD state.
Do not change control flow or return state unless you fully account for the emitted
surrounding code. NZCV is not an input/output contract. There is no compiler clobber
list or named-register allocator interface. Prefer the supplied leaf ADD/LSLV
examples; invalid instructions or clobbers can fault or silently corrupt execution.

The checked arithmetic model does not apply inside the raw instruction. For
example, raw ADD wraps modulo 2^64 even though normal int addition checks overflow.
A hardware variable shift uses its hardware count semantics; built-in `shl` still
checks its 0..63 count range.

## 14. Raw Darwin BSD syscalls

```apo
unsafe
  # close(-1): normally returns -9 (EBADF); it closes no valid descriptor.
  result = syscall(6i, -1i, 0i, 0i, 0i, 0i, 0i)
  print: result, \nl
end
```

`syscall(number,a0,a1,a2,a3,a4,a5)` requires unsafe and exactly seven arguments.
The number is int; the six operands are int or pointer. It places them in X0..X5,
the number in X16, executes SVC #0x80, and returns X0 or negative errno according
to the Darwin BSD carry-flag error convention. This is not a generic wrapper for
all Mach trap contracts or an automatic marshaller for arbitrary platform APIs.

You are responsible for correct syscall numbers, flags, structures, lengths,
NUL termination, permissions, partial reads/writes, interruption, and resource
cleanup. Incorrect writes/unlinks can damage your own files. OS sandbox and
memory permissions still apply. The explicit fixed-prototype native-call bridge is described in section 18;
raw syscalls themselves do not perform foreign ABI marshaling. The compiler and PNG example contain working file-I/O helpers
that can be studied before making raw calls.

## 15. Self-hosted implementation limits

The source is limited to 8 MiB and 262,144 tokens. Nested expressions/parser/AST
walks are bounded at approximately 128 levels; lexical blocks at 64. A function
has at most 16 parameters and 2,048 local value slots. Generated payload capacity
is 32 MiB; labels/relocations also have fixed-capacity tables. Over-limit source
is rejected instead of promising unbounded compilation. Error wording may differ
from APO 1.0.

Compile/check language errors normally exit 65; usage mistakes exit 64; an input
open failure can exit 66. Runtime checks exit 70 and I/O failures 74. Unsafe native
faults are not caught as language exceptions. There are no source-line runtime
backtraces yet. Fixed arenas and limited optimizations favor a small inspectable implementation
over mature compiler speed or minimal compilation memory.

The complete native compiler can compile this language, including its own source.
That does not imply a stable language specification or a security-hardened parser.


## 16. Declarations, operators, literals and source composition (2.0)

`let name [: type] = expression` always declares a new mutable binding in the
current scope. It may shadow an outer binding, but cannot redeclare one in the
same scope. `const` follows the same rules but rejects subsequent assignment or
compound update. These keywords are newly reserved. Ordinary `name = expression`
retains its 1.5 meaning: update a visible variable or declare a new one.

Constness is binding-only: a const buffer can still be written or freed. It is
not ownership checking. No uninitialized declaration is allowed.

`==` is an equality alias inside expressions. `=` is still accepted there for
compatibility and remains the assignment operator for statements. `x == value`
is not an assignment statement. Compound `+= -= *= /= %=` requires an existing
mutable plain variable; RHS evaluation happens once. Indexed compound assignment,
chained assignment, increment/decrement, and implicit numeric coercions are not
implemented. Existing overflow, precision and type checks remain enabled.

`0.5f`, `1f`, and `-0.25f` are explicit binary64 literals. They accept at most 17
decimal digits total, including leading zeros, no exponent and no integer suffix
combination. Parsing accumulates in binary64 and may round; it is not a proven
correctly-rounded decimal-to-binary conversion algorithm. Use exact `number` for
six-place decimal semantics or `float_from_bits` for exact binary representation.

Newlines inside balanced `(...)` or `[...]` continue the expression. Comments are
allowed there. Mismatched/unclosed delimiters report errors, with a 256-delimiter
lexer bound in addition to the existing parser/AST limits. This is not general
backslash line continuation or multiline string syntax.

`use "relative/path.apo"` is a standalone column-one, top-level line. Spaces/tabs
may follow `use`; trailing whitespace and a `#` or `//` comment are allowed. Relative
paths resolve from that source file's parent. Lexically normalized paths (`.` and
`..`) are included once. Cycles are errors; nesting is limited to 16 and the total
file count to 64. Expanded source, including mapping comments, is limited to
8 MiB. Paths must be shorter than 4096 bytes and contain no newlines. Quoted paths
do not decode backslash escapes. Symlink aliases are not canonicalized and can
refer to the same physical file under distinct lexical identities.

This is textual source composition: declarations share a namespace, top-level
statements execute in inclusion order, and functions still must be defined before
use. It is not package resolution, lazy imports or module isolation. Libraries
use prefixes such as `r3_` and `hc_` to avoid collisions. Diagnostics preserve
included filename/line mappings. Source extension `.APO` is accepted too.

## 17. Bulk memory built-ins and helpers (2.0)

| Built-in | Behavior |
|---|---|
| `fill32(b, value)` | Fill all bytes with repeated little-endian 32-bit value; length divisible by 4 |
| `fill64(b, value)` | Fill all bytes with repeated signed-int bit pattern; length divisible by 8 |
| `fill_range(b, offset, count, byte)` | Fill a checked byte slice with one byte |
| `fill32_range(b, offset, count, value)` | Fill a checked slice; count divisible by 4 |
| `fill64_range(b, offset, count, value)` | Fill a checked slice; count divisible by 8 |

Offsets and counts are **bytes**. Exactly integral number/int offsets/counts are
accepted. `fill32` values are exactly integral 0..4294967295; `fill64` requires int.
Byte values are 0..255. Full bounds/liveness and width checks happen before writes.
A zero-length range at the end is permitted; value validation still applies.
Unaligned ordinary RAM accesses are allowed, not arbitrary MMIO. Wide stores do
not promise atomicity, synchronization, or volatile semantics.

`lib/memory.apo` implements:

- `resize(old, bytes:int) -> buffer`: allocate zeroed storage, copy the smaller
  length, free old. Old buffer aliases become stale. Raw pointers/views dangle.
- `ints(count:int)` / `floats(count:int) -> buffer`, plus int/float_get/set(b,index):
  simple checked 8-byte element helpers, not a distinct typed-array language type.
- `arena_new(capacity:int) -> buffer`, `arena_take(arena,bytes:int,alignment:int)
  -> int` byte offset, `arena_mark`, `arena_reset`, `arena_used`. Alignment is a
  power of two, 1..4096. The arena reserves 4096 header/alignment bytes and checks
  requested capacity. Free the whole arena explicitly.

An arena's `reset` validates the numeric cursor but is not an ownership proof:
all offsets/pointers beyond the reset mark are logically invalid even though the
backing buffer remains mapped. It does not zero old contents or track views.

## 18. Explicit native library calls (2.0)

All of the following compiler intrinsics require an `unsafe` call site:

| Built-in | Result |
|---|---|
| `dlopen(path:pointer,flags:int)` | library handle pointer or null |
| `dlsym(handle:pointer,name:pointer)` | native symbol pointer or null |
| `ccall(function:pointer, ...)` | X0 reinterpreted as signed int |
| `ccallp(function:pointer, ...)` | X0 reinterpreted as pointer |
| `ccallv(function:pointer, ...)` | no value |
| `ccallf(function:pointer, ...)` | binary64 from D0 |
| `ccallf1/2/3(function:pointer, ...)` | binary64 from D1/D2/D3 |

Each call accepts at most 15 supplied operands after the function pointer, at
most 8 int/pointer operands in X0..X7, and at most 8 float operands in D0..D7.
Arguments evaluate left to right. GP and FP register allocation is independent;
stack alignment is 16 bytes. Null function addresses raise an APO runtime error.

These are **fixed-prototype calls**, not C variadic calls. No ABI type information
is inferred from the symbol name. No arguments spill to the stack. There is no
C string auto-conversion, callback support, foreign exceptions, automatic ownership,
small-int sign extension, general struct layout, or hidden result-pointer handling.
For a signed 32-bit foreign return, explicitly sign-extend the low 32 bits; ccall
returns the full X0 register, whose upper bits may not describe a signed 64-bit result.

Homogeneous double-only aggregates such as CGPoint/CGSize/CGRect can be explicitly
flattened into their ABI floating-register components. The window library uses
that platform-specific convention. ccallf2 and ccallf3 each perform a new call;
retrieving multiple components that way is appropriate only for stable/pure getters,
not functions whose results or side effects change between calls. Arbitrary mixed
structures or a full C ABI are not supported.

`lib/native.apo` supplies checked NUL-terminated buffer creation (`native_text`),
library/symbol lookup helpers, and pointer storage. Library handles remain loaded
until process exit. Free temporary text buffers only after callees are finished
with them. OS frameworks are dependencies of windowed programs, not compiler
implementation or build-tool dependencies. Native API signatures must be verified.

## 19. Windowing, rendering and timing libraries

See WINDOWING.md for the complete public window contract and examples. The window
implementation is APO calling AppKit/CoreGraphics through lib/native.apo; it is not
a special built-in `cube` command. `lib/render3d.apo` exposes ordinary buffers,
projected vertices, filled triangles, clipped depth-tested lines, and a sample cube.
Its bounded raw pixel loops are explicitly unsafe after checking canvas metadata.
Triangles crossing the near plane are conservatively dropped; lines are clipped.
This paragraph describes the CPU renderer. The 2.1.5 Metal path is documented below and in WINDOWING.md.

`lib/frame.apo` provides `frame_wait(start:number, rate:number)`. Rate must be an
exactly integral value in 1..1000. Periods round up to whole microseconds, so a 60
request uses 16667 microseconds rather than an unrepresentable exact 1/60 decimal.
Deadlines are anchored to start; late work skips deadlines. OS wake-up timing is
not guaranteed. Its intermediate decimal conversion limits extremely long uptimes
(about 107 days); it is intended for demos rather than a permanent service.

## 20. Optimization controls

Default compilation enables MOVN constant selection, scalar-leaf RHS push/pop
elision, hash-interned strings, small-immediate scalar arithmetic/comparisons, and
wide bulk-fill loops. --no-opt disables these instruction-selection choices.
Function-name hashing and compact source read buffers are front-end improvements
and do not change with --no-opt. No general constant folding, cross-function inlining, vectorization,
register allocation, dead-code elimination, or reassociation is claimed. Checked
integer/decimal behavior and floating expression order are retained.

Compiler output guards reject source suffixes and lexical aliases of source or
running-compiler paths. They do not resolve symlinks or prove physical inode
identity across absolute/relative aliases. Build to a distinct output directory.
Never compile untrusted source as a privileged user.

---

# Timing and renderer API details

Build this source release with `./build.sh`. It uses the included C source
bootstrap and installs `./apo` in the calling directory; no existing APO
installation is required. See BOOTSTRAP.md for the build chain.

## Frame measurements and pacing (lib/frame.apo)

- `frame_fps(frames: int, elapsed: number): float` requires nonnegative inputs;
  returns 0.0 for zero elapsed time and otherwise an approximate ratio. Use this
  for measured FPS instead of exact-decimal division.
- `frame_deadline(frame_started: number, rate: number): number` accepts a
  nonnegative start time and integral rate 1..1000. It adds a frame period rounded
  upward to microseconds, so 60 Hz uses 0.016667 seconds.
- `frame_pace(frame_started: number, rate: number): void` sleeps only when the
  current frame's deadline is still in the future. Pass the clock sampled at the
  beginning of that iteration. Late frames proceed without an extra frame wait.
- `frame_wait` retains its older global-grid semantics for compatibility.

Timers do not offer hard-real-time guarantees. Animation still needs elapsed-time
state, not a fixed update step counted once per rendered frame.

## Hypercube cache (lib/hypercube.apo)

`hc_edges(dimension: int): buffer` returns a caller-owned table of pairs of int64
vertex IDs, 16 bytes per edge. It contains every edge exactly once. Free it when
done or when changing dimension. `hc_draw_edges(image, vertices, dimension, edges,
scratch)` validates table size and IDs before drawing. `hc_draw` remains available
without a caller-supplied cache. Gray-code vertex updates preserve binary IDs but
may differ by tiny floating-point roundoff from a full matrix multiply.

## Window visibility (lib/window.apo)

`window_drawable(window): bool` is an advisory check for a nonclosed, nonminimized,
at-least-partly-visible window. A false value does not free the window. Keep polling
and respond to close/input events. Do not use visibility to infer object lifetime.

## Internal checked raster kernel

`_raster_line(image: buffer, ax: float, ay: float, bx: float, by: float,
za: float, zb: float, steps: int, rgba: int): void` is reserved for render3d.apo.
Use `r3_line` for ordinary application code; it performs near/viewport clipping.

The intrinsic checks the live allocation, 64-byte canvas header/magic, dimensions
16..2048, pixel and depth extents, 1..width+height+2 steps, and unsigned 32-bit
color. Endpoint coordinates must be finite and within [-1,width+1] or
[-1,height+1]; inverse depths must be finite and in [0,1e6]. Every integer sample
is checked against both framebuffer dimensions before any pixel/depth access.
All canvas/argument checks precede the loop; per-sample coordinate checks guard
each write. Invalid inputs produce ordinary runtime errors.

The register-resident ARM64 loop uses double-precision division for each sample,
then separate multiplication/addition in the reference operation order. No fused
arithmetic or approximate reciprocal is enabled. It clobbers caller-saved integer
and FP registers only, never X18..X30, SP, or D8..D15. This intrinsic remains a
native primitive under --no-opt, like explicit asm32; --no-opt is not an instruction
interpreter or a promise to replace all primitives with slow source loops.


# APO 2.1.5 additions

These additions are implemented in compiler.apo and the supplied libraries. The
preceding descriptions of earlier syntax remain except where superseded here.

## Named imports

`use window`, `use memory`, `use metal`, `use parallel`, `use frame` and other
ASCII library identifiers load `<library root>/<name>.apo`. The root is `lib`
next to the invoked compiler, unless APO_LIB or --lib-dir supplies a directory.
Invocation through PATH is resolved by searching that PATH. A symlink's target
installation is not discovered automatically. Keep lib beside the compiler or set
an explicit root. The root is not searched in the user's application folder.

Imports must be top-level, column-one standalone lines. Quoted relative paths,
trailing comments, include-once lexical path handling and cycle checks remain.
No package downloading, namespace isolation or automatic symbol import exists.
`use` selects a source library by name, not an arbitrary directory traversal.

## Native tasks and bounded parallel ranges

```apo
use parallel

task fn squares(data: buffer, begin: int, finish: int): void
  i = begin
  while i < finish do
    store64(data, i * 8i, i * i)
    i += 1i
  end
end

pool = parallel_pool(4i)
data = alloc(8000i)
parallel_for(pool, squares, data, 1000i)
println load64(data, 999i * 8i)
free(data)
parallel_close(pool)
```

The exact task signature is three parameters of types buffer, int, int and a void
result. Parameter names are user-chosen; `end` is still reserved, so use `finish`
or another name. The new keyword `task` is reserved. Functions must precede use.
A task name used as a value denotes its native callback pointer. A direct APO call
to a task is also possible and executes synchronously on the calling thread.

parallel_pool(workers:int) permits 1..64 lanes. A batch partitions [0,count) into
contiguous intervals; fewer lanes are used when count is smaller. It waits for
all lanes before returning. Lanes are scheduling units, not guaranteed cores or
fresh permanent threads. A pool caches the queue and function address; it does
not own a separate operating-system thread pool. Close it explicitly.

Allocate data before dispatch. Do not free or resize shared storage during the
batch. Ordinary buffer operations check bounds and stale generations. Disjoint
indices do NOT prove disjoint memory writes: the task author must respect ranges.
For overlapping writes, use a deliberate synchronization protocol and atomics.

Inside tasks, the compiler rejects allocation, free, printing, process exit,
clocks, sleep, arbitrary native calls and calls to non-task functions. Tasks may
call tasks and approved pure/memory/atomic built-ins. Runtime failures terminate
the process; they are not recoverable per-task exceptions. There is no work
cancellation, async task handle, capture closure, ownership inference or full
thread effect system. Unsafe raw pointers and asm32 can still violate the contract.
The stack limit is a 128 KiB soft bound within the native callback, not a custom
thread-stack allocator or guarantee for arbitrary foreign entry points.

## Aligned atomics

| Operation | Result | Ordering |
|---|---|---|
| atomic_load(buffer, byte_offset:int) | int | acquire |
| atomic_store(buffer, byte_offset:int, value:int) | void | release |
| atomic_add(buffer, byte_offset:int, delta:int) | previous int | acquire-release |

The full 8-byte access must fit and its address must be 8-byte aligned. Invalid
ranges, stale aliases and unaligned accesses error before touching the value.
The current alignment diagnostic uses the bounds-error category. Fetch-add wraps
modulo 2^64, unlike ordinary checked integer addition. Do not mix atomic and
non-atomic accesses to the same concurrently accessed location.

## Binary32 data packing

- float32_bits(float) -> int: explicitly rounds binary64 to binary32 and returns
  the zero-extended 32-bit representation. Finite input/output is required;
  underflow can round to zero. This does not change default decimal arithmetic.
- float32_from_bits(int) -> float: accepts unsigned 32-bit bits, rejects infinities
  and NaNs, and widens the finite binary32 value to binary64.
- `use float32` supplies storef32(buffer,offset:int,value:float) and
  loadf32(buffer,offset:int), little-endian and bounds checked.

## Process and tool-driver helpers

`use process` supplies process_new(path:string), process_arg(request,text:string),
process_run(request) and process_capture(request,stdout_path,stderr_path).
A request is an explicitly freed buffer. No shell expansion occurs. Paths and
arguments reject embedded NUL, and the argument count/storage are bounded.
Spawn failures return 127 with a diagnostic; normal returns are child exit status
or 128+signal. The caller must check the status. Captured paths are opened with
truncation; supply dedicated output paths. These APIs are macOS-specific and not
allowed inside tasks.

`use filesystem` provides tool-driver helpers with explicit buffers. fs_read
returns an owned buffer with an 8-byte length header, fs_text borrows that buffer,
and fs_join_owned returns the same owned representation. Free after use.
fs_join/fs_integer instead retain small strings until process exit; do not call
them without bounds in long-running application loops. The file helper limit is
8 MiB. These routines are not a complete filesystem or standard I/O library.

## Metal

See WINDOWING.md. All window and Metal operations are main-thread only. The
renderer maintains explicit owned resources and a synchronized buffer ring.
GPU coordinates use approximate binary32. Shader source is Metal Shading Language
compiled by macOS, not an APO GPU compiler. The source code is included.
