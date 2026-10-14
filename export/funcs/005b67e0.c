
undefined4 FUN_005b67e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined *lpSubKey;
  HKEY pHVar2;
  LSTATUS LVar3;
  int iVar4;
  code *pcVar5;
  int extraout_ECX;
  uint uVar6;
  code *pcVar7;
  undefined1 *unaff_retaddr;
  void *in_stack_00002894;
  LPCSTR pCVar8;
  char *pcVar9;
  DWORD DVar10;
  DWORD DVar11;
  DWORD *lpData;
  BYTE *lpData_00;
  DWORD cbData;
  HKEY local_c;
  undefined1 *local_8;
  DWORD local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005c5a6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  param_3 = 0;
  FUN_005687e0();
  lpSubKey = PTR_s_Software_Microsoft_Microsoft_Gam_006143b0;
  *(undefined4 *)(&stack0x00000010 + param_3 * 4) = 0x80000001;
  uVar6 = param_3 + 1;
  param_3 = uVar6;
  pHVar2 = (HKEY)FUN_005b6630();
  pcVar7 = RegCreateKeyExA_exref;
  pcVar5 = RegCloseKey_exref;
  if (((pHVar2 != (HKEY)0x0) && (uVar6 < 0x20)) &&
     (LVar3 = RegCreateKeyExA(pHVar2,lpSubKey,0,"",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,
                              &local_4), uVar6 = param_3, pcVar5 = RegCloseKey_exref, LVar3 == 0)) {
    *(HKEY *)(&stack0x00000010 + param_3 * 4) = local_c;
    uVar6 = param_3 + 1;
    param_3 = uVar6;
    if (((local_c != (HKEY)0x0) &&
        (pHVar2 = (HKEY)FUN_005b6630(), pcVar5 = RegCloseKey_exref, pHVar2 != (HKEY)0x0)) &&
       ((uVar6 < 0x20 &&
        (LVar3 = RegCreateKeyExA(pHVar2,"MP\\Logins",0,"",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                                 &local_c,&local_4), uVar6 = param_3, pcVar5 = RegCloseKey_exref,
        LVar3 == 0)))) {
      *(HKEY *)(&stack0x00000010 + param_3 * 4) = local_c;
      param_3 = param_3 + 1;
      uVar6 = param_3;
      if (local_c != (HKEY)0x0) {
        local_c = (HKEY)0x1;
        FUN_0053e430();
        local_8 = unaff_retaddr;
        while (local_8 != *(undefined1 **)(extraout_ECX + 8)) {
          FUN_00402180();
          iVar4 = FUN_005b6630();
          if (((iVar4 != 0) && (param_3 < 0x20)) && (iVar4 = (*pcVar7)(), iVar4 == 0)) {
            *(undefined1 **)(&stack0x00000010 + param_3 * 4) = unaff_retaddr;
            param_3 = param_3 + 1;
            if (unaff_retaddr != (undefined1 *)0x0) {
              local_4 = *(DWORD *)(local_8 + 0xc);
              cbData = 4;
              lpData = &local_4;
              DVar11 = 4;
              DVar10 = 0;
              pCVar8 = "id";
              pHVar2 = (HKEY)FUN_005b6630();
              RegSetValueExA(pHVar2,pCVar8,DVar10,DVar11,(BYTE *)lpData,cbData);
              pcVar5 = *(code **)(local_8 + 0x14);
              if (*(code **)(local_8 + 0x14) == (code *)0x0) {
                pcVar5 = _C_exref;
              }
              WideToHex((ushort *)pcVar5,&stack0x00000494);
              FUN_005b6b90();
              pcVar5 = *(code **)(local_8 + 0x24);
              if (*(code **)(local_8 + 0x24) == (code *)0x0) {
                pcVar5 = _C_exref;
              }
              WideToHex((ushort *)pcVar5,&stack0x00000094);
              uVar6 = 0xffffffff;
              pcVar9 = &stack0x00000094;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              lpData_00 = &stack0x00000094;
              DVar11 = 1;
              DVar10 = 0;
              pcVar9 = "password";
              pHVar2 = (HKEY)FUN_005b6630();
              RegSetValueExA(pHVar2,pcVar9,DVar10,DVar11,lpData_00,uVar6);
              local_4 = *(DWORD *)(local_8 + 0x30);
              if ((int)param_3 < 1) {
                pHVar2 = (HKEY)0x0;
              }
              else {
                pHVar2 = (HKEY)(&param_3)[param_3];
              }
              RegSetValueExA(pHVar2,"time",0,4,(BYTE *)&local_4,4);
              if (0 < (int)param_3) {
                param_3 = param_3 - 1;
                RegCloseKey(*(HKEY *)(&stack0x00000010 + param_3 * 4));
              }
            }
          }
          FUN_00531930();
          local_c = (HKEY)((int)&local_c->unused + 1);
          pcVar7 = RegCreateKeyExA_exref;
        }
        while (pCVar8 = (LPCSTR)FUN_00402180(), uVar6 = param_3, pcVar5 = RegCloseKey_exref,
              0 < (int)param_3) {
          if (((HKEY)(&param_3)[param_3] == (HKEY)0x0) ||
             (LVar3 = RegDeleteKeyA((HKEY)(&param_3)[param_3],pCVar8), LVar3 != 0)) {
            pcVar5 = RegCloseKey_exref;
            uVar6 = param_3;
            if (0 < (int)param_3) {
              param_3 = param_3 - 1;
              RegCloseKey(*(HKEY *)(&stack0x00000010 + param_3 * 4));
              uVar6 = param_3;
              goto joined_r0x005b6b2c;
            }
            break;
          }
          local_c = (HKEY)((int)&local_c->unused + 1);
        }
        goto joined_r0x005b6b59;
      }
    }
  }
joined_r0x005b6b2c:
  while (0 < (int)uVar6) {
    FUN_005687c0();
    (*pcVar5)();
    uVar6 = param_3;
  }
joined_r0x005b6b59:
  while (0 < (int)uVar6) {
    FUN_005687c0();
    (*pcVar5)();
    uVar6 = param_3;
  }
  ExceptionList = in_stack_00002894;
  return 1;
}

