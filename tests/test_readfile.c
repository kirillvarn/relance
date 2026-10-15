/* test_readfile.c — end-to-end test of the readfile.dll port, loaded through
 * the dacom port's AddLibrary.
 *
 * usage: test_readfile <game dir> <dir with libreadfile.so> [<archive list> <out>]
 *
 * With an archive list (paths relative to <game>/DATA), every archive is
 * opened through DACOM → DOS → UTF, walked with FindFirstFile/FindNextFile,
 * every file read with CreateFile/ReadFile, and one line per node is written
 * to <out> in the format of tests/utf_oracle.py, which reads the same
 * archives independently. `make test` diffs the two. */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dacom.h"
#include "dafile.h"

static int g_fail;

#define CHECK(cond) do { \
    if (!(cond)) { fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #cond); g_fail = 1; } \
} while (0)

static ICOManager *g_com;

static int quiet_dump(uint32_t flags, const char *fmt, ...)
{
    (void)flags;
    (void)fmt;
    return 0;
}

static DAFILEDESC fs_desc(const char *name, const char *iface)
{
    DAFILEDESC d;
    memset(&d, 0, sizeof(d));
    d.size = DAFILEDESC_SIZE_FIND;
    d.component = "FileSystem";
    d.iface = iface;
    d.name = name;
    d.access = DA_GENERIC_READ;
    d.share = DA_FILE_SHARE_READ;
    d.creation = DA_OPEN_EXISTING;
    d.find = DA_INVALID_HANDLE;
    return d;
}

static IFileSystem *open_fs(void *opener, int via_com, const char *name, const char *iface)
{
    DAFILEDESC d = fs_desc(name, iface);
    IFileSystem *fs = NULL;
    GENRESULT r;
    if (via_com)
        r = g_com->vtbl->CreateInstance(g_com, (DACOMDESC *)&d, (void **)&fs);
    else
        r = ((IFileSystem *)opener)->vtbl->CreateInstance(opener, &d, (void **)&fs);
    return r == GR_OK ? fs : NULL;
}

static uint32_t fnv1a(uint32_t h, const uint8_t *p, uint32_t n)
{
    while (n--)
        h = (h ^ *p++) * 0x01000193u;
    return h;
}

/* Read a whole file through the interface; returns its hash. */
static uint32_t read_all(IFileSystem *fs, DAHANDLE h, uint32_t *total)
{
    uint8_t buf[4096];
    uint32_t got, hash = 0x811c9dc5u;
    *total = 0;
    while (fs->vtbl->ReadFile(fs, h, buf, sizeof(buf), &got, NULL)) {
        hash = fnv1a(hash, buf, got);
        *total += got;
    }
    CHECK(fs->vtbl->GetLastError(fs) == DA_ERROR_READ_FAULT);   /* end of data */
    return hash;
}

static void walk(IFileSystem *fs, const char *arch, const char *dir, FILE *out)
{
    char pattern[600], path[600];
    DA_FIND_DATA fd;
    DAHANDLE find;

    snprintf(pattern, sizeof(pattern), "%s\\*", dir);
    find = fs->vtbl->FindFirstFile(fs, pattern, &fd);
    if (find == DA_INVALID_HANDLE) {
        CHECK(fs->vtbl->GetLastError(fs) == DA_ERROR_NO_MORE_FILES);   /* empty directory */
        return;
    }
    do {
        snprintf(path, sizeof(path), "%s\\%s", dir, fd.file_name);
        if (fd.attributes & DA_FILE_ATTRIBUTE_DIRECTORY) {
            fprintf(out, "%s|%s|1|0|0\n", arch, path);
            CHECK(fs->vtbl->GetFileAttributes(fs, path) == DA_FILE_ATTRIBUTE_DIRECTORY);
            walk(fs, arch, path, out);
        } else {
            DAFILEDESC d = fs_desc(path, NULL);
            DAHANDLE h = fs->vtbl->CreateFile(fs, &d);
            uint32_t size, total, hash;
            CHECK(h != DA_INVALID_HANDLE);
            if (h == DA_INVALID_HANDLE)
                continue;
            size = fs->vtbl->GetFileSize(fs, h, NULL);
            CHECK(size == fd.size_low);
            hash = read_all(fs, h, &total);
            CHECK(total == size);
            fprintf(out, "%s|%s|0|%u|%08x\n", arch, path, size, hash);
            CHECK(fs->vtbl->CloseHandle(fs, h) == 1);
        }
    } while (fs->vtbl->FindNextFile(fs, find, &fd));
    CHECK(fs->vtbl->GetLastError(fs) == DA_ERROR_NO_MORE_FILES);
    CHECK(fs->vtbl->FindClose(fs, find) == 1);
}

