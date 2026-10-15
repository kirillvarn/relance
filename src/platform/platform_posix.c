/* platform_posix.c — POSIX (Linux/Android) implementation of platform.h.
 * Headless for now: message boxes go to stderr and answer "Ignore". An SDL
 * front end will replace those parts. */
#define _GNU_SOURCE
#include <dirent.h>
#include <dlfcn.h>
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <unistd.h>

#include "msvc_compat.h"
#include "platform.h"
#include "platform_internal.h"


/* ---- diagnostics ---- */

void platform_debug_output(const char *text)
{
    fputs(text, stderr);
}

void platform_debug_break(void)
{
    raise(SIGTRAP);
}

int platform_message_box_abort_retry_ignore(const char *text, const char *caption)
{
    fprintf(stderr, "[%s] %s\n", caption, text);
    return PLATFORM_MB_IGNORE;
}

void platform_post_quit(int exit_code)
{
    (void)exit_code;    /* no message loop yet */
}

/* ---- paths ---- */

/* Copy `src` to `dst` with '\' turned into '/'. */
void platform_normalize_seps(char *dst, size_t cap, const char *src)
{
    size_t i;
    for (i = 0; src[i] != '\0' && i + 1 < cap; i++)
        dst[i] = (src[i] == '\\') ? '/' : src[i];
    dst[i] = '\0';
}

static int path_exists(const char *path)
{
    struct stat st;
    return stat(path, &st) == 0;
}

/* Resolve `path` (already '/'-separated) case-insensitively, component by
 * component, into `out`. Returns 1 if the whole path exists. */
int platform_resolve_ci(const char *path, char *out, size_t cap)
{
    char work[PATH_BUF];
    char *comp, *save = NULL;
    size_t n;

    if (path_exists(path)) {
        snprintf(out, cap, "%s", path);
        return 1;
    }
    snprintf(work, sizeof(work), "%s", path);
    if (work[0] == '/') {
        snprintf(out, cap, "/");
    } else {
        snprintf(out, cap, ".");
    }
    for (comp = strtok_r(work, "/", &save); comp != NULL; comp = strtok_r(NULL, "/", &save)) {
        char candidate[PATH_BUF];
        const char *sep = (strcmp(out, "/") == 0) ? "" : "/";
        snprintf(candidate, sizeof(candidate), "%s%s%s", out, sep, comp);
        if (!path_exists(candidate)) {
            DIR *d = opendir(out);
            struct dirent *e;
            int found = 0;
            if (d == NULL)
                return 0;
            while ((e = readdir(d)) != NULL) {
                if (strcasecmp(e->d_name, comp) == 0) {
                    snprintf(candidate, sizeof(candidate), "%s%s%s", out, sep, e->d_name);
                    found = 1;
                    break;
                }
            }
            closedir(d);
            if (!found)
                return 0;
        }
        n = strlen(candidate);
        if (n + 1 > cap)
            return 0;
        memcpy(out, candidate, n + 1);
    }
    return 1;
}

FILE *platform_fopen(const char *path, const char *mode)
{
    char norm[PATH_BUF], real[PATH_BUF];
    platform_normalize_seps(norm, sizeof(norm), path);
    if (platform_resolve_ci(norm, real, sizeof(real)))
        return fopen(real, mode);
    return fopen(norm, mode);   /* creating a new file, or a real failure */
}

uint32_t platform_exe_path(char *buf, uint32_t size)
{
    ssize_t n = readlink("/proc/self/exe", buf, size - 1);
    if (n <= 0)
        return 0;
    buf[n] = '\0';
    return (uint32_t)n;
}

/* ---- dynamic libraries ---- */

/* "dir/System.dll" -> "dir/libsystem.so" (both '/'-separated). */
static void dll_to_so(const char *dll_path, char *out, size_t cap)
{
    char norm[PATH_BUF];
    char fname[MSVC_MAX_FNAME];
    const char *slash;
    size_t dirlen, i;

    platform_normalize_seps(norm, sizeof(norm), dll_path);
    msvc_splitpath(norm, NULL, NULL, fname, NULL);
    for (i = 0; fname[i] != '\0'; i++)
        if (fname[i] >= 'A' && fname[i] <= 'Z')
            fname[i] = (char)(fname[i] + ('a' - 'A'));
    slash = strrchr(norm, '/');
    dirlen = slash ? (size_t)(slash + 1 - norm) : 0;
    snprintf(out, cap, "%.*slib%s.so", (int)dirlen, norm, fname);
}

static int try_candidate(const char *dir, const char *file, char *out, uint32_t size)
{
    char joined[PATH_BUF], so[PATH_BUF], real[PATH_BUF];
    size_t dl = strlen(dir);
    const char *sep = (dl == 0 || dir[dl - 1] == '/' || dir[dl - 1] == '\\') ? "" : "/";

    snprintf(joined, sizeof(joined), "%s%s%s", dir, sep, file);
    platform_normalize_seps(joined, sizeof(joined), joined);
    dll_to_so(joined, so, sizeof(so));
    if (!platform_resolve_ci(so, real, sizeof(real)))
        return 0;
    if (strlen(joined) + 1 > size)
        return 0;
    memcpy(out, joined, strlen(joined) + 1);
    return 1;
}

/* guess: a name that carries its own relative path (".\x.dll", "..\x.dll")
 * or an absolute path is resolved only from the current directory, without
 * consulting `dirs`. With Freelancer's DllPath ".\" and the exe directory
 * as the working directory both readings agree. */
uint32_t platform_search_path(const char *dirs, const char *file, char *out, uint32_t size)
{
    char list[PATH_BUF], exe[PATH_BUF];
    char *d, *save = NULL;

    if (file[0] == '/' || file[0] == '\\' ||
        (file[0] == '.' && (file[1] == '/' || file[1] == '\\' ||
                            (file[1] == '.' && (file[2] == '/' || file[2] == '\\'))))) {
        return try_candidate("", file, out, size) ? (uint32_t)strlen(out) : 0;
    }

    if (dirs == NULL) {
        if (try_candidate(".", file, out, size))
            return (uint32_t)strlen(out);
        if (platform_exe_path(exe, sizeof(exe)) != 0) {
            char *slash = strrchr(exe, '/');
            if (slash != NULL) {
                slash[1] = '\0';
                if (try_candidate(exe, file, out, size))
                    return (uint32_t)strlen(out);
            }
        }
        return 0;
    }

    snprintf(list, sizeof(list), "%s", dirs);
    for (d = strtok_r(list, ";", &save); d != NULL; d = strtok_r(NULL, ";", &save))
        if (try_candidate(d, file, out, size))
            return (uint32_t)strlen(out);
    return 0;
}

void *platform_lib_load(const char *path)
{
    char so[PATH_BUF], real[PATH_BUF];
    void *h;
    int (*attach)(void *);

    dll_to_so(path, so, sizeof(so));
    if (!platform_resolve_ci(so, real, sizeof(real)))
        return NULL;
    h = dlopen(real, RTLD_NOW | RTLD_LOCAL);
    if (h == NULL) {
        fprintf(stderr, "platform_lib_load: %s\n", dlerror());
        return NULL;
    }
    *(void **)&attach = dlsym(h, "dll_process_attach");
    if (attach != NULL)
        attach(h);
    return h;
}

void platform_lib_free(void *lib)
{
    if (lib != NULL)
        dlclose(lib);
}

int platform_lib_version(const char *path, uint32_t *version_ms, uint32_t *version_ls)
{
    (void)path;
    *version_ms = 0;
    *version_ls = 0;
    return -1;
}
