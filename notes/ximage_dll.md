# ximage.dll — "BigImage" component (ported 2026-10-15)

**Port:** `src/dalibs/ximage/` → `build/linux/libximage.so`. Headers:
`include/bigimage.h` (IBigImage, BIGIMAGEDESC) and `include/rendpipe.h`
(partial IRenderPipeline and ITextureLibraryA, holding only the slots ximage
calls).

**Original:** `game/EXE/ximage.dll`, 0x1ae0 bytes of .text, 37 functions.
- PDB `...\build\Lib\ximage.pdb`.
- Source per the FDUMP strings: `Src\ximage\bigimage.cpp`.

**Loading:** it is listed in `dacom.ini` [Libraries]. DllMain (06f828d0)
registers one DACOM factory, "BigImage", with priority 0x40000000.

**Imports:**
- DACOM: `DACOM_Acquire`, `FDUMP`.
- USER32: `SetRect`.
- MSVCRT: malloc/free/new/delete, `_vsnprintf`, `_ftol`, `_purecall`,
  `_initterm`, `_adjust_fdiv`.

## What it is
A BigImage is an image larger than one texture.
- **Creation:** the image is cut into tiles of the pipeline's maximum texture
  size. Each tile gets its own texture.
- **Drawing:** Draw maps a source rect onto a screen rect. It computes each
  tile's UVs and screen quad and hands them to a callback the caller passed
  in the descriptor. ximage itself never draws.
- **Users:** only Freelancer.exe, which looks it up by name:
  - `Intro.cpp` 00565490 creates one from a decoded image buffer.
  - `RichDisplay.cpp` 0057ab10 re-uploads through IBigImage2::SetData (slot
    10) and draws through slots 4, 6 and 7.

## Descriptor (BIGIMAGEDESC, 0x2c bytes)
Evidence: 06f823f0 plus the exe's caller 00565490.
- The size must be exactly 0x2c. The name is compared case-sensitively
  with "BigImage" (strcmp).
- The layout is in `include/bigimage.h`:

| offset | field | evidence |
|---|---|---|
| +0x00 | size | `cmp eax,0x2c` |
| +0x04 | component name | strcmp against the factory's name |
| +0x08 | pipeline | `*DALib::Pipeline` in the exe; QI for "1.11_ITextureLibraryA" |
| +0x0c | source | non-NULL selects 06f81000 |
| +0x10 | wanted texture format | |
| +0x14 | data format | |
| +0x18 | data | |
| +0x1c | width | |
| +0x20 | height | |
| +0x24 | pitch | |
| +0x28 | draw callback | 00404720 in the exe |

**Notes:**
- +0x08 sits where DACOMDESC has `outer`. The ICOManager passes the
  descriptor through untouched.
- The source object at +0x0c has slots 3 = GetPixels, 5 = GetSize and
  6 = GetFormat. No caller that sets it was found (Intro passes 0).

