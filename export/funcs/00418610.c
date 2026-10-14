
void __thiscall FUN_00418610(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int *piVar11;
  void *pvVar12;
  
  puVar10 = param_2;
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar8 >> 3)) {
    if ((uint)((int)puVar8 - (int)param_2 >> 3) < param_3) {
      for (; puVar10 != puVar8; puVar10 = puVar10 + 2) {
        FUN_00418f10(puVar10 + param_3 * 2,puVar10);
      }
      iVar7 = *(int *)(param_1 + 8);
      for (iVar3 = param_3 - (iVar7 - (int)param_2 >> 3); iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_00418f10(iVar7,param_4);
        iVar7 = iVar7 + 8;
      }
      puVar8 = *(undefined4 **)(param_1 + 8);
      for (; param_2 != puVar8; param_2 = param_2 + 2) {
        *param_2 = *param_4;
        param_2[1] = param_4[1];
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
      return;
    }
    if (param_3 != 0) {
      puVar10 = puVar8;
      for (puVar6 = puVar8 + param_3 * -2; puVar6 != puVar8; puVar6 = puVar6 + 2) {
        FUN_00418f10(puVar10,puVar6);
        puVar10 = puVar10 + 2;
      }
      puVar8 = *(undefined4 **)(param_1 + 8);
      for (puVar10 = *(undefined4 **)(param_1 + 8) + param_3 * -2; param_2 != puVar10;
          puVar10 = puVar10 + -2) {
        puVar8[-2] = puVar10[-2];
        puVar8[-1] = puVar10[-1];
        puVar8 = puVar8 + -2;
      }
      puVar8 = param_2 + param_3 * 2;
      for (; param_2 != puVar8; param_2 = param_2 + 2) {
        *param_2 = *param_4;
        param_2[1] = param_4[1];
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
    }
    return;
  }
  iVar7 = *(int *)(param_1 + 4);
  uVar2 = param_3;
  if (iVar7 != 0) {
    uVar5 = (int)puVar8 - iVar7 >> 3;
    if (param_3 < uVar5) {
      uVar2 = uVar5;
    }
    if (iVar7 != 0) {
      iVar7 = (int)puVar8 - iVar7 >> 3;
      goto LAB_00418655;
    }
  }
  iVar7 = 0;
LAB_00418655:
  iVar7 = uVar2 + iVar7;
  iVar3 = iVar7;
  if (iVar7 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 * 8);
  pvVar12 = pvVar4;
  for (puVar8 = *(undefined4 **)(param_1 + 4); puVar8 != param_2; puVar8 = puVar8 + 2) {
    FUN_00418f10(pvVar12,puVar8);
    pvVar12 = (void *)((int)pvVar12 + 8);
  }
  if (param_3 != 0) {
    param_2 = (undefined4 *)param_3;
    pvVar9 = pvVar12;
    do {
      FUN_00418f10(pvVar9,param_4);
      pvVar9 = (void *)((int)pvVar9 + 8);
      param_2 = (undefined4 *)((int)param_2 - 1);
    } while (param_2 != (undefined4 *)0x0);
  }
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (puVar10 != puVar8) {
    iVar3 = param_3 * 8 - (int)puVar10;
    do {
      FUN_00418f10((int)pvVar12 + iVar3 + (int)puVar10,puVar10);
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar8);
  }
  piVar1 = *(int **)(param_1 + 8);
  for (piVar11 = *(int **)(param_1 + 4); piVar11 != piVar1; piVar11 = piVar11 + 2) {
    if ((int *)*piVar11 != (int *)0x0) {
      (**(code **)(*(int *)*piVar11 + 4))();
    }
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar7 * 8);
  if (*(int *)(param_1 + 4) == 0) {
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + param_3 * 8);
    *(void **)(param_1 + 4) = pvVar4;
    return;
  }
  *(void **)(param_1 + 8) =
       (void *)((int)pvVar4 + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3) + param_3) * 8);
  *(void **)(param_1 + 4) = pvVar4;
  return;
}

