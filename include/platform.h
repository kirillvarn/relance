/* platform.h — the only door from ported code to the operating system.
 * Game and DA-lib code calls platform_* instead of Win32. Each function notes
 * the Win32 call it replaces. Implementation: src/platform/platform_posix.c.
 */
#ifndef PLATFORM_H
#define PLATFORM_H

#include <stdint.h>
#include <stdio.h>

/* ---- diagnostics ---- */

/* OutputDebugStringA. */
void platform_debug_output(const char *text);

/* Debugger breakpoint (`int3` in the original). Without a debugger the
 * original process dies with an unhandled breakpoint exception, so the POSIX
 * implementation raises SIGTRAP, which terminates the process by default. */
void platform_debug_break(void);

/* MessageBoxA(NULL, text, caption, MB_ABORTRETRYIGNORE|MB_ICONHAND|MB_TOPMOST). */
enum { PLATFORM_MB_ABORT = 3, PLATFORM_MB_RETRY = 4, PLATFORM_MB_IGNORE = 5 };
int platform_message_box_abort_retry_ignore(const char *text, const char *caption);

/* PostQuitMessage. */
void platform_post_quit(int exit_code);

/* ---- files and paths ----
 * Paths may use '\' (as stored in the game's ini files) or '/'. Lookups are
 * case-insensitive on case-sensitive file systems, as on Windows. */

/* fopen with Windows path semantics. */
FILE *platform_fopen(const char *path, const char *mode);

/* GetModuleFileNameA(NULL, ...): full path of the running executable.
 * Returns the string length, or 0 on failure. */
uint32_t platform_exe_path(char *buf, uint32_t size);

/* ---- dynamic libraries (original DLLs, ported as shared objects) ----
 * A path names the original DLL ("dir/system.dll"). The implementation maps it
 * to the ported shared object ("dir/libsystem.so"). After loading, it calls
 * the module's `dll_process_attach(handle)` if it exports one; that replaces
 * DllMain(DLL_PROCESS_ATTACH). */

/* SearchPathA(dirs, file, NULL, size, out, NULL). `dirs` is a ';'-separated
 * list, or NULL for the default search (current directory, then the exe
 * directory). Writes the DLL-style path of the first match and returns its
 * length, or 0 if not found. */
uint32_t platform_search_path(const char *dirs, const char *file, char *out, uint32_t size);

/* LoadLibraryA. Returns NULL on failure. */
void *platform_lib_load(const char *path);

/* FreeLibrary. */
void platform_lib_free(void *lib);

/* GetModuleHandleA + GetFileVersionInfoA + VerQueryValueA("\\"): the
 * VS_FIXEDFILEINFO dwFileVersionMS/LS of a loaded module. Returns 0 on
 * success, -1 if unavailable (always, for now: shared objects carry no
 * version resource). */
int platform_lib_version(const char *path, uint32_t *version_ms, uint32_t *version_ls);


/* ---- Win32-style file handles (CreateFileA & co.) ----
 * Used by file-system components that wrap the Win32 file API. A handle is
 * an opaque pointer, never NULL. Failures set platform_last_error(). */
typedef struct PlatformFile PlatformFile;

/* Win32 error code of the last failed platform_file_* / find call
 * (ERROR_FILE_NOT_FOUND = 2, ERROR_PATH_NOT_FOUND = 3, ERROR_ACCESS_DENIED
 * = 5, ERROR_INVALID_HANDLE = 6, ERROR_NO_MORE_FILES = 0x12, ...). */
uint32_t platform_last_error(void);

/* CreateFileA(path, access, share, NULL, creation, flags, NULL). `access`
 * uses GENERIC_READ/GENERIC_WRITE bits, `creation` the Win32 dispositions.
 * Returns NULL on failure. */
PlatformFile *platform_file_open(const char *path, uint32_t access, uint32_t creation);
/* ReadFile: returns 1 on success (possibly short at end of file). */
int platform_file_read(PlatformFile *f, void *buf, uint32_t n, uint32_t *read);
/* GetFileSize: low 32 bits, high bits in *high (may be NULL); 0xffffffff on failure. */
uint32_t platform_file_size(PlatformFile *f, uint32_t *high);
/* GetFileTime as Win32 FILETIMEs ({lo, hi} pairs, 100 ns since 1601). Any
 * output may be NULL. Returns 1 on success. */
int platform_file_times(PlatformFile *f, uint32_t *creation, uint32_t *access,
                        uint32_t *write);
/* CreateFileMapping(PAGE_READONLY) + MapViewOfFile(FILE_MAP_READ) of the
 * whole file. Returns NULL for empty files (as Win32 does) or on failure. */
const void *platform_file_map(PlatformFile *f, uint32_t *size);
void platform_file_unmap(const void *view, uint32_t size);
/* CloseHandle. */
void platform_file_close(PlatformFile *f);

/* GetFileAttributesA: 0x10 for a directory, 0x20 (FILE_ATTRIBUTE_ARCHIVE)
 * for a file, | 0x1 if read-only; 0xffffffff if missing. */
uint32_t platform_file_attributes(const char *path);

/* FindFirstFileA / FindNextFileA / FindClose over one directory with a DOS
 * wildcard in the last path component. */
typedef struct PlatformFind PlatformFind;
typedef struct PlatformFindData {
    uint32_t attributes;
    uint32_t creation[2], last_access[2], last_write[2];
    uint32_t size_high, size_low;
    char     name[260];
} PlatformFindData;
PlatformFind *platform_find_first(const char *pattern, PlatformFindData *fd);
int platform_find_next(PlatformFind *find, PlatformFindData *fd);
int platform_find_close(PlatformFind *find);

/* CRITICAL_SECTION (recursive). */
typedef struct PlatformMutex PlatformMutex;
PlatformMutex *platform_mutex_create(void);
void platform_mutex_lock(PlatformMutex *m);
void platform_mutex_unlock(PlatformMutex *m);
void platform_mutex_destroy(PlatformMutex *m);

/* GetCurrentDirectoryA. Returns the length, 0 on failure. */
uint32_t platform_current_directory(char *buf, uint32_t size);

#endif /* PLATFORM_H */