## Object layout (0x48 bytes, `operator new(0x48)` in 06f823f0)
| off | field | off | field |
|---|---|---|---|
| 0x00 | vtbl 06f830b0 | 0x24 | height |
| 0x04 | pipeline (AddRef'd) | 0x28 | color, 0x00ffffff at start |
| 0x08 | ITextureLibraryA | 0x2c | alpha byte, 0xff at start |
| 0x0c | textures[count] (zeroed) | 0x30 | texture format (from slot 44) |
| 0x10 | uv[count][8] floats | 0x34 | draw callback |
| 0x14 | count (int) | 0x38 | pipeline prop 5 |
| 0x18 | cols | 0x3c | pipeline prop 6 = tile width |
| 0x1c | rows | 0x40 | pipeline prop 7 = tile height |
| 0x20 | width | 0x44 | refcount |

These are checked by `_Static_assert` under `-m32`; see Verification.

## Pixel formats
- A DA pixel format is an int index: `DAPIXFMT` in `include/rendpipe.h`.
- **06f82900** maps a D3DFORMAT to an index using the 22-entry table at
  .data 06f84150: D3D formats, then DXT1–5, then the FourCCs
  DAOP/DAOT/DAAA/DAAL/DAA1/DAA4/DAA8. An unknown format gives index 0.
- **06f82920** returns a 0x4c-byte descriptor from 06f841a8 (15 entries);
  indices > 14 give entry 0.
  - ximage reads only +4, bits per pixel. Bytes per pixel is computed as
    `(bpp+7)>>3`.
  - DXT and DAxx formats have bpp 0, so every tile offset is 0 for them.
- The tables are extracted by `tools/gen/gen_ximage_tables.py` into
  `xi_tables.c`.
- The exe carries its own copy of these helpers (005b7010, 005b7030,
  005b7050).

## Pipeline / texture-library slots used
The slot names are guesses from the argument shapes:
- **Pipeline slot 8** `GetProperty(id, &out)` with ids 5, 6 and 7. The
  return value is ignored.
- **Pipeline slot 45** `CreateTexture(w, h, &fmt, 1, 0, &handle)`.
- **Pipeline slot 46** `DestroyTexture(handle)`.
- **Pipeline slot 53** `SetTextureLevel(handle, 0, w, h, pitch, &fmt, data, 0, 0)`.
- **ITextureLibraryA slot 44** `FindTextureFormat(&want, &out)`; only `< 0`
  counts as failure.

The texture handle is 4 bytes; 06f81180 allocates `count*4`. Whether it is
an id or a pointer is a guess (an id).

## Tiling (06f81180, ported as `build_tiles`)
- **Layout:**
  - `cols = w / tw` and `rows = h / th`.
  - `count = (rows + (h%th != 0)) * (cols + (w%tw != 0))`.
  - Order is row-major: each row's full tiles, then its right edge tile;
    then the bottom row; then the corner.
  - The source offset of a tile is `tw*Bpp*col + th*row*pitch`.
- **Texture size of edge tiles:**

| tile | prop 5 == 0 | prop 5 != 0 |
|---|---|---|
| right edge | pow2(w%tw) × th | tw × th |
| bottom edge | tw × pow2(h%th) | tw × th |
| corner | pow2(w%tw) × pow2(h%th) | s × s, with s = max(pow2(w%tw), pow2(h%th)) |

  The upload size is always the real remainder.
- `pow2` is 06f81a10. It returns its argument when that is a power of two,
  else the next power of two, and 0 for 0.
- **Failures:**
  - A failed create logs WARNING `Failed to allocate %d by %d, %d bpp
    texture.` with the whole image size and a constant 16, at lines
    0x179/0x18f/0x197/0x1b6/0x1be/0x1e1/0x1e9.
  - A failed upload logs WARNING ` failed to set texture level data ` at
    0x17f/0x19f/0x1c5/0x1ef and destroys that one tile.
  - Either way the function returns 0, and CreateInstance destroys the
    object, which frees every texture created so far.
- When `count == 0`, no arrays are allocated, cols and rows stay 0, and
  the function still succeeds.
- **06f81000 (source path):**
  1. Ask the source for its pixels in the wanted format, with pitch
     `wantBpp*w`.
  2. If it refuses, ask for its own format and upload from that. The
     textures are still created in the wanted format.

## IBigImage vtable (06f830b0; IBigImage and IBigImage2 both at offset 0, table 06f830e4)
| slot | orig | port | note |
|---|---|---|---|
| 0 | 06f82760 | bi_query_interface | IBigImage2, then IBigImage; miss → *out=0, -3. Ghidra shows the write into `param_2`; the asm writes arg 3. |
| 1/2 | 06f82810/06f82820 | bi_addref/bi_release | refcount at +0x44; Release at 0 sets refs=1, then destroys |
| 3 | 06f82640 | bi_slot3 | `ret 0xc`, empty; the original returns EAX unchanged and the port returns 0 |
| 4 | 06f82060 | bi_draw | see Drawing |
| 5 | 06f82650 | bi_get_size | |
| 6 | 06f82670 | bi_set_alpha | `alpha = (uint8)_ftol(a*255.0f)` |
| 7 | 06f82690 | bi_set_color | `((g&ff) \| (r\|0xffffff00)<<8)<<8 \| (b&ff)`; see quirk 1 |
| 8 | 06f826f0 | bi_get_texture_count | |
| 9 | 06f82700 | bi_get_texture | `0 <= i < count`; SetRect(rect, 0, 0, width, height), the whole image and not the tile; else -1 |
| 10 | 06f81a80 | bi_set_data | same walk as tiling, upload only; -2 on size mismatch or NULL args; NOTICE + -1 on a failed upload (lines 0x21e/0x22b/0x23e/0x24c); no textures are destroyed |
| 11 | 06f81de0 | bi_slot11 | `ret 8`, returns -7 |

**Other vtables:**
- 06f83080 is the abstract-base vtable: QI/AddRef/Release are `_purecall`,
  the rest are as above. The inlined destructor switches to it first.
- 06f83070 is the factory: QI 06f82370 (only "1.11_IComponentFactory"),
  AddRef 06f823b0, Release 06f823c0, CreateInstance 06f823f0.

## Drawing (06f82060 + UVs 06f81df0)
1. **Source rect.** `src` NULL, or empty after normalizing with 06f822d0,
   means the whole image.
2. **UVs per tile (06f81df0).** The comparisons are unsigned.
   - A tile column entirely outside the rect gets all-zero UVs. A tile
     outside only in V keeps its U and gets V = 0.
   - The divisor is the real width or height of an edge tile, not the
     texture size.
3. **Scale.** `sx = (dst.r - dst.l) / (src.r - src.l)`, rounded to float;
   `sy` likewise.
4. **Walk.** The order is column-major. Per column:
   - `du = u1 - u0` of row 0, stored as float.
   - `step_x = tileW_eff * sx * du`.
   - Per row, `step_y = tileH_eff * sy * (v1 - v0)`. Here `v1 - v0` is NOT
     rounded to float; it stays on the x87 stack.
5. **Callback.**
   - The quad is `{x-0.5, y+step_y-0.5, x+step_x-0.5, y-0.5}`.
   - The call is `draw(tex, alpha<<24 | color, quad, &uv[tile])`.
   - When `du == 0` (a NaN still draws), the tile is skipped and y does not
     advance. That has no visible effect, because y restarts every column.
   - With a NULL callback nothing is drawn, but y still advances.

**Precision:**
- The port evaluates the float math in double, in the original's operation
  order. That equals x87 with 53-bit precision control, the MSVC default.
- At 24-bit precision 23 of the test's log lines change. 24-bit is what D3D8
  sets unless the device is created with D3DCREATE_FPU_PRESERVE.
- Which mode Freelancer actually runs in is open: `questions.md` #22.

## Original quirks kept
1. **SetColor ignores alpha afterwards.** SetColor puts 0xff in the top
   byte, and Draw ORs `alpha<<24` into that. Once SetColor has been called,
   SetAlpha has no visible effect. Before it, color is 0x00ffffff and alpha
   works.
2. **The allocation warning is misleading.** It prints the whole image size
   and "16 bpp", not the tile's size or format.
3. **GetTexture's rect is the whole image**, not the tile.
4. **Textures leak on a failed create.** They are freed only because
   CreateInstance then destroys the object. A failed SetData leaves them
   all in place.

## Deviations (deliberate, minimal)
- **Slot 3** returns 0. The original leaves EAX as it was.
- **06f82920** maps a negative format index to descriptor 0. The original
  reads in front of the table.
- **Uninitialized fields.**
  - The original never initializes +0x38/+0x3c/+0x40 itself; GetProperty
    fills them. The port zeroes them first.
  - The original never initializes the UV array. compute_uvs writes every
    tile before Draw reads it; the port zeroes it with calloc.
  - Consequence: with a pipeline whose GetProperty does not write, the port
    divides by zero, where the original divides by heap garbage.
- **OOM** calls `abort()` for the tile arrays and the factory. The original
  writes through NULL.
- **06f81a40** used `_vsnprintf` into a 0x2000 buffer; the port uses
  `snprintf`, which always NUL-terminates.
- **_ftol** is `msvc_ftol` (`include/msvc_compat.h`). It truncates, and
  NaN or out-of-range values give INT64_MIN, the x87 integer indefinite.
- **SetRect** is inlined; it is a pure function. A NULL rect is skipped,
  as SetRect fails on NULL.

## Verification
- **`make test` → `test_ximage`** (ASan + UBSan):
  1. Loads `libximage.so` through DACOM AddLibrary.
  2. Finds the factory via EnumerateComponents and checks the factory QI.
  3. Runs the 1000 cases of `tests/ximage_cases.txt`, which comes from
     `tests/ximage_cases.py` with a fixed seed.
  4. Compares its log byte for byte with `tests/ximage_golden.txt`.
- **Where the golden log came from:** the original ximage.dll machine code,
  run under unicorn 2 (x86-32) with FPU control word 0x27f.
  - The mocks are the same as in the test: pipeline, texture library,
    source, draw callback and ICOManager.
  - The import stubs are Python. `_ftol` is real x87 code that truncates
    with `fistp`.
  - Fresh allocations are filled with 0xcd, so a read of uninitialized
    memory would show up.
  - The harness is `tools/emu/emu_ximage.py`, built on
    `tools/emu/pe_emu.py`. It goes through the real entry point (CRT init
    and DllMain) to get the factory.
  - `make golden-ximage` regenerates the cases and the golden file.
- **Coverage:**
  - Every FDUMP line in the module fires at least once.
  - Both square and non-square tiling, the source path including its
    fallback, and NULL, reversed, empty and single-tile source rects.
  - NaN, ±inf and ±1e10 for SetAlpha/SetColor.
  - Every SetData error path, and QI hit and miss.
  - Size and name mismatch, NULL pipeline, QI failure and format failure.
- **Sensitivity**, checked with deliberately wrong builds of the port:
  - Rounding `v1-v0` to float changes 1 line.
  - Not rounding `du` to float changes 6 lines.
  - Dropping the SetColor top byte changes 179 lines.
  - Using min instead of max for the square corner changes 19 lines.
  - Running the original at 24-bit precision changes 23 lines.
- **32-bit layout:** `make check32` checks the `_Static_assert`s for the
  object (0x48), the factory (0xc) and BIGIMAGEDESC (0x2c).

## Function map
Also in `notes/functions.tsv`.

| orig | port | class |
|---|---|---|
| 06f81000 | build_from_source | game |
| 06f81180 | build_tiles | game |
| 06f81a10 | next_pow2 | game |
| 06f81a40 | (snprintf in fail_alloc) | crt-wrapper |
| 06f81a70 | (inlined: 4-byte struct copy of DAPIXFMT) | compiler artifact |
| 06f81a80 | bi_set_data | game |
| 06f81de0 | bi_slot11 | game |
| 06f81df0 | compute_uvs | game |
| 06f82060 | bi_draw | game |
| 06f822d0 | normalize_rect | game |
| 06f82320 | ximage_dll_process_attach | game |
| 06f82370/823b0/823c0/823f0 | bf_query_interface/addref/release/create_instance | game |
| 06f82640/82650/82670/82690/826f0/82700 | bi_slot3/get_size/set_alpha/set_color/get_texture_count/get_texture | game |
| 06f82740 | (inlined: release-and-null helper) | game |
| 06f82760/82810/82820 | bi_query_interface/addref/release | game |
| 06f828d0 | DllMain → dll_process_attach | platform |
| 06f828f0, 06f82900, 06f82920 | xi_pf_from_d3dfmt, xi_pf_desc_of | library (DA pixel format) |
| 06f82940, 06f82980, 06f82986, 06f8298c, 06f82ada | — | thunks (new, delete, _purecall, _ftol, _initterm) |
| 06f82950 | — | _alloca_probe (compiler artifact) |
| 06f82992, 06f82a3d | — | _CRT_INIT, _DllMainCRTStartup; the initterm table 06f84000..04 is empty |
