/* platform_internal.h — helpers shared by the POSIX platform files. */
#ifndef PLATFORM_INTERNAL_H
#define PLATFORM_INTERNAL_H

#include <stddef.h>

#define PATH_BUF 4096

/* Copy `src` to `dst` with '\' turned into '/'. */
void platform_normalize_seps(char *dst, size_t cap, const char *src);
/* Resolve a '/'-separated path case-insensitively into `out`; 1 if it exists. */
int platform_resolve_ci(const char *path, char *out, size_t cap);

#endif /* PLATFORM_INTERNAL_H */
