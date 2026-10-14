
void __thiscall FUN_0040d830(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  void *pvVar9;
  
  puVar8 = param_2;
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar6 >> 3)) {
    if ((uint)((int)puVar6 - (int)param_2 >> 3) < param_3) {
      for (; puVar8 != puVar6; puVar8 = puVar8 + 2) {
        FUN_0040df40(puVar8 + param_3 * 2,puVar8);
      }
      iVar5 = *(int *)(param_1 + 8);
      for (iVar2 = param_3 - (iVar5 - (int)param_2 >> 3); iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_0040df40(iVar5,param_4);
        iVar5 = iVar5 + 8;
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (; param_2 != puVar6; param_2 = param_2 + 2) {
        *param_2 = *param_4;
        param_2[1] = param_4[1];
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
      return;
    }
    if (param_3 != 0) {
      puVar8 = puVar6;
      for (puVar4 = puVar6 + param_3 * -2; puVar4 != puVar6; puVar4 = puVar4 + 2) {
        FUN_0040df40(puVar8,puVar4);
        puVar8 = puVar8 + 2;
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (puVar8 = *(undefined4 **)(param_1 + 8) + param_3 * -2; param_2 != puVar8;
          puVar8 = puVar8 + -2) {
        puVar6[-2] = puVar8[-2];
        puVar6[-1] = puVar8[-1];
        puVar6 = puVar6 + -2;
      }
      puVar6 = param_2 + param_3 * 2;
      for (; param_2 != puVar6; param_2 = param_2 + 2) {
        *param_2 = *param_4;
        param_2[1] = param_4[1];
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar1 = (int)puVar6 - iVar5 >> 3, uVar1 <= param_3)) {
    uVar1 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)puVar6 - iVar5 >> 3;
  }
  iVar5 = uVar1 + iVar5;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 8);
  pvVar9 = pvVar3;
  for (puVar6 = *(undefined4 **)(param_1 + 4); puVar6 != param_2; puVar6 = puVar6 + 2) {
    FUN_0040df40(pvVar9,puVar6);
    pvVar9 = (void *)((int)pvVar9 + 8);
  }
  if (param_3 != 0) {
    param_2 = (undefined4 *)param_3;
    pvVar7 = pvVar9;
    do {
      FUN_0040df40(pvVar7,param_4);
      pvVar7 = (void *)((int)pvVar7 + 8);
      param_2 = (undefined4 *)((int)param_2 - 1);
    } while (param_2 != (undefined4 *)0x0);
  }
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (puVar8 != puVar6) {
    iVar2 = param_3 * 8 - (int)puVar8;
    do {
      FUN_0040df40((int)pvVar9 + iVar2 + (int)puVar8,puVar8);
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar6);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 8);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + param_3 * 8);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) =
       (void *)((int)pvVar3 + ((*(int *)(param_1 + 8) - iVar5 >> 3) + param_3) * 8);
  return;
}

