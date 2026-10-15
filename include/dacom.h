/* dacom.h — DACOM component-object interfaces and DACOM.dll exports,
 * recovered from dacom.dll and its users (notes/dacom_dll.md,
 * notes/system_dll.md). Only observed vtable slots
 * are named; unknown slots are placeholders so indices stay correct.
 * Slot names are guesses unless a string in the binary says otherwise.
 *
 * DACOM objects are COM-like: every interface starts with
 * QueryInterface/AddRef/Release, and interfaces are identified by versioned
 * strings ("1.11_IFoo") instead of GUIDs.
 *
 * All methods take `void *self`: the original shares one vtable between
 * several interfaces of an object, so a typed self would need UB casts.
 */
#ifndef DACOM_H
#define DACOM_H

#include <stdint.h>

/* Calling convention of every DACOM interface method. The original vtable
 * methods are __stdcall with `this` on the stack (callee pops: `ret 0xc` in
 * system.dll). That only matters when linking against the original binaries
 * (32-bit Windows drop-in testing); elsewhere it expands to nothing. */
#if defined(_WIN32) && !defined(_WIN64)
#define DACOM_API __stdcall
#else
#define DACOM_API
#endif

/* DACOM.dll imports: dllimport only for the Win32 drop-in build. FDUMP is a
 * data export, so without dllimport the code would call the IAT slot itself. */
#if defined(_WIN32) && defined(DACOM_LINK_ORIGINAL)
#define DACOM_IMPORT __declspec(dllimport)
#else
#define DACOM_IMPORT
#endif

/* GENRESULT codes seen in system.dll. Names are guesses; values are exact. */
typedef int32_t GENRESULT;
#define GR_OK                     0
#define GR_GENERIC               (-1)  /* 6f110e0 self-aggregation reject */
#define GR_INVALID_PARMS         (-2)  /* 6f114b0 NULL desc */
#define GR_INTERFACE_UNSUPPORTED (-3)  /* 6f11000 / 6f11830 QI miss */
#define GR_OUT_OF_MEMORY         (-4)  /* 6f114b0 / 6f118a0 alloc fail */

/* Slots 0..2 of every DACOM vtable. */
#define DACOM_IUNKNOWN_SLOTS                                               \
    GENRESULT (DACOM_API *QueryInterface)(void *self, const char *iface, void **out); \
    uint32_t  (DACOM_API *AddRef)(void *self);                                        \
    uint32_t  (DACOM_API *Release)(void *self);

typedef struct IDAComponentVtbl { DACOM_IUNKNOWN_SLOTS } IDAComponentVtbl;
typedef struct IDAComponent { const IDAComponentVtbl *vtbl; } IDAComponent;

/* "1.11_IAggregateComponent": slot 3 is called by the container after
 * loading; non-zero result makes the container drop that child (6f11610). */
typedef struct IAggregateComponentVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *Initialize)(void *self);                 /* 3 */
} IAggregateComponentVtbl;
typedef struct IAggregateComponent { const IAggregateComponentVtbl *vtbl; } IAggregateComponent;

/* "1.11_ISystemComponent": slot 4 is broadcast to every child (6f115e0). */
typedef struct ISystemComponentVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *Initialize)(void *self);                 /* 3 */
    void      (DACOM_API *Update)(void *self);                     /* 4 */
} ISystemComponentVtbl;
typedef struct ISystemComponent { const ISystemComponentVtbl *vtbl; } ISystemComponent;

/* "1.11_IDAConnectionPointContainer": slots 3/4 take two pointer-sized args
 * whose types are unknown; the container forwards them to children until one
 * returns GR_OK. Guess: slot 3 = FindConnectionPoint(name, out). */
typedef struct IDAConnectionPointContainerVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *Slot3)(void *self, void *a, void *b);    /* 3 */
    GENRESULT (DACOM_API *Slot4)(void *self, void *a, void *b);    /* 4 */
} IDAConnectionPointContainerVtbl;
typedef struct IDAConnectionPointContainer {
    const IDAConnectionPointContainerVtbl *vtbl;
} IDAConnectionPointContainer;

/* Component creation descriptor, 0x14 bytes in the original; the size field
 * must be 0x14 (checked by 6f118a0). Layout from 6f111e0/6f110e0/6f118a0. */
typedef struct DACOMDESC {
    uint32_t       size;       /* +0x00 = 0x14 */
    const char    *component;  /* +0x04 class name, e.g. "SystemContainer" */
    IDAComponent  *outer;      /* +0x08 aggregating outer object or NULL */
    IDAComponent **inner_out;  /* +0x0c receives inner unknown when aggregated */
    const char    *args;       /* +0x10 text after '=' in a [System] line, or NULL */
} DACOMDESC;
#define DACOMDESC_ORIG_SIZE 0x14u

