/* dafile.h — DA file-system interfaces ("1.11_IFileSystem", "1.11_ISearchPath",
 * "1.11_IDataBuffer") recovered from readfile.dll (notes/readfile_dll.md).
 *
 * IFileSystem mirrors the Win32 file API one method per function; slot names
 * are the Win32 function each slot wraps in the DOS implementation
 * (readfile.dll vtbl 06b79218). Names marked "guess" are inferred from the
 * argument count only (the slot is a stub everywhere).
 */
#ifndef DAFILE_H
#define DAFILE_H

#include <stddef.h>
#include <stdint.h>

#include "dacom.h"

/* A Win32-style handle. Values 0 and DA_INVALID_HANDLE are special, exactly
 * as in the original: 0 means "the file system's own file" in most methods. */
typedef void *DAHANDLE;
#define DA_INVALID_HANDLE ((DAHANDLE)(intptr_t)-1)

/* Win32 constants used by the interface. */
#define DA_GENERIC_READ        0x80000000u
#define DA_GENERIC_WRITE       0x40000000u
#define DA_FILE_SHARE_READ     0x00000001u
#define DA_OPEN_EXISTING       3u
#define DA_OPEN_ALWAYS         4u
#define DA_PAGE_READONLY       2u
#define DA_FILE_MAP_READ       4u
#define DA_FILE_BEGIN          0u
#define DA_FILE_CURRENT        1u
#define DA_FILE_END            2u
#define DA_FILE_ATTRIBUTE_DIRECTORY 0x10u
#define DA_INVALID_FILE_SIZE   0xffffffffu

/* Win32 error codes stored as "last error" (GetLastError slot). */
#define DA_ERROR_FILE_NOT_FOUND     2u
#define DA_ERROR_PATH_NOT_FOUND     3u
#define DA_ERROR_ACCESS_DENIED      5u
#define DA_ERROR_INVALID_HANDLE     6u
#define DA_ERROR_NO_MORE_FILES      0x12u
#define DA_ERROR_READ_FAULT         0x1eu
#define DA_ERROR_OUT_OF_STRUCTURES  0x54u
#define DA_ERROR_INVALID_PARAMETER  0x57u
#define DA_ERROR_BAD_PATHNAME       0xa1u

typedef struct DA_FILETIME { uint32_t lo, hi; } DA_FILETIME;

/* WIN32_FIND_DATAA, 0x140 bytes. */
typedef struct DA_FIND_DATA {
    uint32_t    attributes;           /* +0x000 */
    DA_FILETIME creation;             /* +0x004 */
    DA_FILETIME last_access;          /* +0x00c */
    DA_FILETIME last_write;           /* +0x014 */
    uint32_t    size_high;            /* +0x01c */
    uint32_t    size_low;             /* +0x020 */
    uint32_t    reserved0;            /* +0x024 */
    uint32_t    reserved1;            /* +0x028 */
    char        file_name[260];       /* +0x02c */
    char        alternate_name[14];   /* +0x130 */
} DA_FIND_DATA;
_Static_assert(offsetof(DA_FIND_DATA, file_name) == 0x2c, "find data name");
_Static_assert(sizeof(DA_FIND_DATA) == 0x140, "find data size");

typedef struct IFileSystem IFileSystem;

/* "FileSystem" creation descriptor. The original has three sizes; `size`
 * holds the original byte size and says which tail fields are valid:
 *   DAFILEDESC_SIZE_BASIC 0x30  up to `handle`
 *   DAFILEDESC_SIZE_FIND  0x34  + `find`   (node / find handle for UTF)
 *   DAFILEDESC_SIZE_MEM   0x40  + buffer fields (MEM file system)
 * Offsets in the comments are the original 32-bit ones. */
