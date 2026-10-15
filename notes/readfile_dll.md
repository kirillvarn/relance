# readfile.dll — analysis and port notes (started 2026-10-15)

**Original:** `game/EXE/readfile.dll`. It has 0x743e bytes of .text and image
base 0x06b70000. There are no exports; it is a pure DACOM component.
- PDB: `...\Lib\ReadFile.pdb`
- Sources named in strings: `Src\DOSFile\ReadFile\BaseUTF.cpp`
- dacom.ini comment: "optimized read-only version of dosfile.dll".

**Analysed with** a scratch Ghidra project (202 functions after seeding from
.rdata pointers), checked against `objdump` where noted. Only 06b73650 uses
`_alloca_probe` (06b782c0).

**Imports:**
- KERNEL32: CreateFileA, ReadFile, GetFileSize, GetFileTime,
  CreateFileMappingA, MapViewOfFile, UnmapViewOfFile, CloseHandle,
  GetFileAttributesA, FindFirst/Next/Close, GetLastError, critical
  sections, VirtualAlloc/Free, DosDateTimeToFileTime
- MSVCRT: calloc, free, malloc, strncpy, strchr, isalpha, _access,
  _fullpath, _makepath, _vsnprintf
- DACOM: FDUMP, DACOM_Acquire, stricmp

## Components (DllMain 06b76220, process attach)
1. calloc(0x170) creates the **root DOS file system** (vtbl 06b79218). It
   is stored in global 06b7a224, registered with the COManager as
   **"FileSystem"** at priority 0x40000000, then Released.
2. A **UTF file-system** object (06b73d60, vtbl 06b79138) is registered as
   "FileSystem" at priority 0x80000000. The object is its own factory:
   slot 3 is CreateInstance.
3. The **MEM** factory (06b77900, vtbl 06b792d0) is registered as
   "FileSystem" at 0x80000000.
4. The **SearchPath** factory (06b78020, vtbl 06b793b0) is registered as
   "SearchPath" at 0x80000000.

- The global 06b7a220 holds the ICOManager, which is used later to create
  child file systems.
- On process detach it calls Release on the COManager.
- The CRT initterm table (06b7a000..06b7a004) is empty.

**Priority order.** Higher priority is tried first: the UTF, MEM and
SearchPath factories at 0x80000000, then DOS at 0x40000000. Each
CreateInstance checks the descriptor's size and `desc+8` (the interface
name "UTF", "DOS" or "MEM") and returns -3 if they don't match. Asking for
"FileSystem" with a given name therefore reaches the right class.

## IFileSystem vtable (42 slots, "1.11_IFileSystem")
- **Naming.** Slot names come from the Win32 function each one wraps in
  the DOS class (06b79218).
- **Stubs.** A stub sets last error = 5 (ERROR_ACCESS_DENIED) and returns
  0, or 1 where noted.

