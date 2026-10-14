
HMODULE FUN_005b7892(void)

{
  char cVar1;
  UINT UVar2;
  DWORD DVar3;
  HMODULE pHVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  LONG LVar8;
  code *pcVar9;
  code *pcVar10;
  CHAR *lpFilename;
  CHAR local_534 [264];
  CHAR local_42c [264];
  char local_324 [256];
  CHAR local_224 [264];
  CHAR local_11c [264];
  code *local_14;
  undefined4 local_10;
  HMODULE local_c;
  undefined4 local_8;
  
  if ((DAT_0067ee0c == (code *)0x0) ||
     (local_c = (HMODULE)(*DAT_0067ee0c)(), local_c == (HMODULE)0x0)) {
    local_c = LoadLibraryA(PTR_s_unicows_dll_00616350);
    if (local_c != (HMODULE)0x0) {
      UVar2 = GetSystemDirectoryA(local_534,0x104);
      if (UVar2 == 0) {
        local_534[0] = '\0';
      }
      UVar2 = GetWindowsDirectoryA(local_42c,0x104);
      if (UVar2 == 0) {
        local_42c[0] = '\0';
      }
      DVar3 = GetModuleFileNameA(local_c,local_224,0x104);
      if (DVar3 == 0) {
        local_224[0] = '\0';
      }
      DVar3 = 0x104;
      lpFilename = local_11c;
      pHVar4 = GetModuleHandleA((LPCSTR)0x0);
      DVar3 = GetModuleFileNameA(pHVar4,lpFilename,DVar3);
      if (DVar3 == 0) {
        local_11c[0] = '\0';
      }
      driveandpathC(local_11c,&local_8,local_324);
      pcVar5 = (char *)&local_8;
      do {
        pcVar6 = pcVar5;
        pcVar5 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar5 = local_324;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      (pcVar5 + (int)(pcVar6 + 0x210))[-(int)&stack0x00000000] = '\0';
      driveandpathC(local_224,&local_8,local_324);
      pcVar5 = (char *)&local_8;
      do {
        pcVar6 = pcVar5;
        pcVar5 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar5 = local_324;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      (pcVar5 + (int)(pcVar6 + 0x108))[-(int)&stack0x00000000] = '\0';
      iVar7 = FUN_005b7700(local_42c,local_224);
      if (((iVar7 == 0) && (iVar7 = FUN_005b7700(local_42c,local_11c), iVar7 != 0)) ||
         ((iVar7 = FUN_005b7700(local_534,local_224), iVar7 == 0 &&
          (iVar7 = FUN_005b7700(local_534,local_11c), iVar7 != 0)))) {
        FreeLibrary(local_c);
        local_c = (HMODULE)0x0;
      }
      if (local_c != (HMODULE)0x0) {
        return local_c;
      }
    }
    pHVar4 = LoadLibraryA("advapi32.dll");
    LVar8 = InterlockedExchange(&DAT_00616374,(LONG)pHVar4);
    if (LVar8 != 0) {
      FreeLibrary(pHVar4);
    }
    if (DAT_00616374 != 0) {
      pcVar9 = (code *)_GetProcAddressInternal_8(DAT_00616374,"RegOpenKeyExA");
      pcVar10 = (code *)_GetProcAddressInternal_8(DAT_00616374,"RegQueryValueExA");
      local_14 = (code *)_GetProcAddressInternal_8(DAT_00616374,"RegCloseKey");
      local_8 = 0;
      if ((((pcVar9 != (code *)0x0) && (pcVar10 != (code *)0x0)) && (local_14 != (code *)0x0)) &&
         (iVar7 = (*pcVar9)(0x80000002,"SOFTWARE\\Microsoft\\Windows\\CurrentVersion",0,1,&local_8),
         iVar7 == 0)) {
        local_10 = 0x104;
        local_11c[0] = '\0';
        iVar7 = (*pcVar10)(local_8,"CommonFilesDir",0,0,local_11c,&local_10);
        if (((iVar7 == 0) &&
            (iVar7 = _StringCatWorkerA_12(local_11c,0x105,"\\Microsoft Shared\\MSLU\\"), -1 < iVar7)
            ) && (iVar7 = _StringCatWorkerA_12(local_11c,0x105,PTR_s_unicows_dll_00616350),
                 -1 < iVar7)) {
          local_c = LoadLibraryA(local_11c);
        }
        (*local_14)(local_8);
      }
    }
  }
  return local_c;
}

