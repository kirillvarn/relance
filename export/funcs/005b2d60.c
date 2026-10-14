
bool FUN_005b2d60(void)

{
  HMODULE hLibModule;
  int iVar1;
  code *pcVar2;
  
  FUN_005b7e90();
  hLibModule = LoadLibraryA("..\\EBUEula.dll");
  if (hLibModule == (HMODULE)0x0) {
    hLibModule = LoadLibraryA("EBUEula.dll");
    if (hLibModule == (HMODULE)0x0) {
      iVar1 = FUN_004347e0();
      if (iVar1 == 0) {
        wcscpy((wchar_t *)&stack0x00000000,L"Freelancer Fatal Error");
      }
      iVar1 = FUN_004347e0();
      if (iVar1 == 0) {
        wcscpy((wchar_t *)&stack0x00000200,
               L"Freelancer has encountered a fatal error and will now terminate.\n");
      }
      FUN_004247c0();
      do {
        iVar1 = ShowCursor(1);
      } while (iVar1 < 0);
      (*(code *)PTR_FUN_00616430)();
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  pcVar2 = (code *)(*(code *)PTR_FUN_00616418)();
  if (pcVar2 == (code *)0x0) {
    FreeLibrary(hLibModule);
    iVar1 = FUN_004347e0();
    if (iVar1 == 0) {
      wcscpy((wchar_t *)&stack0xfffffff8,L"Freelancer Fatal Error");
    }
    iVar1 = FUN_004347e0();
    if (iVar1 == 0) {
      wcscpy((wchar_t *)&stack0x000001f8,
             L"Freelancer has encountered a fatal error and will now terminate.\n");
    }
    FUN_004247c0();
    do {
      iVar1 = ShowCursor(1);
    } while (iVar1 < 0);
    (*(code *)PTR_FUN_00616430)();
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  GetFileAttributesA(s____Warranty_rtf_00615bbc);
  iVar1 = (*pcVar2)();
  FreeLibrary(hLibModule);
  return iVar1 != 0;
}

