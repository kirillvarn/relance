/* win32_dllmain.c — DllMain shim for building system.dll as a drop-in
 * replacement for the original (32-bit Windows only). Not part of the
 * portable build.
 *
 * orig: 06f117f0 (DllMain). On DLL_PROCESS_ATTACH the original stores the
 * HINSTANCE, calls DisableThreadLibraryCalls(hinst) and registers the
 * factory; it returns TRUE for every reason. DisableThreadLibraryCalls is
 * only an optimisation and is omitted to keep windows.h out.
 */
#if defined(_WIN32)
#include <stdint.h>

int system_dll_process_attach(void *hinstance);

#define DLL_PROCESS_ATTACH_ 1u

int __stdcall DllMain(void *hinstance, uint32_t reason, void *reserved)
{
    (void)reserved;
    if (reason == DLL_PROCESS_ATTACH_)
        system_dll_process_attach(hinstance);
    return 1;
}
#else
typedef int win32_dllmain_not_built; /* keep the TU non-empty off Windows */
#endif