typedef struct DAFILEDESC {
    uint32_t     size;            /* +0x00 */
    const char  *component;       /* +0x04 "FileSystem" */
    const char  *iface;           /* +0x08 "DOS" / "UTF" / "MEM" / NULL = any */
    const char  *name;            /* +0x0c file or directory name */
    uint32_t     access;          /* +0x10 dwDesiredAccess */
    uint32_t     share;           /* +0x14 */
    void        *security;        /* +0x18 */
    uint32_t     creation;        /* +0x1c dwCreationDisposition */
    uint32_t     flags;           /* +0x20 dwFlagsAndAttributes */
    DAHANDLE     template_file;   /* +0x24 */
    IFileSystem *parent;          /* +0x28 file system to open `name` in */
    DAHANDLE     handle;          /* +0x2c DOS: handle of the file inside `parent` */
    DAHANDLE     find;            /* +0x30 UTF: find handle to open the last match of */
    const void  *buffer;          /* +0x34 MEM: initial contents / buffer */
    uint32_t     buffer_size;     /* +0x38 MEM */
    uint32_t     buffer_flags;    /* +0x3c MEM: bit0 use `buffer` in place, bit1 take ownership */
} DAFILEDESC;
#define DAFILEDESC_SIZE_BASIC 0x30u
#define DAFILEDESC_SIZE_FIND  0x34u
#define DAFILEDESC_SIZE_MEM   0x40u
#if UINTPTR_MAX == 0xffffffffu
_Static_assert(offsetof(DAFILEDESC, parent) == 0x28, "desc parent");
_Static_assert(offsetof(DAFILEDESC, find) == 0x30, "desc find");
_Static_assert(sizeof(DAFILEDESC) == 0x40, "desc size");
#endif

/* Slot 40 callback, run under the file system's lock. stdcall in the original. */
typedef int32_t (DACOM_API *DA_SERIALIZE_FN)(void *arg, void *ctx);