/* "1.11_IComponentFactory". */
typedef struct IComponentFactoryVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *CreateInstance)(void *self, DACOMDESC *desc, void **out); /* 3 */
} IComponentFactoryVtbl;
typedef struct IComponentFactory { const IComponentFactoryVtbl *vtbl; } IComponentFactory;

/* ICOManager: the object returned by DACOM_Acquire() (dacom.dll vtbl
 * 065b70cc). Names of slots 5, 6, 8 and 9 are guesses; the others come from
 * FDUMP strings in dacom.dll. See notes/dacom_dll.md. */
typedef int32_t (*DACOM_ENUM_COMPONENTS_CB)(IComponentFactory *factory, const char *name,
                                            uint32_t priority, void *ctx);   /* cdecl */
typedef struct ICOManagerVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *CreateInstance)(void *self, DACOMDESC *desc, void **out);    /* 3 */
    GENRESULT (DACOM_API *RegisterComponent)(void *self, void *factory,
                                   const char *name, uint32_t priority);     /* 4 */
    GENRESULT (DACOM_API *UnregisterComponent)(void *self, void *factory,
                                   const char *name);                        /* 5 */
    GENRESULT (DACOM_API *EnumerateComponents)(void *self, const char *name,
                                   DACOM_ENUM_COMPONENTS_CB cb, void *ctx);  /* 6 */
    GENRESULT (DACOM_API *AddLibrary)(void *self, const char *dll);          /* 7 */
    GENRESULT (DACOM_API *RemoveLibrary)(void *self, const char *dll);       /* 8 */
    GENRESULT (DACOM_API *ShutDown)(void *self);                             /* 9 */
    /* 10: flags&2 → `arg` is the ini text itself; else a file name, and
     * flags&1 is passed on to IProfileParser::Initialize (which rejects it). */
    GENRESULT (DACOM_API *SetINIConfig)(void *self, const char *arg, uint32_t flags);
} ICOManagerVtbl;
typedef struct ICOManager { const ICOManagerVtbl *vtbl; } ICOManager;

/* "1.11_IProfileParser": the dacom.ini reader, obtained by QueryInterface on
 * the ICOManager (dacom.dll vtbl 065b7144). A section handle is opaque. */
typedef void *HANDLE_SECTION;
typedef struct IProfileParser IProfileParser;
/* stdcall callback; return 0 to stop the enumeration. */
typedef int32_t (DACOM_API *DACOM_ENUM_SECTIONS_FN)(IProfileParser *parser, const char *name,
                                                     void *ctx);
typedef struct IProfileParserVtbl {
    DACOM_IUNKNOWN_SLOTS
    /* 3: parse `file` (NULL clears); flags&1 → -1. 0 on success, -1 on failure. */
    GENRESULT (DACOM_API *Initialize)(void *self, const char *file, uint32_t flags);
    /* 4: 1 if every callback returned non-zero, else 0. */
    int32_t (DACOM_API *EnumerateSections)(void *self, DACOM_ENUM_SECTIONS_FN fn, void *ctx);
    /* 5: open section by name; mode must be 3 (anything else gives NULL). */
    HANDLE_SECTION (DACOM_API *CreateSection)(void *self, const char *name, uint32_t flags);
    int32_t (DACOM_API *CloseSection)(void *self, HANDLE_SECTION sec);      /* 6: returns 1 */
    /* 7: copy 0-based line `index` ("key" or "key = value") into buf; returns
     * strlen(buf), 0 past the end. buf NULL: returns the line length. */
    uint32_t (DACOM_API *ReadLine)(void *self, HANDLE_SECTION sec, uint32_t index,
                         char *buf, uint32_t buflen);
    /* 8: copy the value of the first `key` (case-insensitive); returns
     * strlen(buf), 0 if missing. buf NULL: returns strlen(value). */
    uint32_t (DACOM_API *ReadKey)(void *self, HANDLE_SECTION sec, const char *key,
                        char *buf, uint32_t buflen);
} IProfileParserVtbl;
struct IProfileParser { const IProfileParserVtbl *vtbl; };

/* Callback object for IProfileParser2 enumerations: slot 0 is called with
 * (cb, parser2, section-or-key name, value or NULL, ctx); 0 stops. */
typedef struct IProfileParser2 IProfileParser2;
typedef struct IProfileCallback IProfileCallback;
typedef struct IProfileCallbackVtbl {
    int32_t (DACOM_API *Callback)(IProfileCallback *self, IProfileParser2 *parser,
                                  const char *name, const char *value, void *ctx);
} IProfileCallbackVtbl;
struct IProfileCallback { const IProfileCallbackVtbl *vtbl; };

