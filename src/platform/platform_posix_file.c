/* platform_posix_file.c — Win32-style file handles, attributes, directory
 * search and locks on POSIX (see platform.h). */
#define _GNU_SOURCE
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

#include "platform.h"
#include "platform_internal.h"

#define W32_GENERIC_WRITE 0x40000000u
#define W32_CREATE_NEW        1u
#define W32_CREATE_ALWAYS     2u
#define W32_OPEN_EXISTING     3u
#define W32_OPEN_ALWAYS       4u
#define W32_TRUNCATE_EXISTING 5u

struct PlatformFile { int fd; };
struct PlatformMutex { pthread_mutex_t m; };
struct PlatformFind {
    DIR *dir;
    char dir_path[PATH_BUF];
    char pattern[PATH_BUF];
};

static _Thread_local uint32_t g_last_error;

uint32_t platform_last_error(void)
{
    return g_last_error;
}

static void set_error_from_errno(void)
{
    switch (errno) {
    case ENOENT:  g_last_error = 2; break;      /* ERROR_FILE_NOT_FOUND */
    case ENOTDIR: g_last_error = 3; break;      /* ERROR_PATH_NOT_FOUND */
    case EACCES:
    case EPERM:
    case EISDIR:  g_last_error = 5; break;      /* ERROR_ACCESS_DENIED */
    case EBADF:   g_last_error = 6; break;      /* ERROR_INVALID_HANDLE */
    case EEXIST:  g_last_error = 0x50; break;   /* ERROR_FILE_EXISTS */
    case ENOMEM:  g_last_error = 8; break;      /* ERROR_NOT_ENOUGH_MEMORY */
    default:      g_last_error = 0x1f; break;   /* ERROR_GEN_FAILURE */
    }
}

/* Resolve a Windows-style path for opening: separators, then case. When the
 * file does not exist yet, the normalised path is returned as is. */
static void resolve(const char *path, char *out, size_t cap)
{
    char norm[PATH_BUF];
    platform_normalize_seps(norm, sizeof(norm), path);
    if (!platform_resolve_ci(norm, out, cap)) {
        strncpy(out, norm, cap);
        out[cap - 1] = '\0';
    }
}

/* 100 ns intervals between 1601-01-01 and 1970-01-01. */
#define FILETIME_UNIX_EPOCH 116444736000000000ull

static void timespec_to_filetime(const struct timespec *ts, uint32_t *ft)
{
    uint64_t t = (uint64_t)ts->tv_sec * 10000000ull + (uint64_t)ts->tv_nsec / 100u
                 + FILETIME_UNIX_EPOCH;
    ft[0] = (uint32_t)t;
    ft[1] = (uint32_t)(t >> 32);
}

static void stat_to_times(const struct stat *st, uint32_t *c, uint32_t *a, uint32_t *w)
{
    /* No creation time on POSIX: use the change time, as Wine does. */
    if (c != NULL)
        timespec_to_filetime(&st->st_ctim, c);
    if (a != NULL)
        timespec_to_filetime(&st->st_atim, a);
    if (w != NULL)
        timespec_to_filetime(&st->st_mtim, w);
}

static uint32_t stat_to_attributes(const struct stat *st)
{
    if (S_ISDIR(st->st_mode))
        return 0x10;
    return (st->st_mode & S_IWUSR) ? 0x20 : 0x21;
}

/* ======================= file handles ======================= */