| slot | DOS impl | UTF impl | name | notes |
|---|---|---|---|---|
| 0–2 | 70a0/7150/7170 | 4060/4110/4130 | QI/AddRef/Release | refs at DOS+0x16c, UTF+0x24c |
| 3 | 4470 | 2990 | CreateInstance(desc, out) | opens a child FS (see descriptors) |
| 4 | 4bf0 | 3650 | CloseHandle(h) | |
| 5 | 4d60 | 2f90 | ReadFile(h, buf, n, &read, ovl) | |
| 6 | 5e70 | 3d50 | WriteFile | stub |
| 7 | 5e90 | 3d40 | (write-ish) | stub |
| 8 | 4eb0 | 2ef0 | SetFilePointer(h, lo, &hi, method) | |
| 9 | 5e50 | 3d10 | SetEndOfFile | stub |
| 10 | 4ff0 | 2e90 | GetFileSize(h, &hi) | |
| 11 | 5eb0 | 3a10 | LockFile | stub, returns 1 |
| 12 | 5eb0 | 3a10 | UnlockFile | stub, returns 1 |
| 13 | 5070 | 3a30 | GetFileTime(h, c, a, w) | |
| 14 | 5e90 | 3d40 | SetFileTime | stub |
| 15 | 5100 | 37d0 | CreateFileMapping(h, sa, prot, hi, lo, name) | DOS: fails if access has GENERIC_WRITE |
| 16 | 5230 | 38a0 | MapViewOfFile(map, access, hi, lo, n) | access must be 4 (FILE_MAP_READ); returns a pointer into the mapped file |
| 17 | 5350 | 39e0 | UnmapViewOfFile | returns 1 |
| 18 | 5360 | 3280 | FindFirstFile(pattern, WIN32_FIND_DATA*) | |
| 19 | 5560 | 3350 | FindNextFile(h, fd) | |
| 20 | 55b0 | 33b0 | FindClose(h) | |
| 21 | 5ef0 | 3d20 | CreateDirectory | stub |
| 22 | 5e50 | 3d10 | RemoveDirectory | stub |
| 23 | 5600 | 3470 | GetCurrentDirectory(len, buf) | |
| 24 | 56b0 | 3500 | SetCurrentDirectory(path) | |
| 25 | 5e50 | 3d10 | DeleteFile | stub |
| 26 | 5ed0 | 3d30 | MoveFile | stub |
| 27 | 5ef0 | 3d20 | CopyFile | stub |
| 28 | 58a0 | 3ac0 | GetFileAttributes(path) | |
| 29 | 5ef0 | 3d20 | SetFileAttributes | stub |
| 30 | 5a60 | 3b70 | GetLastError | |
| 31 | 5a70 | 3b80 | CreateFile(desc) → HANDLE | desc as for CreateInstance; NULL desc → the FS's own handle |
| 32 | 5d00 | 3410 | GetFilePosition(h, &hi) | guess name |
| 33 | 5da0 | 3c70 | GetFileName(buf, len) | root path of the FS |
| 34 | 5e10 | 7680 | GetAccessType | the access flags the FS was opened with |
| 35 | 5e20 | 3cc0 | GetParentSystem(&out) | AddRefs |
| 36–39 | 76a0/76b0 | same | — | return -1 |
| 40 | 5f10 | 3cf0 | Serialize(arg, fn, ctx) | calls fn(arg, ctx) under the root DOS FS lock (critical section) |
| 41 | 5f60 | 3130 | GetAbsolutePath(out, path, len) | |

The UTF vtable has a 43rd slot: 3f00, the scalar deleting destructor,
called from Release.

**Last-error codes used:**

| code | Win32 name |
|---|---|
| 2 | ERROR_FILE_NOT_FOUND |
| 5 | ERROR_ACCESS_DENIED |
| 6 | ERROR_INVALID_HANDLE |
| 0x12 | ERROR_NO_MORE_FILES |
| 0x1e | ERROR_READ_FAULT |
| 0x54 | ERROR_OUT_OF_STRUCTURES |
| 0x57 | ERROR_INVALID_PARAMETER |
| 0xa1 | ERROR_BAD_PATHNAME |
| -1 | (generic) |

## Descriptors
The "FileSystem" descriptor has size 0x34 or 0x30. It extends DACOMDESC:

| off | field |
|---|---|
| +0x00 | size |
| +0x04 | "FileSystem" |
| +0x08 | interface name ("DOS", "UTF", "MEM") or NULL |
| +0x0c | file name |
| +0x10 | dwDesiredAccess (must be 0x80000000 = GENERIC_READ) |
| +0x14 | share |
| +0x18 | security |
| +0x1c | creation (must be 3 = OPEN_EXISTING) |
| +0x20 | flags |
| +0x24 | template |
| +0x28 | parent IFileSystem* |
| +0x2c | ? (DOS copies it to its +0x130 handle) |
| +0x30 | (size 0x34 only) a find/node handle |

- **SearchPath** (06b77dd0) builds desc {0x34, "FileSystem", "DOS", path,
  0x80000000, 1 (FILE_SHARE_READ), 0, 3, 0x08000080, 0, ..., -1 at +0x30}.
- **MEM** descriptor: size 0x40, interface "MEM". Fields +0x34 buffer,
  +0x38 size, +0x3c flags (bit 0 = use the caller's buffer, bit 1 = own
  it/free).
- **SearchPath** CreateInstance desc: size 8 {8, "SearchPath"}.

## UTF archive format (handled by two "format handler" classes)
**Header** (0x38 bytes):

| off | field |
|---|---|
| +0 | "UTF " (0x20465455) |
| +4 | version 0x101 |
| +8 | tree offset |
| +0xc | tree size |
| +0x14 | node size (0x2c or 0xc) |
| +0x18 | names offset |
| +0x24 | data offset |
| +0x30 | FILETIME (guess) |

**Class A** (node size 0x2c, the Freelancer format; vtbl 06b790f8, object
0x478):
- Node layout: +0 next-sibling offset, +4 name offset, +8 flags (0x10 =
  dir), +0x10 child or data offset, +0x1c size, +0x20/24/28 DOS date-time
  (created, accessed, written).
- Offsets are relative to the tree base. Offset 0 is the root, which also
  ends a sibling chain.

