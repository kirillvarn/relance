/* dacom.h — minimal DACOM component-object interfaces, recovered from how
 * system.dll uses them (see notes/system_dll.md). Only observed vtable slots
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

/* ICOManager: the object returned by DACOM_Acquire(). */
typedef struct ICOManagerVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *CreateInstance)(void *self, DACOMDESC *desc, void **out);    /* 3 */
    GENRESULT (DACOM_API *RegisterComponent)(void *self, void *factory,
                                   const char *name, uint32_t priority);     /* 4 */
} ICOManagerVtbl;
typedef struct ICOManager { const ICOManagerVtbl *vtbl; } ICOManager;

/* "1.11_IProfileParser": the dacom.ini reader, obtained by QueryInterface on
 * the ICOManager. */
typedef void *HANDLE_SECTION;
typedef struct IProfileParserVtbl {
    DACOM_IUNKNOWN_SLOTS
    void *slot3;                                                             /* 3 unknown */
    void *slot4;                                                             /* 4 unknown */
    /* 5: open section by name; system.dll passes 3 as the last arg (meaning unknown) */
    HANDLE_SECTION (DACOM_API *CreateSection)(void *self, const char *name, uint32_t flags);
    void *slot6;                                                             /* 6 unknown */
    /* 7: copy line `index` of a section into buf; returns 0 past the end */
    uint32_t (DACOM_API *ReadLine)(void *self, HANDLE_SECTION sec, uint32_t index,
                         char *buf, uint32_t buflen);
} IProfileParserVtbl;
typedef struct IProfileParser { const IProfileParserVtbl *vtbl; } IProfileParser;

/* DACOM.dll exports used by components. FDUMP is a data export holding a
 * function pointer (called as `call [FDUMP]`). */
/* Both are cdecl in the original: DACOM_Acquire takes no args, and FDUMP is
 * varargs (system.dll cleans the stack after `call [FDUMP]`). */
DACOM_IMPORT ICOManager *DACOM_Acquire(void);
DACOM_IMPORT extern int (*FDUMP)(uint32_t flags, const char *fmt, ...);

/* Interface name strings exactly as stored in the binaries. */
#define IID_ISystemContainer            "1.11_ISystemContainer"
#define IID_IAggregateComponent         "1.11_IAggregateComponent"
#define IID_ISystemComponent            "1.11_ISystemComponent"
#define IID_IDAConnectionPointContainer "1.11_IDAConnectionPointContainer"
#define IID_IProfileParser              "1.11_IProfileParser"
#define IID_IComponentFactory           "1.11_IComponentFactory"

#endif /* DACOM_H */
