/* rf_main.c — readfile.dll module entry. Port of DllMain 06b76220
 * (notes/readfile_dll.md). */
#include <stddef.h>

#include "rf_internal.h"

struct DosFs *rf_root_dos;      /* .data 06b7a224 */
ICOManager   *rf_com;           /* .data 06b7a220 */

/* DLL_PROCESS_ATTACH: register the four components with DACOM. */
int readfile_dll_process_attach(void *hinstance)
{
    IComponentFactory *f;
    IFileSystem *utf;
    (void)hinstance;

    rf_root_dos = dos_fs_new();
    if (rf_root_dos == NULL)
        return 1;
    rf_com = DACOM_Acquire();
    if (rf_com == NULL)
        return 1;
    /* The root DOS file system is its own factory. */
    rf_com->vtbl->RegisterComponent(rf_com, rf_root_dos, RF_FACTORY_NAME, 0x40000000u);
    dos_fs_iface(rf_root_dos)->vtbl->Release(rf_root_dos);

    utf = utf_fs_new();
    if (utf != NULL) {
        rf_com->vtbl->RegisterComponent(rf_com, utf, RF_FACTORY_NAME, 0x80000000u);
        utf->vtbl->Release(utf);
    }
    f = mem_fs_factory_new();
    if (f != NULL) {
        rf_com->vtbl->RegisterComponent(rf_com, f, RF_FACTORY_NAME, 0x80000000u);
        f->vtbl->Release(f);
    }
    f = search_path_factory_new();
    if (f != NULL) {
        rf_com->vtbl->RegisterComponent(rf_com, f, "SearchPath", 0x80000000u);
        f->vtbl->Release(f);
    }
    return 1;
}

/* DLL_PROCESS_DETACH. */
void readfile_dll_process_detach(void)
{
    if (rf_com != NULL)
        rf_com->vtbl->Release(rf_com);
}

#if !defined(_WIN32)
/* Called by platform_lib_load after dlopen (replaces DllMain). */
int dll_process_attach(void *handle)
{
    return readfile_dll_process_attach(handle);
}
#endif