**Class B** (node size 0xc; vtbl 06b790bc, object 0x490):
- Node: dword0 = name offset | 0x80000000 if dir; +4 = first-child or data
  offset; +8 = child count or size.
- Children are a contiguous array.
- Names sit at names + (off & 0x7fffffff) + 4.
- Times are the archive file's own GetFileTime, stored in the object at
  +0x478.

**Format-handler vtable** (15 slots; A = 06b790f8 / B = 06b790bc):

| slot | method | A | B |
|---|---|---|---|
| 0 | root handle | 14c0 (+8) | 1f40 (+0xc) |
| 1 | header ptr | 14d0 | 14d0 |
| 2 | last error | 14e0 | 14e0 |
| 3 | Init(mapped file) | 14f0 | 1f50 |
| 4 | Reset | 15d0 | 2080 |
| 5 | dtor | 1ea0 | 28f0 |
| 6 | GetAttributes(path, cwd) | 1640 | 20f0 |
| 7 | IsValidHandle | 17a0 | 17a0 |
| 8 | handle adjust | 1790 | 1790 |
| 9 | OpenHandle(path, cwd, find) | 17e0 | 2260 |
| 10 | CloseHandle | 19b0 | 19b0 |
| 11 | FindFirst | 19d0 | 23f0 |
| 12 | FindNext | 1c70 | 26f0 |
| 13 | FindClose | 1dd0 | 1dd0 |
| 14 | GetFileTime | 1e30 | 2890 |

- A **handle** is a pointer to a 3-dword object {vptr 06b791e4 (A) or
  06b791f4 (B), node, position}, kept in a std::list. Closed handles get
  node = 0 and are reused.
- **Handle accessor vtables** (8 slots):
  - 06b791e4 (A): name off, is-dir, size (+0x1c), data off (+0x10).
  - 06b791f4 (B): name off, is-dir (bit 31), size (+8), data off (+4).
- **Find handles** are 1-based indices into blocks of 4 entries of 0x114
  bytes: {current node, last node, pattern[0x104], remaining}. The first
  block is embedded at +0x20.
