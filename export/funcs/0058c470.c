
undefined4 __thiscall FUN_0058c470(int param_1,int *param_2)

{
  undefined4 uVar1;
  LSTATUS LVar2;
  uchar *puVar3;
  int iVar4;
  HKEY pHVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  DWORD *pDVar10;
  undefined4 *puVar11;
  undefined1 *local_14;
  DWORD local_10;
  int local_c;
  DWORD local_8;
  
  piVar8 = param_2;
  local_8 = 0;
  if (*param_2 < 1) {
    pHVar5 = (HKEY)0x0;
  }
  else {
    pHVar5 = (HKEY)param_2[*param_2];
  }
  local_c = param_1;
  LVar2 = RegQueryValueExA(pHVar5,"Columns",(LPDWORD)0x0,&local_10,(LPBYTE)0x0,&local_8);
  if (LVar2 == 0) {
    uVar9 = local_8;
    if (local_10 != 3) {
      uVar9 = 0xffffffff;
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
  FUN_005b7e90();
  if (*piVar8 < 1) {
    pHVar5 = (HKEY)0x0;
  }
  else {
    pHVar5 = (HKEY)piVar8[*piVar8];
  }
  local_14 = &stack0xffffffe0;
  local_8 = uVar9;
  LVar2 = RegQueryValueExA(pHVar5,"Columns",(LPDWORD)0x0,&local_10,&stack0xffffffe0,&local_8);
  if (LVar2 == 0) {
    uVar7 = local_8;
    if (local_10 != 3) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (uVar7 == uVar9) {
    uVar9 = uVar9 >> 2;
    puVar3 = (uchar *)FUN_00527820(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18),
                                   *(undefined4 *)(param_1 + 0x14));
    IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x10),puVar3,*(ulong *)(param_1 + 0x18));
    *(uchar **)(param_1 + 0x18) = puVar3;
    local_10 = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    }
    if (uVar7 < uVar9) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      pDVar10 = &local_10;
      iVar4 = FUN_005ad970(pDVar10);
      FUN_00537260(uVar1,uVar9 - iVar4,pDVar10);
    }
    else {
      uVar7 = FUN_005ad970();
      if (uVar9 < uVar7) {
        FUN_005995c0(*(int *)(param_1 + 0x14) + uVar9 * 4,*(undefined4 *)(param_1 + 0x18));
      }
    }
    iVar4 = 0;
    piVar8 = param_2;
    if (uVar9 != 0) {
      do {
        *(undefined4 *)(*(int *)(local_c + 0x14) + iVar4 * 4) =
             *(undefined4 *)(local_14 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar9);
    }
  }
  param_2 = (int *)0x0;
  if (*piVar8 < 1) {
    pHVar5 = (HKEY)0x0;
  }
  else {
    pHVar5 = (HKEY)piVar8[*piVar8];
  }
  LVar2 = RegQueryValueExA(pHVar5,"Rows",(LPDWORD)0x0,(LPDWORD)&local_14,(LPBYTE)0x0,
                           (LPDWORD)&param_2);
  if (LVar2 == 0) {
    uVar9 = (uint)param_2;
    if (local_14 != (undefined1 *)0x3) {
      uVar9 = 0xffffffff;
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
  FUN_005b7e90();
  if (*piVar8 < 1) {
    pHVar5 = (HKEY)0x0;
  }
  else {
    pHVar5 = (HKEY)piVar8[*piVar8];
  }
  param_2 = (int *)uVar9;
  LVar2 = RegQueryValueExA(pHVar5,"Rows",(LPDWORD)0x0,(LPDWORD)&local_14,&stack0xffffffe0,
                           (LPDWORD)&param_2);
  iVar4 = local_c;
  if (LVar2 == 0) {
    uVar7 = (uint)param_2;
    if (local_14 != (undefined1 *)0x3) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (uVar7 == uVar9) {
    uVar9 = uVar9 >> 2;
    FUN_005995c0(*(undefined4 *)(local_c + 4),*(undefined4 *)(local_c + 8));
    param_2 = (int *)0x0;
    uVar7 = FUN_005ad970();
    if (uVar7 < uVar9) {
      local_14 = *(undefined1 **)(iVar4 + 8);
      puVar11 = &param_2;
      iVar6 = FUN_005ad970(puVar11);
      FUN_00537260(local_14,uVar9 - iVar6,puVar11);
    }
    else {
      uVar7 = FUN_005ad970();
      if (uVar9 < uVar7) {
        FUN_005995c0(*(int *)(iVar4 + 4) + uVar9 * 4,*(undefined4 *)(iVar4 + 8));
      }
    }
    iVar6 = 0;
    if (uVar9 != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar4 + 4) + iVar6 * 4) =
             *(undefined4 *)(&stack0xffffffe0 + iVar6 * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar9);
    }
  }
  return 1;
}