/* "1.11_IProfileParser2" (dacom.dll vtbl 065b7118). Slot names guessed. */
typedef struct IProfileParser2Vtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *Initialize)(void *self, const char *file, uint32_t flags);        /* 3 */
    GENRESULT (DACOM_API *InitializeFromMemory)(void *self, const void *data, uint32_t size); /* 4 */
    HANDLE_SECTION (DACOM_API *CreateSection)(void *self, const char *name, uint32_t flags);  /* 5 */
    int32_t (DACOM_API *CloseSection)(void *self, HANDLE_SECTION sec);                        /* 6 */
    uint32_t (DACOM_API *ReadLine)(void *self, HANDLE_SECTION sec, uint32_t index,
                                   char *buf, uint32_t buflen);                               /* 7 */
    uint32_t (DACOM_API *ReadKey)(void *self, HANDLE_SECTION sec, const char *key,
                                  char *buf, uint32_t buflen);                                /* 8 */
    int32_t (DACOM_API *EnumerateSections)(void *self, IProfileCallback *cb, void *ctx);     /* 9 */
    int32_t (DACOM_API *EnumerateKeys)(void *self, IProfileCallback *cb,
                                       HANDLE_SECTION sec, void *ctx);                       /* 10 */
} IProfileParser2Vtbl;
struct IProfileParser2 { const IProfileParser2Vtbl *vtbl; };

/* ---- DACOM.dll exports ----
 * All cdecl. FDUMP is a data export holding a varargs function pointer
 * (called as `call [FDUMP]`). C++ exports get C names:
 *   DACOM_CRC::GetCRC32(const char*)                 -> DACOM_CRC_GetCRC32
 *   DACOM_CRC::GetCRC32(const char*, const char*)    -> DACOM_CRC_GetCRC32Range
 *   DACOM_CRC::GetContinuedCRC32(ulong, const char*) -> DACOM_CRC_GetContinuedCRC32
 *   DACOM_CRC::GetContinuedCRC32(ulong, char)        -> DACOM_CRC_GetContinuedCRC32Char
 *   DACOM_CRC::CompareStringsI                       -> DACOM_CRC_CompareStringsI
 *   LogStream::X                                     -> LogStream_X
 *   stricmp                                          -> DACOM_stricmp
 */
typedef int (*DACOM_DUMP_FN)(uint32_t flags, const char *fmt, ...);
DACOM_IMPORT ICOManager *DACOM_Acquire(void);
DACOM_IMPORT extern DACOM_DUMP_FN FDUMP;
DACOM_IMPORT int32_t DACOM_GetDllVersion(const char *dll, uint32_t *major,
                                         uint32_t *minor, uint32_t *build);
DACOM_IMPORT int32_t DACOM_GetVersion(uint32_t *major, uint32_t *minor, uint32_t *build);
DACOM_IMPORT int DACOM_stricmp(const char *a, const char *b);

DACOM_IMPORT uint32_t DACOM_CRC_GetCRC32(const char *s);
DACOM_IMPORT uint32_t DACOM_CRC_GetCRC32Range(const char *begin, const char *end);
DACOM_IMPORT uint32_t DACOM_CRC_GetContinuedCRC32(uint32_t crc, const char *s);
DACOM_IMPORT uint32_t DACOM_CRC_GetContinuedCRC32Char(uint32_t crc, char c);
DACOM_IMPORT int DACOM_CRC_CompareStringsI(const char *a, const char *b);

DACOM_IMPORT int  LogStream_Startup(const char *name);   /* C++ bool; always false */
DACOM_IMPORT void LogStream_FlushToDisk(void);
DACOM_IMPORT void LogStream_LogEvent(const char *name, float value, uint32_t id);
DACOM_IMPORT void LogStream_LogNamedEvent(const char *name, const char *text, uint32_t id);
DACOM_IMPORT void LogStream_Update(float dt);

/* FDUMP flag values seen in the binaries (severity in the low 4 bits). */
#define DACOM_DUMP_ERROR   0x100001u
#define DACOM_DUMP_WARNING 0x100002u
#define DACOM_DUMP_NOTICE  0x100003u

/* Interface name strings exactly as stored in the binaries. */
#define IID_ISystemContainer            "1.11_ISystemContainer"
#define IID_IAggregateComponent         "1.11_IAggregateComponent"
#define IID_ISystemComponent            "1.11_ISystemComponent"
#define IID_IDAConnectionPointContainer "1.11_IDAConnectionPointContainer"
#define IID_IProfileParser              "1.11_IProfileParser"
#define IID_IProfileParser2             "1.11_IProfileParser2"
#define IID_ICOManager                  "1.11_ICOManager"
#define IID_IDAComponent                "1.11_IDAComponent"
#define IID_IComponentFactory           "1.11_IComponentFactory"

#endif /* DACOM_H */