typedef struct IFileSystemVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *CreateInstance)(void *self, DAFILEDESC *desc, void **out);          /* 3 */
    int32_t  (DACOM_API *CloseHandle)(void *self, DAHANDLE h);                                /* 4 */
    int32_t  (DACOM_API *ReadFile)(void *self, DAHANDLE h, void *buf, uint32_t n,
                                   uint32_t *read, void *overlapped);                         /* 5 */
    int32_t  (DACOM_API *WriteFile)(void *self, DAHANDLE h, const void *buf, uint32_t n,
                                    uint32_t *written, void *overlapped);                     /* 6 */
    int32_t  (DACOM_API *GetOverlappedResult)(void *self, DAHANDLE h, void *overlapped,
                                              uint32_t *n, int32_t wait);                     /* 7 guess */
    uint32_t (DACOM_API *SetFilePointer)(void *self, DAHANDLE h, int32_t dist,
                                         int32_t *dist_high, uint32_t method);                /* 8 */
    int32_t  (DACOM_API *SetEndOfFile)(void *self, DAHANDLE h);                               /* 9 */
    uint32_t (DACOM_API *GetFileSize)(void *self, DAHANDLE h, uint32_t *size_high);           /* 10 */
    int32_t  (DACOM_API *LockFile)(void *self, DAHANDLE h, uint32_t off_lo, uint32_t off_hi,
                                   uint32_t n_lo, uint32_t n_hi);                             /* 11 */
    int32_t  (DACOM_API *UnlockFile)(void *self, DAHANDLE h, uint32_t off_lo, uint32_t off_hi,
                                     uint32_t n_lo, uint32_t n_hi);                           /* 12 */
    int32_t  (DACOM_API *GetFileTime)(void *self, DAHANDLE h, DA_FILETIME *creation,
                                      DA_FILETIME *access, DA_FILETIME *write);               /* 13 */
    int32_t  (DACOM_API *SetFileTime)(void *self, DAHANDLE h, const DA_FILETIME *creation,
                                      const DA_FILETIME *access, const DA_FILETIME *write);   /* 14 */
    DAHANDLE (DACOM_API *CreateFileMapping)(void *self, DAHANDLE h, void *security,
                                            uint32_t protect, uint32_t size_hi,
                                            uint32_t size_lo, const char *name);              /* 15 */
    void    *(DACOM_API *MapViewOfFile)(void *self, DAHANDLE mapping, uint32_t access,
                                        uint32_t off_hi, uint32_t off_lo, uint32_t n);        /* 16 */
    int32_t  (DACOM_API *UnmapViewOfFile)(void *self, const void *view);                      /* 17 */
    DAHANDLE (DACOM_API *FindFirstFile)(void *self, const char *pattern, DA_FIND_DATA *fd);   /* 18 */
    int32_t  (DACOM_API *FindNextFile)(void *self, DAHANDLE h, DA_FIND_DATA *fd);             /* 19 */
    int32_t  (DACOM_API *FindClose)(void *self, DAHANDLE h);                                  /* 20 */
    int32_t  (DACOM_API *CreateDirectory)(void *self, const char *path, void *security);      /* 21 */
    int32_t  (DACOM_API *RemoveDirectory)(void *self, const char *path);                      /* 22 */
    uint32_t (DACOM_API *GetCurrentDirectory)(void *self, uint32_t len, char *buf);           /* 23 */
    int32_t  (DACOM_API *SetCurrentDirectory)(void *self, const char *path);                  /* 24 */
    int32_t  (DACOM_API *DeleteFile)(void *self, const char *path);                           /* 25 */
    int32_t  (DACOM_API *CopyFile)(void *self, const char *src, const char *dst,
                                   int32_t fail_if_exists);                                   /* 26 guess */
    int32_t  (DACOM_API *MoveFile)(void *self, const char *src, const char *dst);             /* 27 guess */
    uint32_t (DACOM_API *GetFileAttributes)(void *self, const char *path);                    /* 28 */
    int32_t  (DACOM_API *SetFileAttributes)(void *self, const char *path, uint32_t attrs);    /* 29 */
    uint32_t (DACOM_API *GetLastError)(void *self);                                           /* 30 */
    DAHANDLE (DACOM_API *CreateFile)(void *self, const DAFILEDESC *desc);                     /* 31 */
    uint32_t (DACOM_API *GetFilePosition)(void *self, DAHANDLE h, uint32_t *pos_high);        /* 32 guess */
    void     (DACOM_API *GetFileName)(void *self, char *buf, uint32_t len);                   /* 33 */
    uint32_t (DACOM_API *GetAccessType)(void *self);                                          /* 34 */
    GENRESULT (DACOM_API *GetParentSystem)(void *self, void **out);                           /* 35 */
    int32_t  (DACOM_API *Reserved36)(void *self, void *a, void *b);                           /* 36 returns -1 */
    int32_t  (DACOM_API *Reserved37)(void *self, void *a, void *b);                           /* 37 returns -1 */
    int32_t  (DACOM_API *Reserved38)(void *self, void *a, void *b, void *c, void *d, void *e);/* 38 returns -1 */
    int32_t  (DACOM_API *Reserved39)(void *self, void *a, void *b, void *c, void *d, void *e);/* 39 returns -1 */
    int32_t  (DACOM_API *Serialize)(void *self, void *arg, DA_SERIALIZE_FN fn, void *ctx);    /* 40 guess */
    int32_t  (DACOM_API *GetAbsolutePath)(void *self, char *out, const char *path,
                                          uint32_t len);                                      /* 41 */
} IFileSystemVtbl;
struct IFileSystem { const IFileSystemVtbl *vtbl; };

/* "1.11_IDataBuffer": exposed by MEM file systems. */
typedef struct IDataBufferVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *GetData)(void *self, void **data, uint32_t *size);   /* 3 */
} IDataBufferVtbl;
typedef struct IDataBuffer { const IDataBufferVtbl *vtbl; } IDataBuffer;

/* "1.11_ISearchPath": an ordered list of file systems built from a
 * ';'-separated path. Created with DACOMDESC {8, "SearchPath"}. */
typedef struct ISearchPathVtbl {
    DACOM_IUNKNOWN_SLOTS
    /* 3: ask each file system in order to create `desc`; first success wins */
    GENRESULT (DACOM_API *CreateInstance)(void *self, DAFILEDESC *desc, void **out);
    GENRESULT (DACOM_API *SetPath)(void *self, const char *path);              /* 4 */
    void      (DACOM_API *GetPath)(void *self, char *buf, uint32_t len);       /* 5 */
} ISearchPathVtbl;
typedef struct ISearchPath { const ISearchPathVtbl *vtbl; } ISearchPath;

#define IID_IFileSystem  "1.11_IFileSystem"
#define IID_IDataBuffer  "1.11_IDataBuffer"
#define IID_ISearchPath  "1.11_ISearchPath"

#endif /* DAFILE_H */