PlatformFile *platform_file_open(const char *path, uint32_t access, uint32_t creation)
{
    char real[PATH_BUF];
    int flags, fd;
    PlatformFile *f;
    struct stat st;

    resolve(path, real, sizeof(real));
    flags = (access & W32_GENERIC_WRITE) ? ((access & 0x80000000u) ? O_RDWR : O_WRONLY)
                                         : O_RDONLY;
    switch (creation) {
    case W32_CREATE_NEW:        flags |= O_CREAT | O_EXCL; break;
    case W32_CREATE_ALWAYS:     flags |= O_CREAT | O_TRUNC; break;
    case W32_OPEN_ALWAYS:       flags |= O_CREAT; break;
    case W32_TRUNCATE_EXISTING: flags |= O_TRUNC; break;
    default:                    break;   /* OPEN_EXISTING */
    }
    fd = open(real, flags | O_CLOEXEC, 0644);
    if (fd < 0) {
        set_error_from_errno();
        return NULL;
    }
    if (fstat(fd, &st) == 0 && S_ISDIR(st.st_mode)) {
        close(fd);              /* CreateFileA refuses directories */
        g_last_error = 5;
        return NULL;
    }
    f = malloc(sizeof(*f));
    if (f == NULL) {
        close(fd);
        g_last_error = 8;
        return NULL;
    }
    f->fd = fd;
    return f;
}

int platform_file_read(PlatformFile *f, void *buf, uint32_t n, uint32_t *read_out)
{
    uint32_t done = 0;
    while (done < n) {
        ssize_t r = read(f->fd, (char *)buf + done, n - done);
        if (r < 0) {
            if (errno == EINTR)
                continue;
            set_error_from_errno();
            *read_out = done;
            return 0;
        }
        if (r == 0)
            break;
        done += (uint32_t)r;
    }
    *read_out = done;
    return 1;
}

uint32_t platform_file_size(PlatformFile *f, uint32_t *high)
{
    struct stat st;
    if (fstat(f->fd, &st) != 0) {
        set_error_from_errno();
        return 0xffffffffu;
    }
    if (high != NULL)
        *high = (uint32_t)((uint64_t)st.st_size >> 32);
    return (uint32_t)st.st_size;
}

int platform_file_times(PlatformFile *f, uint32_t *c, uint32_t *a, uint32_t *w)
{
    struct stat st;
    if (fstat(f->fd, &st) != 0) {
        set_error_from_errno();
        return 0;
    }
    stat_to_times(&st, c, a, w);
    return 1;
}

const void *platform_file_map(PlatformFile *f, uint32_t *size)
{
    struct stat st;
    void *p;
    *size = 0;
    if (fstat(f->fd, &st) != 0) {
        set_error_from_errno();
        return NULL;
    }
    if (st.st_size == 0 || (uint64_t)st.st_size > 0xffffffffull) {
        g_last_error = 0x3ee;   /* ERROR_FILE_INVALID: Win32 cannot map empty files */
        return NULL;
    }
    p = mmap(NULL, (size_t)st.st_size, PROT_READ, MAP_PRIVATE, f->fd, 0);
    if (p == MAP_FAILED) {
        set_error_from_errno();
        return NULL;
    }
    *size = (uint32_t)st.st_size;
    return p;
}

void platform_file_unmap(const void *view, uint32_t size)
{
    if (view != NULL)
        munmap((void *)view, size);
}

void platform_file_close(PlatformFile *f)
{
    if (f == NULL)
        return;
    close(f->fd);
    free(f);
}

uint32_t platform_file_attributes(const char *path)
{
    char real[PATH_BUF];
    struct stat st;
    resolve(path, real, sizeof(real));
    if (stat(real, &st) != 0) {
        set_error_from_errno();
        return 0xffffffffu;
    }
    return stat_to_attributes(&st);
}

uint32_t platform_current_directory(char *buf, uint32_t size)
{
    if (getcwd(buf, size) == NULL) {
        set_error_from_errno();
        return 0;
    }
    return (uint32_t)strlen(buf);
}

/* ======================= directory search ======================= */

/* DOS wildcard match, case-insensitive. "*.*" matches every name. */
static int wild_match(const char *pat, const char *name)
{
    for (;;) {
        if (*pat == '*') {
            while (*pat == '*')
                pat++;
            if (*pat == '\0')
                return 1;
            for (; *name != '\0'; name++)
                if (wild_match(pat, name))
                    return 1;
            return wild_match(pat, name);
        }
        if (*pat == '\0')
            return *name == '\0';
        if (*name == '\0') {
            /* "x.*" matches "x" (DOS semantics) */
            return strcmp(pat, ".*") == 0;
        }
        if (*pat != '?' && tolower((unsigned char)*pat) != tolower((unsigned char)*name))
            return 0;
        pat++;
        name++;
    }
}