/* Every archive in the list, through DACOM → DOS directory → UTF. */
static void walk_archives(IFileSystem *data, const char *list, const char *out_path)
{
    char arch[512];
    FILE *in = fopen(list, "r"), *out = fopen(out_path, "w");
    int n = 0;
    CHECK(in != NULL && out != NULL);
    if (in == NULL || out == NULL)
        return;
    while (fscanf(in, "%511s", arch) == 1) {
        IFileSystem *utf = open_fs(data, 0, arch, NULL);
        CHECK(utf != NULL);
        if (utf == NULL)
            continue;
        walk(utf, arch, "", out);
        utf->vtbl->Release(utf);
        n++;
    }
    fclose(in);
    fclose(out);
    printf("test_readfile: walked %d archives\n", n);
}

/* Sub file systems, mappings and file pointers on one archive. */
static void test_archive_api(IFileSystem *data, const char *arch)
{
    IFileSystem *utf = open_fs(data, 0, arch, NULL), *sub = NULL, *leaf = NULL;
    DA_FIND_DATA fd;
    DAHANDLE find, map, h;
    char dir[300] = "", leafname[300] = "", buf[300];
    uint32_t size, got;
    uint8_t first[16], again[16];

    CHECK(utf != NULL);
    if (utf == NULL)
        return;
    /* First directory and the first file inside it. */
    find = utf->vtbl->FindFirstFile(utf, "\\*", &fd);
    CHECK(find != DA_INVALID_HANDLE);
    do {
        if (fd.attributes & DA_FILE_ATTRIBUTE_DIRECTORY) {
            snprintf(dir, sizeof(dir), "\\%s", fd.file_name);
            break;
        }
    } while (utf->vtbl->FindNextFile(utf, find, &fd));
    utf->vtbl->FindClose(utf, find);
    CHECK(dir[0] != '\0');

    sub = open_fs(utf, 0, dir, NULL);          /* sub file system for the directory */
    CHECK(sub != NULL);
    if (sub == NULL)
        goto out;
    find = sub->vtbl->FindFirstFile(sub, "\\*", &fd);  /* orig: relative to the archive root */
    CHECK(find != DA_INVALID_HANDLE);
    sub->vtbl->FindClose(sub, find);
    CHECK(utf->vtbl->CreateFileMapping(utf, NULL, NULL, DA_PAGE_READONLY, 0, 0, NULL) ==
          DA_INVALID_HANDLE);                  /* the archive itself cannot map */

    /* A leaf: open it as a sub file system and read it with handle 0. */
    snprintf(buf, sizeof(buf), "%s\\*", dir);
    find = utf->vtbl->FindFirstFile(utf, buf, &fd);
    do {
        if (!(fd.attributes & DA_FILE_ATTRIBUTE_DIRECTORY) && fd.size_low >= 16) {
            snprintf(leafname, sizeof(leafname), "%s\\%s", dir, fd.file_name);
            break;
        }
    } while (utf->vtbl->FindNextFile(utf, find, &fd));
    utf->vtbl->FindClose(utf, find);
    if (leafname[0] == '\0')
        goto out;
    leaf = open_fs(utf, 0, leafname, NULL);
    CHECK(leaf != NULL);
    if (leaf == NULL)
        goto out;
    size = leaf->vtbl->GetFileSize(leaf, NULL, NULL);
    CHECK(size == fd.size_low);
    CHECK(leaf->vtbl->ReadFile(leaf, NULL, first, sizeof(first), &got, NULL) && got == 16);
    CHECK(leaf->vtbl->SetFilePointer(leaf, NULL, 0, NULL, DA_FILE_BEGIN) == 0);
    CHECK(leaf->vtbl->ReadFile(leaf, NULL, again, sizeof(again), &got, NULL) &&
          memcmp(first, again, 16) == 0);
    CHECK(leaf->vtbl->SetFilePointer(leaf, NULL, 0, NULL, DA_FILE_END) == size);
    CHECK(leaf->vtbl->SetFilePointer(leaf, NULL, 1, NULL, DA_FILE_CURRENT) == 0xffffffffu);
    map = leaf->vtbl->CreateFileMapping(leaf, NULL, NULL, DA_PAGE_READONLY, 0, 0, NULL);
    CHECK(map != DA_INVALID_HANDLE);
    {
        const uint8_t *view = leaf->vtbl->MapViewOfFile(leaf, map, DA_FILE_MAP_READ, 0, 0, size);
        CHECK(view != NULL && memcmp(view, first, 16) == 0);
        CHECK(leaf->vtbl->MapViewOfFile(leaf, map, DA_FILE_MAP_READ, 0, 0, size + 1) == NULL);
        CHECK(leaf->vtbl->UnmapViewOfFile(leaf, view) == 1);
    }
    CHECK(leaf->vtbl->CloseHandle(leaf, map) == 1);
    /* Handles from the archive work in the leaf's archive too. */
    {
        DAFILEDESC d = fs_desc(leafname, NULL);
        h = utf->vtbl->CreateFile(utf, &d);
        CHECK(h != DA_INVALID_HANDLE);
        CHECK(utf->vtbl->CloseHandle(utf, h) == 1);
        CHECK(utf->vtbl->CloseHandle(utf, (DAHANDLE)&d) == 0);   /* bogus handle */
        CHECK(utf->vtbl->GetLastError(utf) == DA_ERROR_INVALID_HANDLE);
    }
    CHECK(utf->vtbl->GetFileAttributes(utf, "\\no\\such\\node") == 0);
    CHECK(utf->vtbl->GetLastError(utf) == DA_ERROR_BAD_PATHNAME);
    CHECK(utf->vtbl->SetCurrentDirectory(utf, dir) == 1);
out:
    if (leaf != NULL)
        leaf->vtbl->Release(leaf);
    if (sub != NULL)
        sub->vtbl->Release(sub);
    utf->vtbl->Release(utf);
}

