# x86math.dll — "3DMathEngine" component (ported 2026-10-15)

**Port:** `src/dalibs/x86math/mathengine.c` → `build/linux/libx86math.so`.
Header: `include/mathengine.h` (IMathEngine, MATHENGINEDESC).

**Original:** `game/EXE/x86math.dll`, 0x1af8 bytes of .text, 40 functions in
`decomp/x86math.dll/index.tsv`, plus 27 the decompile missed (below).
- PDB `C:\work\builds\dalibs\dalibs-build\build\Lib\x86math.pdb`. A
  second PDB path, `\\aus-usp-02\builds\freelancer\symbols\020403_release_1336_Iretail_ver1223\x86math.pdb`,
  is also in the file.
- No FDUMP strings, so no source file name.

**Loading:** listed in `dacom.ini` [Libraries]. DllMain (06f71090) registers
one factory, "3DMathEngine", with priority 0x40000000.

**Imports:**
- DACOM: `DACOM_Acquire`, `stricmp`.
- KERNEL32: `DisableThreadLibraryCalls`.
- MSVCRT: `operator new`, `malloc`/`free` (CRT onexit table only),
  `_initterm`, `_onexit`, `__dllonexit`, `_adjust_fdiv`.

## What it is
A stateless math library behind a DACOM vtable: 3x3 matrices, transforms
(3x3 + translation), quaternions, vector arrays and a fast table-based
1/sqrt. All x87.

**Users.** Every caller gets it the same way: `DACOM_Acquire()` and then
ICOManager::CreateInstance (slot 3) with `{0xc, "3DMathEngine", 0}`. The
functions are:
- Freelancer.exe 005b73e0
- common.dll 06391a10
- engbase.dll 06628190
- rp8.dll 06d5cd40
- alchemy.dll 0623e830
- content.dll 07098b00
- deformable2.dll 06600de0
- flmaterials.dll 067006d0
- rendcomp.dll 06c34e60
- server.dll 06e4e1d0

thorn.dll and shading.dll contain the string too; their getters were not
looked up. Which slots each module calls is not traced yet. Do that when
porting the callers, and rename slots if the callers make the meaning
clearer.

## Objects
**One object** (`operator new(8)` in 06f71090, kept in the global
06f74438) is both the factory and the engine:

| off | field | evidence |
|---|---|---|
| +0 | engine vtbl 06f73090 (26 slots) | `mov [eax],0x6f73090` |
| +4 | factory vtbl 06f73080 (4 slots) | `mov [eax+4],0x6f73080`; RegisterComponent gets `obj+4` |

- Factory slots 0..2 (06f72940, 06f72950) are adjustor thunks:
  `sub [esp+4],4; jmp` to the engine's 06f71150 and 06f71160.
- Slot 3 is CreateInstance (06f71170). It returns the object itself after
  AddRef.
- AddRef and Release (06f71160) just return 1. Nothing is ever freed: not
  at detach, and not if DACOM_Acquire returns NULL.
- QueryInterface (06f71150) always returns -1 with `*out = NULL`, on both
  interfaces. So the engine's interface name never appears, and the
  factory cannot be QI'd to IComponentFactory (unlike ximage and system).

**Descriptor.** MATHENGINEDESC, 0xc bytes, checked in 06f71170 in this
order:
1. Set `*out = NULL`.
2. desc == NULL or desc->component == NULL → -2.
3. desc->size != 0xc → -3. The check is `cmp [eax],0xc`.
4. The component is compared with "3DMathEngine" by `repz cmpsb` over 13
   bytes, which is `strcmp`, so the match is case-sensitive. Mismatch → -3.
5. desc->variant (+8) non-NULL and `stricmp("x86", variant) != 0` → -3.
   The string "x86" is at .rdata 06f73060.

Every caller passes variant = 0. The field name is a guess: one engine DLL
per CPU variant (x86, 3DNow!, SSE) would explain it.

## Slot table (vtbl 06f73090)
"Rows" means m[3r..3r+2]. Transforms are float[12] with the translation at
[9..11]. Quaternions are {w, x, y, z}.

