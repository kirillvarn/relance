
void FUN_005b7b3d(byte *param_1,undefined4 param_2,LONG *param_3,int param_4,LONG param_5)

{
  LONG *Target;
  byte bVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  byte *pbVar5;
  int iVar6;
  HMODULE pHVar7;
  LONG LVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (DAT_0067ed64 == 0) {
    DAT_0061635c = GetModuleHandleA(PTR_s_kernel32_dll_00616358);
    pcVar2 = (code *)_GetProcAddressInternal_8(DAT_0061635c,"GetFileAttributesW");
    if (((pcVar2 == (code *)0x0) || (iVar3 = (*pcVar2)(L"???.???"), iVar3 != -1)) ||
       (DVar4 = GetLastError(), DVar4 != 0x7b)) {
      DAT_0067ed64 = 2;
      goto LAB_005b7b97;
    }
    DAT_0067ed64 = 1;
LAB_005b7ba6:
    iVar3 = 1;
    pbVar9 = PTR_s_kernel32_dll_00616358;
    while (pbVar5 = param_1, pbVar9 != (byte *)0x0) {
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_005b7bd4:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_005b7bd9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_005b7bd4;
        pbVar9 = pbVar9 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_005b7bd9:
      if (iVar6 == 0) {
        Target = &DAT_00616354 + iVar3 * 2;
        if (*Target == 0) {
          pHVar7 = LoadLibraryA((LPCSTR)param_1);
          if ((pHVar7 == (HMODULE)0x0) && (iVar3 == 0xd)) {
            pHVar7 = LoadLibraryA("security.dll");
          }
          LVar8 = InterlockedExchange(Target,(LONG)pHVar7);
          if (LVar8 != 0) {
            FreeLibrary(pHVar7);
          }
        }
        LVar8 = *Target;
        goto LAB_005b7c8c;
      }
      iVar6 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      pbVar9 = (&PTR_s_kernel32_dll_00616358)[iVar6];
    }
  }
  else {
LAB_005b7b97:
    if (DAT_0067ed64 == 1) goto LAB_005b7ba6;
    if (param_4 != 0) goto LAB_005b7bef;
    LVar8 = DAT_00616354;
    if (DAT_00616354 == 0) {
      pHVar7 = (HMODULE)FUN_005b7892();
      if ((pHVar7 != (HMODULE)0x0) &&
         (LVar8 = InterlockedExchange(&DAT_00616354,(LONG)pHVar7), LVar8 != 0)) {
        FreeLibrary(pHVar7);
      }
      LVar8 = DAT_00616354;
      if (DAT_00616354 != 0) goto LAB_005b7c8c;
    }
    else {
LAB_005b7c8c:
      param_4 = _GetProcAddressInternal_8(LVar8,param_2);
      if (param_4 != 0) goto LAB_005b7bef;
    }
  }
  param_4 = param_5;
LAB_005b7bef:
  InterlockedExchange(param_3,param_4);
  return;
}

