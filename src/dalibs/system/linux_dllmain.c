/* linux_dllmain.c — attach hook for loading libsystem.so through DACOM's
 * AddLibrary (platform_lib_load calls `dll_process_attach` after dlopen).
 * Replaces DllMain(DLL_PROCESS_ATTACH), orig: 06f117f0. */
#if !defined(_WIN32)
int system_dll_process_attach(void *hinstance);

int dll_process_attach(void *handle)
{
    return system_dll_process_attach(handle);
}
#else
typedef int linux_dllmain_not_built; /* keep the TU non-empty on Windows */
#endif