| slot | orig | port | what |
|---|---|---|---|
| 0 | 06f71150 | me_query_interface | always -1, *out = NULL |
| 1, 2 | 06f71160 | me_addref_release | return 1 |
| 3 | 06f711f0 | me_invert3 | inverse via slot 5; adjugate and -2 if \|det\| <= 1e-8f |
| 4 | 06f715b0 | me_scale3 | out = s*m (9 floats) |
| 5 | 06f71620 | me_determinant3 | det, returned in st(0) unrounded → `double` in the port |
| 6 | 06f72740 | me_quat_multiply | a*b |
| 7 | 06f716f0 | me_transform_multiply | a after b |
| 8 | 06f71670 | me_multiply3 | a*b |
| 9 | 06f725d0 | me_quat_rotate | (w²-\|q\|²)v + 2(q·v)q + 2w(q×v) |
| 10 | 06f71890 | me_transform_point | Mv + t |
| 11, 12 | 06f71830 | me_rotate | Mv (same function twice) |
| 13, 14 | 06f718f0 | me_rotate_transposed | Mᵀv (same function twice) |
| 15 | 06f71950 | me_inverse_transform_point | Mᵀ(v - t) |
| 16 | 06f71fb0 | me_transform_points | array Mv + t; a zero t calls slot 17 |
| 17 | 06f719b0 | me_rotate_array | array Mv |
| 18 | 06f72150 | me_rotate_array_transposed | builds Mᵀ, calls slot 17 |
| 19 | 06f721c0 | me_inverse_transform_points | {Mᵀ, Mᵀ(-t)} through slot 14, then slot 16 |
| 20 | 06f72290 | me_quat_from_matrix | trace method, next[] = {1,2,0} at 06f73068 |
| 21 | 06f723c0 | me_matrix_from_quat | s = 2/\|q\|² |
| 22 | 06f724d0 | me_quat_nlerp | lerp (to -b if a·b < 0), then normalise |
| 23 | 06f71380 | me_invert_transform | (out, det_out, xf); see below |
| 24 | 06f72830 | me_fast_rsqrt | table seed + 2 Newton steps |
| 25 | 06f728b0 | me_fast_sqrt | the same, times x |

**Calling convention.** Every slot is stdcall with `this` on the stack.
The `ret N` values give the argument counts: 0xc for (this, out, a), 0x10
for (this, out, a, b), 0x14 for the array slots with count, 8 for slot 5.

**Internal vtable calls.** The port also goes through the vtable for
these: 3 → 5, 16 → 17, 18 → 17, 19 → 14 and 16.

**Slot 23 (06f71380):**
- It computes `det = (c0*m0 - c1*m1) + c2*m2` from cofactors. If
  `|det| > 1e-8f` then `inv = 1/det`; otherwise `inv = 1.0` and the result
  is -2.
- out[0..8] get the adjugate times inv.
- out[9..11] get triple-product expansions times inv. That is
  `-Mᵀ`-style translation; the exact formula is in the code.
- `*det_out` gets a second, differently expanded determinant times inv.
  So it is about 1.0 for a good matrix, and equals det when the matrix is
  singular. Whether callers read it as "det" or as a check value is
  unknown.

## Algorithms
**Specialised dot products (06f71af0, slots 16 and 17).**
- Each matrix row is copied to a stack object `{x, y, z, fn, cost}`
  (0x14 bytes).
- Each entry is classified, x then y then z, as one of:
  - 0: `fcomp` with 0.0f, so -0.0 counts as zero;
  - 1: `cmp` of the bits with 0x3f800000, done only for entries that are
    not zero;
  - other: anything else, NaN included.
- That picks one of 27 thiscall functions, 06f71d60..06f71f90 (16 bytes
  apart), and a cost of 5 minus the work done.
- If the three costs sum to >= 4, each output component calls its row's
  function. Otherwise a general loop runs.
- The two paths are NOT bit-identical:
  - the summation orders differ;
  - a zero entry drops the term, so `inf*0` does not make a NaN, and a sum
    that would be +0 can come out as -0;
  - the specialised path re-reads `in` after each output component is
    stored.
- The port keeps all 27 functions and both paths. The tables are
  `dot_fns` and `dot_costs`.

**rsqrt table (06f71010, also inlined in DllMain).**
- 1024 bytes at 06f74030. For i = 0..0x3ff:
  - `x = float bits ((i | 0xfc00) << 14)`, which covers 0.5 ≤ x < 2;
  - `r = (float)(1.0 / sqrt(x))`, computed with fsqrt and fdivr by a QWORD
    1.0;
  - `table[i] = (bits(r) + 0x2000) >> 15`.
- Then `table[0x200] = 0xff`. Entry 0x200 is x = 1.0, which would give
  0x00 and an exponent off by one. The 0xff makes the seed 0x3f7f8000
  (0.998).
- The table is built once by the static constructor (initterm, 06f71000)
  and again in DllMain, with identical results. The port builds it once
  in `x86math_dll_process_attach`.

**Seed (slots 24 and 25).**
- `seed = ((0x5f000000 - (((b>>23)&0xff) << 22)) & 0xff800000) | table[(b>>14) & 0x3ff] << 15`.
- Then `r1 = (3 - y*y*x) * y * 0.5`, kept unrounded, and
  `r2 = (3 - r1*r1*x) * r1 * 0.5`.
- Slot 25 multiplies r2 by x before the single store.

## x87 precision
- The port evaluates in `double` in the original's operation order. It
  rounds to float exactly where the original stores a DWORD (`fst`/`fstp`).
