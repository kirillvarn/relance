
/* WARNING: Removing unreachable block (ram,0x004af877) */
/* WARNING: Removing unreachable block (ram,0x004af88e) */
/* WARNING: Removing unreachable block (ram,0x004af890) */
/* WARNING: Removing unreachable block (ram,0x004af8a1) */
/* WARNING: Removing unreachable block (ram,0x004af8a3) */
/* WARNING: Removing unreachable block (ram,0x004af8a5) */
/* WARNING: Removing unreachable block (ram,0x004af8ae) */
/* WARNING: Removing unreachable block (ram,0x004af8b0) */
/* WARNING: Removing unreachable block (ram,0x004af8c0) */
/* WARNING: Removing unreachable block (ram,0x004af8c2) */
/* WARNING: Removing unreachable block (ram,0x004af8c4) */

int __thiscall FUN_004af5c0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 local_2c [3];
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined1 local_4;
  
  if (param_3 < 0) {
    return param_3;
  }
  if (3 < param_3) {
    return param_3;
  }
  uVar8 = 0xffffffff;
  local_10 = 0xffffffff;
  local_4 = 1;
  if (param_2 < 0) {
    local_8 = 0;
    local_c = 0;
  }
  else {
    cVar3 = FUN_00577e80(param_2,local_2c);
    if (cVar3 == '\0') {
      local_8 = 3;
    }
    else {
      cVar3 = FUN_00577ea0(param_2,local_20);
      local_8 = (cVar3 != '\0') + 1;
    }
    iVar4 = FUN_00577ec0(param_2);
    if (iVar4 != 0) {
      iVar4 = FUN_00577ec0(param_2);
      if (*(int *)(iVar4 + 4) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        iVar4 = FUN_00577ec0(param_2);
        uVar8 = *(undefined4 *)(iVar4 + 4);
        if (param_2 == 0x14) {
          local_4 = 0;
        }
      }
      iVar4 = FUN_00577ec0(param_2);
      if (*(int *)(iVar4 + 8) != 0) {
        iVar4 = FUN_00577ec0(param_2);
        local_10 = *(undefined4 *)(iVar4 + 8);
        local_c = param_2;
        goto LAB_004af6aa;
      }
    }
    local_10 = 0xffffffff;
    local_c = param_2;
  }
LAB_004af6aa:
  local_14 = uVar8;
  if (param_3 == 0) {
    param_1 = param_1 + 0x7fc;
  }
  else {
    if (param_3 != 1) {
      if (param_3 + -2 != 0) {
        return param_3 + -2;
      }
      puVar1 = *(undefined4 **)(param_1 + 0x824);
      iVar6 = *(int *)(param_1 + 0x828) - (int)puVar1;
      iVar4 = iVar6 >> 0x1f;
      if (iVar6 / 0x2c + iVar4 == iVar4) {
        iVar4 = *(int *)(param_1 + 0x820);
        if ((iVar4 == 0) || (uVar10 = ((int)puVar1 - iVar4) / 0x2c, uVar10 < 2)) {
          uVar10 = 1;
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = ((int)puVar1 - iVar4) / 0x2c;
        }
        iVar4 = iVar4 + uVar10;
        iVar6 = iVar4;
        if (iVar4 < 0) {
          iVar6 = 0;
        }
        pvVar5 = operator_new(iVar6 * 0x2c);
        iVar6 = FUN_004b2ae0(*(undefined4 *)(param_1 + 0x820),puVar1,pvVar5);
        FUN_004b2b20(iVar6,1,local_2c);
        FUN_004b2ae0(puVar1,*(undefined4 *)(param_1 + 0x824),iVar6 + 0x2c);
        IDPMsgHandler::OnReceive
                  ((IDPMsgHandler *)(param_1 + 0x81c),*(uchar **)(param_1 + 0x820),
                   *(ulong *)(param_1 + 0x824));
        FUN_005b7e1d(*(undefined4 *)(param_1 + 0x820));
        *(void **)(param_1 + 0x828) = (void *)(iVar4 * 0x2c + (int)pvVar5);
        if (*(int *)(param_1 + 0x820) == 0) {
          *(void **)(param_1 + 0x820) = pvVar5;
          *(int *)(param_1 + 0x824) = (int)pvVar5 + 0x2c;
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0x824) - *(int *)(param_1 + 0x820);
        *(void **)(param_1 + 0x820) = pvVar5;
        *(void **)(param_1 + 0x824) = (void *)((iVar4 / 0x2c + 1) * 0x2c + (int)pvVar5);
        return iVar4 * 0x2e8ba2e9;
      }
      FUN_004b2ae0(puVar1,puVar1,puVar1 + 0xb);
      FUN_004b2b20(*(int *)(param_1 + 0x824),1 - (*(int *)(param_1 + 0x824) - (int)puVar1) / 0x2c,
                   local_2c);
      puVar2 = *(undefined4 **)(param_1 + 0x824);
      while (puVar1 != puVar2) {
        puVar7 = puVar1 + 0xb;
        puVar9 = local_2c;
        puVar11 = puVar1;
        for (iVar4 = 0xb; puVar1 = puVar7, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      iVar4 = *(int *)(param_1 + 0x824) + 0x2c;
      *(int *)(param_1 + 0x824) = iVar4;
      return iVar4;
    }
    param_1 = param_1 + 0x80c;
  }
  iVar4 = FUN_005126f0(*(undefined4 *)(param_1 + 8),1,local_2c);
  return iVar4;
}

