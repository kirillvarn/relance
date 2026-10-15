/* test_dacom.c — end-to-end test of the dacom.dll port (with the system.dll
 * port loaded through AddLibrary).
 *
 * usage: test_dacom <game/EXE dir> <dir containing libsystem.so>
 *
 * Expected CRC values were produced by running the original dacom.dll code
 * (065b4380 / 065b43a0 / 065b43b0) under an x86 emulator. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dacom.h"

static int g_fail;

#define CHECK(cond) do { \
    if (!(cond)) { fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #cond); g_fail = 1; } \
} while (0)

/* ISystemContainer, as in src/dalibs/system/system_container.c. */
typedef struct ISystemContainerVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *Initialize)(void *self);
    void      (DACOM_API *Update)(void *self);
    GENRESULT (DACOM_API *LoadSystemComponents)(void *self);
    GENRESULT (DACOM_API *RemoveAll)(void *self);
    GENRESULT (DACOM_API *AddComponent)(void *self, DACOMDESC *desc);
} ISystemContainerVtbl;
typedef struct ISystemContainer { const ISystemContainerVtbl *vtbl; } ISystemContainer;

static int g_notices;
static int count_dump(uint32_t flags, const char *fmt, ...)
{
    (void)fmt;
    if ((flags & 0xf) == 3)
        g_notices++;
    return 0;
}

static int32_t count_cb(IComponentFactory *f, const char *name, uint32_t prio, void *ctx)
{
    (void)f;
    (void)name;
    (void)prio;
    ++*(int *)ctx;
    return 1;
}

static void test_crc(void)
{
    CHECK(DACOM_CRC_GetCRC32("ProfileParser") == 0xff950d1du);
    CHECK(DACOM_CRC_GetCRC32("profileparser") == 0xff950d1du);
    CHECK(DACOM_CRC_GetCRC32("SystemContainer") == 0x0a0d866eu);
    CHECK(DACOM_CRC_GetCRC32("\xe9t\xe9") == 0x1648589du);
    CHECK(DACOM_CRC_GetCRC32("") == 0);
    CHECK(DACOM_CRC_GetCRC32(NULL) == 0);
    CHECK(DACOM_CRC_GetContinuedCRC32(0x12345678u, "Abc") == 0x0e97325fu);
    CHECK(DACOM_CRC_GetContinuedCRC32Char(0x12345678u, (char)-0x17) == 0xeeabeb39u);
    CHECK(DACOM_stricmp("abc", "ABD") == -1);
    CHECK(DACOM_stricmp("ABC", "abc") == 0);
    CHECK(DACOM_stricmp("b", "A") == 1);
}

/* Parse the shipped dacom.ini and check what the engine will see. */
static void test_real_ini(ICOManager *com, const char *exe_dir)
{
    IProfileParser *pp = NULL;
    HANDLE_SECTION sec;
    char path[1024], buf[256];
    static const char *libs[] = {
        "ReadFile.dll", "x86math.dll", "EngBase.dll", "system.dll", "RP8.dll",
        "SoundStreamer.dll", "SoundManager.dll", "Deformable2.dll", "Thorn.dll",
        "Shading.dll", "RendComp.dll", "alchemy.dll", "ximage.dll", ".\\flmaterials.dll",
    };
    uint32_t i;

    CHECK(com->vtbl->QueryInterface(com, IID_IProfileParser, (void **)&pp) == GR_OK);
    snprintf(path, sizeof(path), "%s/dacom.ini", exe_dir);
    /* @include FL_Dev.ini / FL_DevOnlyLibs.ini do not exist: ignored. */
    CHECK(pp->vtbl->Initialize(pp, path, 0) == GR_OK);
    CHECK(pp->vtbl->Initialize(pp, path, 1) == -1);

    sec = pp->vtbl->CreateSection(pp, "libraries", 3);
    CHECK(sec != NULL);
    CHECK(pp->vtbl->CreateSection(pp, "Libraries", 2) == NULL);
    for (i = 0; i < sizeof(libs) / sizeof(libs[0]); i++) {
        CHECK(pp->vtbl->ReadLine(pp, sec, i, buf, sizeof(buf)) == strlen(libs[i]));
        CHECK(strcmp(buf, libs[i]) == 0);
    }
    CHECK(pp->vtbl->ReadLine(pp, sec, i, buf, sizeof(buf)) == 0);

    sec = pp->vtbl->CreateSection(pp, "DACOM", 3);
    CHECK(pp->vtbl->ReadKey(pp, sec, "dllpath", buf, sizeof(buf)) == 2);
    CHECK(strcmp(buf, ".\\") == 0);
    CHECK(pp->vtbl->ReadKey(pp, sec, "IgnoreDACOMEnv", NULL, 0) == 4);
    CHECK(pp->vtbl->ReadLine(pp, sec, 0, buf, sizeof(buf)) == strlen("IgnoreDACOMEnv = true"));
    CHECK(pp->vtbl->ReadLine(pp, sec, 0, NULL, 0) == strlen("IgnoreDACOMEnv = true"));

    sec = pp->vtbl->CreateSection(pp, "System", 3);
    CHECK(pp->vtbl->ReadLine(pp, sec, 1, buf, sizeof(buf)) == strlen("DirectX8"));
    pp->vtbl->Release(pp);
}