- Several functions spill a value to the stack and reload it, and those
  spills are float roundings the port has to copy:
  - 06f72740 rounds a0*b2, a0*b3, b0*a1..3, u2, s2 and s3.
  - 06f725d0 rounds c*v, the dot, 2x*dot, s0, s1, cz and cx*w. It also
    reuses the `q` and `v` argument slots as float temporaries.
  - 06f723c0 rounds s*y, s*z, w*x, w*y, w*z, y*y and y*z. The q argument
    slot is reused.
- **53-bit mode = IEEE double.** That holds here because no intermediate
  leaves double's exponent range. Two-float products are exact, and three
  floats multiplied stay far inside the range. A triple product of floats
  is the same in either association, because the inner product is exact.
- **The precision mode matters a lot for this DLL.** Recording the
  original under other FPU control words, against the 53-bit golden:

  | mode | log lines that change |
  |---|---|
  | 24-bit (0x07f, what D3D8 sets without FPU_PRESERVE) | 5,181 of 15,916 (33%) |
  | 64-bit (0x37f) | 328 |

  - The 24-bit run also built the rsqrt table in 24-bit mode. In the game,
    DllMain probably runs before any D3D device exists (guess).
  - In the game (questions.md #22, verified 2026-10-15):
    - the exe restores 53-bit right after CreateDevice (004249c0);
    - it runs only the scene-render span 00424f30..00425080 at D3D's
      24-bit.
  - So x86math calls from game logic match the port. Calls made from the
    rp8 draw path during that span would round differently. That is not
    emulated; see the decision in #22.

## Quirks kept
1. QueryInterface always fails, even for IComponentFactory on the factory.
2. AddRef and Release do nothing. The object is never freed.
3. The size check is exact (0xc), and the name check is case-sensitive.
   The variant check is case-insensitive.
4. Specialised and general dot paths give different bits for the same
   input (above). The choice depends on how many 0.0 and 1.0 entries the
   matrix has.
5. Overlapping buffers give garbled results, because outputs are stored
   while inputs are still being read:
   - slots 3, 6, 7, 8, 9, 10, 11-14, 22 and 23;
   - the specialised path of 16 and 17.

   Slot 15 and the general paths of 16 and 17 read each input vector
   completely first. The port re-reads through the pointers in the
   original's order. The test checks this with outputs aliased to inputs.
6. Slot 3's failure path writes the adjugate (not scaled) and returns -2.
7. Slot 23's `det_out` is det × (1/det), as described above.
8. Slot 16 compares the translation with 0.0 using float compares, so
   -0.0 also delegates to slot 17. A NaN translation does not.
9. Slot 22 takes the "to -b" branch only for `a·b < 0` (ordered). A dot of
   0 or NaN lerps towards b.

## Deviations
1. **NaN bits.** NaN signs and payloads are not reproduced. The x87
   default NaN is negative, and ARM's is positive. The test logs every
   NaN as "nan". Every branch on a NaN is reproduced.
2. **Array counts.** The original loops while `in < in + count*12`,
   comparing 32-bit pointers. The port loops `count` times, which is the
   same unless `count*12` wraps the address space.
3. **The 0x06f74430 flag byte.** The static destructor 06f71070, which
   atexit registers through 06f71060, sets bit 0 of this byte. Nothing
   reads it, so it is not ported.
4. **Static constructor.** It is not ported; DllMain's copy of the table
   build is enough. If `operator new` fails, the original still has the
   table (from the constructor) but registers nothing. The port then has
   no table either, which nothing can observe.
5. **Slot 5 returns `double`.** The original returns st(0) unrounded. A
   ported caller that stored it to a float gets the same value as the
   original's `fstp DWORD`.

## Verification
- **`make test` → `test_x86math`** (ASan + UBSan):
  1. Loads `libx86math.so` through DACOM AddLibrary and takes the factory
     from EnumerateComponents.
  2. Runs 13 CreateInstance descriptor checks: NULL desc, NULL name, size
     0x14 and 0, short, long and wrong-case names, and variants
     NULL/x86/X86/sse/""/"x86 ".
  3. Runs the QI, AddRef and Release checks on both interfaces.
  4. Runs the 15,917 cases of `tests/x86math_cases.txt` and compares the
     log byte for byte with `tests/x86math_golden.txt`.
- **Case layout:** an 80-word block:

  | words | contents |
  |---|---|
  | A 0..11, B 12..23 | operands |
  | V 24..47 | 8 vectors |
  | O 48..71 | output, preset to 0xcdcdcdcd |
  | 72 | det_out |
  | 73 | scalar |

  The output is aliased to O, A, B/V or B+1/V+3. The log lists every word
  that changed, plus the return value. Slot 5 logs the 64-bit result,
  stored by a native `fstp QWORD` helper in the emulator.
- **Golden:** the original machine code, run under unicorn by
  `tools/emu/emu_x86math.py` through the real entry point (CRT init and
  DllMain), with FPU control word 0x27f. An optional 4th argument sets
  another control word. `make golden-x86math` regenerates the cases and
  the golden file.
- **Cases** (`tests/x86math_cases.py`, seed 0x86):
  - 300 random cases per slot 3..25. Matrices are random, sparse (0.0 and
    1.0 rows), rotations, near the 1e-8 det limit, or singular. Values
    include ±0, ±1, denormals, huge values and 2% inf/NaN.
  - Every rsqrt table index with random exponents, plus 15 special
    inputs (0, -0, denormals, 1.0, max, inf, NaN, negative).
  - All 27 specialised dot products, in every row position, for slots
    16..19.
  - An exhaustive order check of the dot products, with vectors over
    {±2^31, ±1}³.
  - A "cancellation pool" mode, with values from {±1, ±1.5, ±2^30..2^31,
    2^-31, 0, ±2^62}. It makes the order of additions visible: 150 cases
    per slot, plus 25% of the random cases.
  - Exact-duplicate-row singular matrices, where det is a rounding
    residue.
  - |det| exactly 1e-8f.
  - Orthogonal quaternions for nlerp, where a·b = 0.
  - Quaternions with two tiny components, where 1 - (yy + zz) cancels.
- **Sensitivity**, checked with 26 deliberately wrong builds of the port
  (log lines changed):

  | mutation | lines |
  |---|---|
  | s2 rounded in slot 9 | 69 |
  | xx rounded in slot 21 | 177 |
  | yy not rounded in slot 21 | 176 |
  | u1 rounded in slot 6 | 98 |
  | add order in specialised ror / oro | 4 / 4 |
  | add order in slot 16 general / 16 translation / 15 / 5 | 2 / 2 / 1 / 21 |
  | no 0xff table patch | 126 |
  | -0.0 not treated as zero | 895 |
  | cost threshold 4 → 5 | 26 |
  | det limit > → >= (slot 3 / slot 23) | 2 / 2 |
  | slot 8 caching a row | 48 |
  | slot 9 reading w early | 44 |
  | nlerp < → <= | 12 |
  | quat_from_matrix > → >= | 8 |
  | zzz returning v*0 | 940 |
  | r1 rounded in rsqrt | 109 |
  | nlerp 1/n rounded | 254 |
  | slot 15 d rounded | 13 |
  | quat_from_matrix k rounded | 61 |
  | slot 16 never delegating | 44 |

  - **Not caught:** in slot 3, `x/det` in place of `x*(1/det)`. That is a
    one-ulp double difference, which shows only if it straddles a float
    rounding boundary, and random inputs essentially never hit that.
  - **Equivalent, so not a mutant:** re-associating a triple product of
    floats.
- **32-bit layout:** `make check32` checks the object (8 bytes, factory
  vtbl at +4) and MATHENGINEDESC (0xc, variant at +8). `tools/stub32/math.h`
  is new for this.

## Decompile gaps
- `decomp/x86math.dll/index.tsv` lacks the 27 dot functions
  06f71d60..06f71f90. They are only referenced by `mov [ecx+0xc], imm32`,
  which is neither a push nor an .rdata pointer, so nothing seeded them.
- Ghidra's 06f71af0 is listed with 610 bytes, which ends at 06f71d52.
- If a full decompile is wanted, seed the starts from `mov r/m32, imm32`
  into .text.

## Function map
| orig | port | note |
|---|---|---|
| 06f71000 | — | static ctor: table + atexit(06f71070) |
| 06f71010 | build_rsqrt_table | |
| 06f71060 | — | atexit(06f71070) |
| 06f71070 | — | static dtor: sets bit 0 of 06f74430 |
| 06f71090 | x86math_dll_process_attach | DllMain |
| 06f71150 | me_query_interface | |
| 06f71160 | me_addref_release | |
| 06f71170 | mf_create_instance | |
| 06f711f0..06f728b0 | slots 3..25 | slot table above |
| 06f71af0 | row_specialise (+ row_class) | |
| 06f71d60..06f71f90 | dot_zzz .. dot_rrr | 27 functions, not in decomp |
| 06f72720 | vec3_set | thiscall vec3 constructor |
| 06f72940, 06f72950 | mf_query_interface, mf_addref_release | adjustor thunks |
| 06f72960, 06f7298c | — | CRT `_onexit`/`atexit` wrappers |
| 06f7299e, 06f72aec, 06f72af2 | — | import thunks (new, __dllonexit, _initterm) |
| 06f729a4 | — | CRT `_CRT_INIT` (DLL) |
| 06f72a4f | — | entry, `_DllMainCRTStartup` |