/* An archive held in a MEM file system (IDataBuffer path of the factory). */
static void test_mem(IFileSystem *data, const char *arch, const char *game)
{
    char path[1024];
    FILE *f;
    long n;
    uint8_t *bytes;
    DAFILEDESC d;
    IFileSystem *mem = NULL, *utf = NULL;
    DA_FIND_DATA fd;
    DAHANDLE find;
    (void)data;

    snprintf(path, sizeof(path), "%s/DATA/%s", game, arch);
    for (char *p = path; *p; p++)
        if (*p == '\\')
            *p = '/';
    f = fopen(path, "rb");
    CHECK(f != NULL);
    if (f == NULL)
        return;
    fseek(f, 0, SEEK_END);
    n = ftell(f);
    fseek(f, 0, SEEK_SET);
    bytes = malloc((size_t)n);
    CHECK(fread(bytes, 1, (size_t)n, f) == (size_t)n);
    fclose(f);

    memset(&d, 0, sizeof(d));
    d.size = DAFILEDESC_SIZE_MEM;
    d.component = "FileSystem";
    d.iface = "MEM";
    d.name = "mem.utf";
    d.access = DA_GENERIC_READ | DA_GENERIC_WRITE;
    d.creation = DA_OPEN_EXISTING;
    d.buffer = bytes;
    d.buffer_size = (uint32_t)n;
    CHECK(g_com->vtbl->CreateInstance(g_com, (DACOMDESC *)&d, (void **)&mem) == GR_OK);
    if (mem == NULL)
        goto out;
    CHECK(mem->vtbl->GetFileSize(mem, NULL, NULL) == (uint32_t)n);
    {
        uint8_t hdr[4];
        uint32_t got;
        CHECK(mem->vtbl->ReadFile(mem, NULL, hdr, 4, &got, NULL) && memcmp(hdr, "UTF ", 4) == 0);
    }
    d = fs_desc("mem.utf", NULL);
    d.parent = mem;
    CHECK(g_com->vtbl->CreateInstance(g_com, (DACOMDESC *)&d, (void **)&utf) == GR_OK);
    if (utf != NULL) {
        find = utf->vtbl->FindFirstFile(utf, "\\*", &fd);
        CHECK(find != DA_INVALID_HANDLE);
        utf->vtbl->FindClose(utf, find);
        utf->vtbl->Release(utf);
    }
    mem->vtbl->Release(mem);
out:
    free(bytes);
}