static void test_manager(ICOManager *com, const char *so_dir)
{
    char ini[2048];
    DACOMDESC desc = { DACOMDESC_ORIG_SIZE, "SystemContainer", NULL, NULL, NULL };
    ISystemContainer *sc = NULL;
    IComponentFactory *dummy;
    int n = 0, before;

    /* The manager is a static object; refcounting is a no-op. */
    CHECK(com->vtbl->AddRef(com) == 1);
    CHECK(com->vtbl->Release(com) == 1);
    CHECK(DACOM_Acquire() == com);

    snprintf(ini, sizeof(ini),
             "[DACOM]\n"
             "IgnoreDACOMEnv = true\n"
             "DllPath = %s\n"
             "[Libraries]\n"
             "system.dll  ; the ported System component\n"
             "missing.dll\n"
             "[System]\n"
             "ProfileParser\n"
             "NoSuchComponent = some args\n",
             so_dir);
    FDUMP = count_dump;
    CHECK(com->vtbl->SetINIConfig(com, ini, 3) == GR_INVALID_PARMS);
    CHECK(com->vtbl->SetINIConfig(com, ini, 2) == GR_OK);
    CHECK(g_notices >= 3);  /* dllpath, "Loading DLL's", AddLibrary 'system' */

    CHECK(com->vtbl->EnumerateComponents(com, NULL, NULL, NULL) == GR_INVALID_PARMS);
    CHECK(com->vtbl->EnumerateComponents(com, NULL, count_cb, &n) == GR_OK);
    CHECK(n == 3);          /* ProfileParser, ProfileParser2, SystemContainer */
    n = 0;
    CHECK(com->vtbl->EnumerateComponents(com, "nothing", count_cb, &n) == GR_OK && n == 0);

    /* SystemContainer (from libsystem.so) reads [System] through the
     * manager's parser and creates its children aggregated. */
    CHECK(com->vtbl->CreateInstance(com, &desc, (void **)&sc) == GR_OK);
    CHECK(sc != NULL);
    if (sc != NULL) {
        CHECK(sc->vtbl->LoadSystemComponents(sc) == GR_OK);
        CHECK(sc->vtbl->Initialize(sc) == GR_OK);
        sc->vtbl->Update(sc);
        sc->vtbl->Release(sc);
    }

    /* Registration order and removal. */
    dummy = NULL;
    desc.component = "COManager";
    CHECK(com->vtbl->CreateInstance(com, &desc, (void **)&dummy) == GR_OK);
    CHECK((void *)dummy == (void *)com);
    desc.component = "NoSuchComponent";
    CHECK(com->vtbl->CreateInstance(com, &desc, (void **)&dummy) == GR_INTERFACE_UNSUPPORTED);

    CHECK(com->vtbl->RemoveLibrary(com, "nothing.dll") == GR_GENERIC);
    CHECK(com->vtbl->RemoveLibrary(com, "C:\\x\\SYSTEM.DLL") == GR_OK);
    desc.component = "SystemContainer";
    CHECK(com->vtbl->CreateInstance(com, &desc, (void **)&sc) == GR_INTERFACE_UNSUPPORTED);
    n = 0;
    com->vtbl->EnumerateComponents(com, NULL, count_cb, &n);
    CHECK(n == 2);

    before = n;
    CHECK(com->vtbl->ShutDown(com) == GR_OK);
    n = 0;
    com->vtbl->EnumerateComponents(com, NULL, count_cb, &n);
    CHECK(n == 0 && before == 2);
}

int main(int argc, char **argv)
{
    ICOManager *com;
    if (argc != 3) {
        fprintf(stderr, "usage: %s <game/EXE dir> <dir with libsystem.so>\n", argv[0]);
        return 2;
    }
    test_crc();
    com = DACOM_Acquire();
    test_real_ini(com, argv[1]);
    test_manager(com, argv[2]);
    puts(g_fail ? "test_dacom: FAILED" : "test_dacom: OK");
    return g_fail;
}