- **Wildcard match** 06b760c0/06b761a0, DOS-style:
  - No `.` in the pattern → append `.*`.
  - A pattern starting with `.` → prefix `*`.
  - The name gets `.` appended if it has none.
  - `*` and `?` match; comparison uses fold table 06b7a0d8 (ASCII lower,
    and `\` → `/`).

## Port (2026-10-15) — done
**Code:** `src/dalibs/readfile/` → `build/linux/libreadfile.so`. It is
loaded by DACOM AddLibrary through `dll_process_attach` →
`readfile_dll_process_attach`.

**Interfaces:** `include/dafile.h` has IFileSystem (42 slots), DAFILEDESC,
DA_FIND_DATA, IDataBuffer and ISearchPath. The platform layer gained
Win32-style file handles, mmap, find, attributes and locks in
`src/platform/platform_posix_file.c`. The compat layer gained
`msvc_fullpath`, `msvc_access` and `win32_dos_datetime_to_filetime`.

| file | original | content |
|---|---|---|
| rf_main.c | 06b76220 | DllMain: register DOS root, UTF, MEM, SearchPath |
| rf_util.c | 06b75420, 06b760c0/06b761a0, 06b737a0, 06b71420/06b71440/06b72dd0, 06b776a0/b0 | path join, wildcard, mapped-file helpers, reserved slots |
| rf_tables.c | .data 06b7a058..06b7a1d7 | fold table (generated by tools/gen/gen_readfile_tables.py) |
| rf_utf_format.c | 06b714c0..06b72990, 06b73e30..06b73ea0 | format handlers A/B, handle and find tables |
| rf_utf_fs.c | 06b71000, 06b71190, 06b72990..06b74160 | UTF file system, archive opener, sub file systems |
| rf_dos_fs.c | 06b741b0..06b75f60, 06b770a0..06b77170, 06b76410 | DOS file system |
| rf_mem_fs.c | 06b77250..06b77b90, 06b77930/06b78050/06b78060 | MEM file system, IDataBuffer, shared factory |
| rf_search_path.c | 06b77ba0..06b78210 | SearchPath component |

**Not ported (library or artifact):**
- 06b73f20..06b74000 and 06b76450..06b77200: std::list/_Tree internals,
  replaced by linked lists.
- 06b782a0..06b78438: CRT, operator new/delete thunks, _alloca_probe and
  the DllMain CRT wrapper.

**Verification:**
- **Real data.** `make test` takes every 10th UTF archive in game/DATA
  (308 archives, 98,334 nodes). It walks each one with
  FindFirstFile/FindNextFile through DACOM → DOS dir FS → COManager → UTF,
  and reads every file with CreateFile/ReadFile. The output is
  byte-identical to `tests/utf_oracle.py`, an independent UTF reader.
- **API checks**, run under ASan+UBSan with readfile itself instrumented
  (`build/linux/asan/libreadfile.so`):
  - sub file systems, ReadFile(0) on a leaf, SetFilePointer,
    CreateFileMapping/MapViewOfFile;
  - a bogus CloseHandle;
  - MEM file system → archive via IDataBuffer;
  - SearchPath with empty elements;
  - DOS CreateFile/ReadFile/seek/short read, single-file "DOS" file
    systems, Get/SetCurrentDirectory, and the FindFirstFile quirk.
- **Wildcard matcher.** It was compared with the original machine code
  (06b760c0) under the unicorn emulator: 20,000 random cases including
  high-bit chars, 0 failures. The harness is in the session scratchpad
  (`emu_wild.py`); see questions.md #16.
- **Format B** (0xc nodes) is ported but has no test data. All 3,072 UTF
  files in the game are version 0x101 with 0x2c nodes (format A).

**Deviations (deliberate):**
- Unbounded copies are bounded:
  - names into 0x104 buffers (set_name, find patterns, cFileName, path
    components);
  - the 0x108 wildcard buffers.
- NULL dereferences in the original become `abort()` with a message:
  - UTF Serialize without a parent;
  - operator new failure.
- **open_archive failure:** the original zeroes the caller's file handle
  and leaks the file. The port lets the caller close it.
- **SearchPath clear** sets the array pointer to NULL. The original leaves
  it dangling, and the next SetPath frees it again.
- **search_path open_path** does not read past a bare "X:" element.
- **DOS GetFileSize/GetFileTime** accept any handle that a DOS file system
  currently has open; others give ERROR_INVALID_HANDLE. Win32 would accept
  any OS handle.
- **POSIX attributes:** files report 0x20 (ARCHIVE), | 0x1 when not
  writable. There is no creation time on POSIX, so ctime is used (as Wine
  does).
- **CreateFileA on POSIX** goes through `platform_file_open`. Directories
  are refused (as Win32 does) and empty files are not mapped (Win32
  CreateFileMapping fails on them).

**Original quirks kept (fidelity):**
- **DOS FindFirstFile (06b75360) is inverted.** A pattern that joins to the
  root fails with 0xa1, and FindFirstFileA only runs on the partial buffer
  of a failed join. A failed FindFirstFileA returns -1 with no error set.
- **DOS CreateInstance with `desc->parent`** writes the name into the
  **root** DOS object's path (06b748a8) and leaves the new object's path
  "\". The access field of directory file systems opened from a directory
  FS stays 0.
- **The DOS destructor Releases the parent twice** (06b741db and
  06b74339).
- **DOS ReadFile** on an unknown handle returns `n` (truthy) without
  writing `*read`. A short read is a failure with last error 0xffffffff.
  Only mapped files can seek or report a position.
- **UTF ReadFile** at the end of data fails with 0x1e. SetFilePointer
  FILE_END is `size - dist`, and positions past the end return -1 with no
  error. GetFileSize ignores `high`.
- **UTF GetFileAttributes** returns 0 (not -1) on failure, and only 0x10
  or 0.
- **UTF FindFirstFile** returns 0 (not -1) when the path cannot be made
  absolute.
- **UTF CreateFileMapping** works only on sub file systems (the archive
  has no root). MapViewOfFile on an unknown mapping returns (void*)-1;
  so does the DOS version.
- **UTF GetCurrentDirectory** returns the tail of `name`, not `cwd`, so
  SetCurrentDirectory is not reflected. UTF SetCurrentDirectory does not
  require a directory.
- **UTF CreateFile** has no NULL-desc check.
- **UTF archives through a parent** are opened from disk: parent's
  GetFileName + name, _fullpath, then _access. The exception is the
  factory with an IDataBuffer parent.
- **MEM:**
  - FILE_END and IDataBuffer::GetData use the capacity, not the size.
  - Write growth rounds to (need + 0xffff) & ~0xfff.
  - CloseHandle returns 0.
- **SearchPath CreateInstance** with no file systems returns -6.
- **Format A** FindFirst/FindNext fill `attributes` with the whole node
  flags dword. DOS date-times are converted without a time zone
  (invalid dates leave the FILETIME untouched).
