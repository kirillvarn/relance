
/* WARNING: Removing unreachable block (ram,0x0055e520) */
/* WARNING: Removing unreachable block (ram,0x0055e537) */
/* WARNING: Removing unreachable block (ram,0x0055e555) */
/* WARNING: Removing unreachable block (ram,0x0055e55e) */
/* WARNING: Removing unreachable block (ram,0x0055e560) */

void __thiscall FUN_0055e360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_2;
  local_c = param_3;
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  local_8 = param_4;
  iVar2 = *(int *)(param_1 + 0x10) - (int)puVar7;
  iVar3 = iVar2 >> 0x1f;
  if (iVar2 / 0xc + iVar3 == iVar3) {
    iVar3 = *(int *)(param_1 + 8);
    if ((iVar3 == 0) || (uVar5 = ((int)puVar7 - iVar3) / 0xc, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)puVar7 - iVar3) / 0xc;
    }
    iVar3 = iVar3 + uVar5;
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = 0;
    }
    pvVar1 = operator_new(iVar2 * 0xc);
    pvVar4 = pvVar1;
    for (puVar6 = *(undefined4 **)(param_1 + 8); puVar6 != puVar7; puVar6 = puVar6 + 3) {
      FUN_0059f7e0(pvVar4,puVar6);
      pvVar4 = (void *)((int)pvVar4 + 0xc);
    }
    FUN_0055e870(pvVar4,1,&local_c);
    FUN_0055e830(puVar7,*(undefined4 *)(param_1 + 0xc),(int)pvVar4 + 0xc);
    IDPMsgHandler::OnReceive
              ((IDPMsgHandler *)(param_1 + 4),*(uchar **)(param_1 + 8),*(ulong *)(param_1 + 0xc));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
    *(void **)(param_1 + 0x10) = (void *)((int)pvVar1 + iVar3 * 0xc);
    iVar3 = FUN_0059f590();
    *(void **)(param_1 + 8) = pvVar1;
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + (iVar3 + 1) * 0xc);
    return;
  }
  FUN_0055e830(puVar7,puVar7,puVar7 + 3);
  FUN_0055e870(*(int *)(param_1 + 0xc),1 - (*(int *)(param_1 + 0xc) - (int)puVar7) / 0xc,&local_c);
  puVar6 = *(undefined4 **)(param_1 + 0xc);
  if (puVar7 == puVar6) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0xc;
    return;
  }
  do {
    *puVar7 = local_c;
    puVar7[1] = local_8;
    puVar8 = puVar7 + 3;
    puVar7[2] = local_4;
    puVar7 = puVar8;
  } while (puVar8 != puVar6);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0xc;
  return;
}