static int find_fill(PlatformFind *find, PlatformFindData *fd)
{
    struct dirent *e;
    while ((e = readdir(find->dir)) != NULL) {
        char full[PATH_BUF * 2];
        struct stat st;
        if (!wild_match(find->pattern, e->d_name))
            continue;
        snprintf(full, sizeof(full), "%s/%s", find->dir_path, e->d_name);
        if (stat(full, &st) != 0)
            continue;
        memset(fd, 0, sizeof(*fd));
        fd->attributes = stat_to_attributes(&st);
        stat_to_times(&st, fd->creation, fd->last_access, fd->last_write);
        if (!S_ISDIR(st.st_mode)) {
            fd->size_high = (uint32_t)((uint64_t)st.st_size >> 32);
            fd->size_low = (uint32_t)st.st_size;
        }
        strncpy(fd->name, e->d_name, sizeof(fd->name) - 1);
        return 1;
    }
    g_last_error = 0x12;    /* ERROR_NO_MORE_FILES */
    return 0;
}

PlatformFind *platform_find_first(const char *pattern, PlatformFindData *fd)
{
    char norm[PATH_BUF];
    char *slash;
    PlatformFind *find = calloc(1, sizeof(*find));
    if (find == NULL) {
        g_last_error = 8;
        return NULL;
    }
    platform_normalize_seps(norm, sizeof(norm), pattern);
    slash = strrchr(norm, '/');
    if (slash != NULL) {
        *slash = '\0';
        snprintf(find->pattern, sizeof(find->pattern), "%s", slash + 1);
        if (!platform_resolve_ci(norm[0] ? norm : "/", find->dir_path, sizeof(find->dir_path)))
            snprintf(find->dir_path, sizeof(find->dir_path), "%s", norm);
    } else {
        snprintf(find->pattern, sizeof(find->pattern), "%s", norm);
        snprintf(find->dir_path, sizeof(find->dir_path), ".");
    }
    if (strcmp(find->pattern, "*.*") == 0)
        snprintf(find->pattern, sizeof(find->pattern), "*");
    find->dir = opendir(find->dir_path);
    if (find->dir == NULL) {
        set_error_from_errno();
        free(find);
        return NULL;
    }
    if (!find_fill(find, fd)) {
        closedir(find->dir);
        free(find);
        g_last_error = 2;   /* FindFirstFile: ERROR_FILE_NOT_FOUND when nothing matches */
        return NULL;
    }
    return find;
}

int platform_find_next(PlatformFind *find, PlatformFindData *fd)
{
    if (find == NULL) {
        g_last_error = 6;
        return 0;
    }
    return find_fill(find, fd);
}

int platform_find_close(PlatformFind *find)
{
    if (find == NULL) {
        g_last_error = 6;
        return 0;
    }
    closedir(find->dir);
    free(find);
    return 1;
}

/* ======================= locks ======================= */

PlatformMutex *platform_mutex_create(void)
{
    pthread_mutexattr_t attr;
    PlatformMutex *m = malloc(sizeof(*m));
    if (m == NULL)
        abort();
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(&m->m, &attr);
    pthread_mutexattr_destroy(&attr);
    return m;
}

void platform_mutex_lock(PlatformMutex *m)
{
    pthread_mutex_lock(&m->m);
}

void platform_mutex_unlock(PlatformMutex *m)
{
    pthread_mutex_unlock(&m->m);
}

void platform_mutex_destroy(PlatformMutex *m)
{
    if (m == NULL)
        return;
    pthread_mutex_destroy(&m->m);
    free(m);
}
