
/* WARNING: Removing unreachable block (ram,0x0055e0b8) */
/* WARNING: Removing unreachable block (ram,0x0055e0d0) */
/* WARNING: Removing unreachable block (ram,0x0055e0e1) */
/* WARNING: Removing unreachable block (ram,0x0055e0e3) */
/* WARNING: Removing unreachable block (ram,0x0055e0e5) */
/* WARNING: Removing unreachable block (ram,0x0055e0ee) */
/* WARNING: Removing unreachable block (ram,0x0055e0f0) */
/* WARNING: Removing unreachable block (ram,0x0055e100) */
/* WARNING: Removing unreachable block (ram,0x0055e102) */

void __thiscall FUN_0055dee0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_2;
  local_1c[0] = *param_3;
  local_1c[1] = param_3[1];
  local_1c[2] = param_3[2];
  local_1c[3] = *param_4;
  local_c = param_4[1];
  local_8 = param_4[2];
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x10) - (int)puVar2;
  iVar4 = iVar5 >> 0x1f;
  if (iVar5 / 0x1c + iVar4 == iVar4) {
    iVar4 = *(int *)(param_1 + 8);
    if ((iVar4 == 0) || (uVar6 = ((int)puVar2 - iVar4) / 0x1c, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar2 - iVar4) / 0x1c;
    }
    iVar4 = iVar4 + uVar6;
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = 0;
    }
    pvVar1 = operator_new(iVar5 * 0x1c);
    pvVar9 = pvVar1;
    for (puVar7 = *(undefined4 **)(param_1 + 8); puVar7 != puVar2; puVar7 = puVar7 + 7) {
      FUN_0055e8b0(pvVar9,puVar7);
      pvVar9 = (void *)((int)pvVar9 + 0x1c);
    }
    FUN_0055e800(pvVar9,1,local_1c);
    FUN_0055e7c0(puVar2,*(undefined4 *)(param_1 + 0xc),(int)pvVar9 + 0x1c);
    IDPMsgHandler::OnReceive
              ((IDPMsgHandler *)(param_1 + 4),*(uchar **)(param_1 + 8),*(ulong *)(param_1 + 0xc));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
    *(void **)(param_1 + 0x10) = (void *)(iVar4 * 0x1c + (int)pvVar1);
    iVar4 = FUN_0058f9e0();
    *(void **)(param_1 + 8) = pvVar1;
    *(void **)(param_1 + 0xc) = (void *)((iVar4 + 1) * 0x1c + (int)pvVar1);
    return;
  }
  FUN_0055e7c0(puVar2,puVar2,puVar2 + 7);
  FUN_0055e800(*(int *)(param_1 + 0xc),1 - (*(int *)(param_1 + 0xc) - (int)puVar2) / 0x1c,local_1c);
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != puVar7) {
    do {
      puVar3 = puVar2 + 7;
      puVar8 = local_1c;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar2 = puVar3;
    } while (puVar3 != puVar7);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x1c;
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x1c;
  return;
}