/* DOS file system details. */
static void test_dos(const char *game)
{
    char path[1024], buf[300];
    IFileSystem *exe, *single;
    DAFILEDESC d;
    DAHANDLE h;
    DA_FIND_DATA fd;
    uint32_t size, got;
    uint8_t first[8], again[8];

    snprintf(path, sizeof(path), "%s/EXE", game);
    exe = open_fs(NULL, 1, path, NULL);
    CHECK(exe != NULL);
    if (exe == NULL)
        return;
    CHECK(exe->vtbl->GetFileAttributes(exe, "dacom.ini") == 0x20 ||
          exe->vtbl->GetFileAttributes(exe, "dacom.ini") == 0x21);
    CHECK(exe->vtbl->GetFileAttributes(exe, "..\\DATA") == DA_FILE_ATTRIBUTE_DIRECTORY);
    d = fs_desc("DACOM.INI", NULL);                     /* case-insensitive on POSIX */
    h = exe->vtbl->CreateFile(exe, &d);
    CHECK(h != DA_INVALID_HANDLE);
    size = exe->vtbl->GetFileSize(exe, h, NULL);
    CHECK(size > 100);
    CHECK(exe->vtbl->ReadFile(exe, h, first, sizeof(first), &got, NULL) && got == 8);
    CHECK(exe->vtbl->GetFilePosition(exe, h, NULL) == 8);
    CHECK(exe->vtbl->SetFilePointer(exe, h, 0, NULL, DA_FILE_BEGIN) == 0);
    CHECK(exe->vtbl->ReadFile(exe, h, again, sizeof(again), &got, NULL) &&
          memcmp(first, again, 8) == 0);
    CHECK(exe->vtbl->SetFilePointer(exe, h, 0, NULL, DA_FILE_END) == size);
    CHECK(exe->vtbl->ReadFile(exe, h, again, 1, &got, NULL) == 0 && got == 0);  /* short read */
    CHECK(exe->vtbl->CloseHandle(exe, h) == 1);
    CHECK(exe->vtbl->CloseHandle(exe, h) == 0);
    CHECK(exe->vtbl->GetLastError(exe) == DA_ERROR_INVALID_HANDLE);
    /* orig: FindFirstFile fails whenever the pattern joins to the root */
    CHECK(exe->vtbl->FindFirstFile(exe, "*.ini", &fd) == DA_INVALID_HANDLE);
    CHECK(exe->vtbl->GetLastError(exe) == DA_ERROR_BAD_PATHNAME);
    exe->vtbl->GetFileName(exe, buf, sizeof(buf));
    CHECK(strstr(buf, "EXE") != NULL);
    CHECK(exe->vtbl->GetCurrentDirectory(exe, sizeof(buf), buf) == 1 && strcmp(buf, "\\") == 0);
    CHECK(exe->vtbl->SetCurrentDirectory(exe, "..\\DATA") == 1);
    CHECK(exe->vtbl->GetFileAttributes(exe, "UNIVERSE") == DA_FILE_ATTRIBUTE_DIRECTORY);

    /* A single-file DOS file system ("DOS" interface) and its own handle 0. */
    single = open_fs(exe, 0, "..\\EXE\\dacom.ini", "DOS");
    CHECK(single != NULL);
    if (single != NULL) {
        CHECK(single->vtbl->GetFileSize(single, NULL, NULL) == size);
        CHECK(single->vtbl->ReadFile(single, NULL, again, 8, &got, NULL) &&
              memcmp(first, again, 8) == 0);
        CHECK(single->vtbl->CreateFile(single, NULL) != DA_INVALID_HANDLE);
        single->vtbl->Release(single);
    }
    exe->vtbl->Release(exe);
}

