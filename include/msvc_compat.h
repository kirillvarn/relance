/* msvc_compat.h — small wrappers for MSVCRT functions that libc lacks or
 * implements differently. Only what ported code actually calls. */
#ifndef MSVC_COMPAT_H
#define MSVC_COMPAT_H

#include <stddef.h>
#include <stdint.h>

/* MSVCRT limits used by the originals. */
#define MSVC_MAX_PATH  260
#define MSVC_MAX_DRIVE 3
#define MSVC_MAX_DIR   256
#define MSVC_MAX_FNAME 256
#define MSVC_MAX_EXT   256

/* _stricmp / _strnicmp in the "C" locale: ASCII case folding, the result is
 * the difference of the folded bytes. */
int msvc_stricmp(const char *a, const char *b);
int msvc_strnicmp(const char *a, const char *b, size_t n);

/* _splitpath: accepts both '\' and '/'. Any output may be NULL. Output
 * buffers must have the MSVC_MAX_* sizes above. */
void msvc_splitpath(const char *path, char *drive, char *dir, char *fname, char *ext);

/* _makepath: like MSVCRT, appends '\' after a dir that does not end in '\'
 * or '/' (platform_* path functions accept '\'). Any input may be NULL. */
void msvc_makepath(char *path, const char *drive, const char *dir,
                   const char *fname, const char *ext);

/* _fullpath: make `path` absolute against the current directory and fold
 * "." and ".." components. Separators are kept as given; added ones are '\'.
 * Returns `out`, or NULL if it does not fit. */
char *msvc_fullpath(char *out, const char *path, size_t len);

/* _access(path, 0): 0 if the file or directory exists, -1 otherwise. */
int msvc_access(const char *path, int mode);

/* KERNEL32 DosDateTimeToFileTime: FAT date/time (local, no zone conversion)
 * to a FILETIME {lo, hi}. Returns 0 and leaves `ft` untouched for an invalid
 * date, like the original. */
int win32_dos_datetime_to_filetime(uint16_t fat_date, uint16_t fat_time, uint32_t *ft);

/* _ftol: truncate toward zero to 64 bits (the original returns EDX:EAX;
 * callers mostly keep the low bits). NaN and out-of-range values give
 * INT64_MIN, the x87 integer indefinite. */
int64_t msvc_ftol(double x);

#endif /* MSVC_COMPAT_H */
