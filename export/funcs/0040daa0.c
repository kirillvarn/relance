
void __thiscall FUN_0040daa0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar8) / 0x24)) {
    puVar7 = param_2;
    if ((uint)(((int)puVar8 - (int)param_2) / 0x24) < param_3) {
      for (; puVar7 != puVar8; puVar7 = puVar7 + 9) {
        FUN_0040dfa0(puVar7 + param_3 * 9,puVar7);
      }
      iVar5 = *(int *)(param_1 + 8);
      for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_0040dfa0(iVar5,param_4);
        iVar5 = iVar5 + 0x24;
      }
      puVar8 = *(undefined4 **)(param_1 + 8);
      if (param_2 != puVar8) {
        do {
          *param_2 = *param_4;
          FUN_005595c0(param_4 + 1);
          FUN_005595c0(param_4 + 5);
          param_2 = param_2 + 9;
        } while (param_2 != puVar8);
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      puVar7 = puVar8;
      for (puVar10 = puVar8 + param_3 * -9; puVar10 != puVar8; puVar10 = puVar10 + 9) {
        FUN_0040dfa0(puVar7,puVar10);
        puVar7 = puVar7 + 9;
      }
      puVar8 = *(undefined4 **)(param_1 + 8);
      for (puVar7 = puVar8 + param_3 * -9; param_2 != puVar7; puVar7 = puVar7 + -9) {
        puVar8 = puVar8 + -9;
        *puVar8 = puVar7[-9];
        FUN_005595c0(puVar7 + -8);
        FUN_005595c0(puVar7 + -4);
      }
      puVar8 = param_2 + param_3 * 9;
      for (; param_2 != puVar8; param_2 = param_2 + 9) {
        *param_2 = *param_4;
        FUN_005595c0(param_4 + 1);
        FUN_005595c0(param_4 + 5);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x24;
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar8 - iVar5) / 0x24, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar8 - iVar5) / 0x24;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x24);
  pvVar6 = pvVar3;
  for (puVar8 = *(undefined4 **)(param_1 + 4); uVar4 = param_3, pvVar1 = pvVar6, puVar8 != param_2;
      puVar8 = puVar8 + 9) {
    FUN_0040dfa0(pvVar6,puVar8);
    pvVar6 = (void *)((int)pvVar6 + 0x24);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_0040dfa0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x24);
  }
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (param_2 != puVar8) {
    iVar2 = param_3 * 0x24 - (int)param_2;
    do {
      FUN_0040dfa0((int)pvVar6 + iVar2 + (int)param_2,param_2);
      param_2 = param_2 + 9;
    } while (param_2 != puVar8);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar9 = *(int *)(param_1 + 4); iVar9 != iVar2; iVar9 = iVar9 + 0x24) {
    FUN_00407000();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x24);
  if (iVar2 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar3 + (param_3 + (*(int *)(param_1 + 8) - iVar2) / 0x24) * 0x24);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)((int)pvVar3 + param_3 * 0x24);
  return;
}

