
void __thiscall FUN_0052c4d0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar7) / 0x34)) {
    if (param_3 <= (uint)(((int)puVar7 - (int)param_2) / 0x34)) {
      if (param_3 != 0) {
        puVar9 = puVar7;
        for (puVar8 = puVar7 + param_3 * -0xd; puVar8 != puVar7; puVar8 = puVar8 + 0xd) {
          FUN_0052c7d0(puVar9,puVar8);
          puVar9 = puVar9 + 0xd;
        }
        puVar7 = *(undefined4 **)(param_1 + 8);
        puVar9 = puVar7 + param_3 * -0xd;
        while (param_2 != puVar9) {
          puVar9 = puVar9 + -0xd;
          puVar7 = puVar7 + -0xd;
          puVar8 = puVar9;
          puVar10 = puVar7;
          for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        puVar7 = param_2;
        while (puVar7 != param_2 + param_3 * 0xd) {
          puVar10 = puVar7 + 0xd;
          puVar9 = param_4;
          puVar8 = puVar7;
          for (iVar4 = 0xd; puVar7 = puVar10, iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x34;
      }
      return;
    }
    for (puVar9 = param_2; puVar9 != puVar7; puVar9 = puVar9 + 0xd) {
      FUN_0052c7d0(puVar9 + param_3 * 0xd,puVar9);
    }
    iVar4 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar4 - (int)param_2) / 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_0052c7d0(iVar4,param_4);
      iVar4 = iVar4 + 0x34;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    while (param_2 != puVar7) {
      puVar10 = param_2 + 0xd;
      puVar9 = param_4;
      puVar8 = param_2;
      for (iVar4 = 0xd; param_2 = puVar10, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x34;
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  if ((iVar4 == 0) || (uVar5 = ((int)puVar7 - iVar4) / 0x34, uVar5 <= param_3)) {
    uVar5 = param_3;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)puVar7 - iVar4) / 0x34;
  }
  iVar4 = iVar4 + uVar5;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x34);
  pvVar6 = pvVar3;
  for (puVar7 = *(undefined4 **)(param_1 + 4); pvVar1 = pvVar6, uVar5 = param_3, puVar7 != param_2;
      puVar7 = puVar7 + 0xd) {
    FUN_0052c7d0(pvVar6,puVar7);
    pvVar6 = (void *)((int)pvVar6 + 0x34);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    FUN_0052c7d0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x34);
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (param_2 != puVar7) {
    iVar2 = param_3 * 0x34 - (int)param_2;
    do {
      FUN_0052c7d0((int)pvVar6 + iVar2 + (int)param_2,param_2);
      param_2 = param_2 + 0xd;
    } while (param_2 != puVar7);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar4 * 0x34 + (int)pvVar3);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - iVar4) / 0x34 + param_3) * 0x34 + (int)pvVar3);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)(param_3 * 0x34 + (int)pvVar3);
  return;
}