/* SearchPath over EXE;DATA. */
static void test_search_path(const char *game, const char *arch)
{
    DACOMDESC d = { 8, "SearchPath", NULL, NULL, NULL };
    ISearchPath *sp = NULL;
    IFileSystem *fs = NULL;
    char path[2048], back[2048];
    DAFILEDESC fd;

    CHECK(g_com->vtbl->CreateInstance(g_com, &d, (void **)&sp) == GR_OK);
    if (sp == NULL)
        return;
    snprintf(path, sizeof(path), ";%s/EXE;;%s/DATA;", game, game);
    CHECK(sp->vtbl->SetPath(sp, path) == GR_OK);
    sp->vtbl->GetPath(sp, back, sizeof(back));
    CHECK(strcmp(path, back) == 0);
    fd = fs_desc(arch, NULL);
    CHECK(sp->vtbl->CreateInstance(sp, &fd, (void **)&fs) == GR_OK);  /* found in DATA */
    if (fs != NULL)
        fs->vtbl->Release(fs);
    fd = fs_desc("no_such_file.3db", NULL);
    CHECK(sp->vtbl->CreateInstance(sp, &fd, (void **)&fs) != GR_OK);
    sp->vtbl->Release(sp);
}

int main(int argc, char **argv)
{
    char ini[8192], data_path[1024], first_arch[512] = "";
    IFileSystem *data;

    if (argc != 3 && argc != 5) {
        fprintf(stderr, "usage: %s <game dir> <so dir> [<archive list> <out>]\n", argv[0]);
        return 2;
    }
    g_com = DACOM_Acquire();
    {
        char so_dir[4096];
        /* DllPath must be absolute: a relative one is taken from the exe dir. */
        if (realpath(argv[2], so_dir) == NULL)
            return 2;
        snprintf(ini, sizeof(ini),
                 "[DACOM]\nIgnoreDACOMEnv = true\nDllPath = %s\n[Libraries]\nreadfile.dll\n",
                 so_dir);
    }
    if (getenv("TEST_VERBOSE") == NULL)
        FDUMP = quiet_dump;
    CHECK(g_com->vtbl->SetINIConfig(g_com, ini, 2) == GR_OK);

    snprintf(data_path, sizeof(data_path), "%s/DATA", argv[1]);
    data = open_fs(NULL, 1, data_path, NULL);
    CHECK(data != NULL);
    if (data == NULL)
        return 1;

    if (argc == 5) {
        FILE *in = fopen(argv[3], "r");
        if (in != NULL) {
            /* the first model (.cmp): it has directories at its root */
            while (fscanf(in, "%511s", first_arch) == 1) {
                size_t l = strlen(first_arch);
                if (l > 4 && strcmp(first_arch + l - 4, ".cmp") == 0)
                    break;
                first_arch[0] = '\0';
            }
            fclose(in);
        }
        walk_archives(data, argv[3], argv[4]);
    } else {
        snprintf(first_arch, sizeof(first_arch), "SHIPS\\LIBERTY\\li_elite\\li_elite.cmp");
    }
    if (first_arch[0] != '\0') {
        test_archive_api(data, first_arch);
        test_mem(data, first_arch, argv[1]);
        test_search_path(argv[1], first_arch);
    }
    test_dos(argv[1]);
    data->vtbl->Release(data);
    g_com->vtbl->ShutDown(g_com);
    puts(g_fail ? "test_readfile: FAILED" : "test_readfile: OK");
    return g_fail;
}
