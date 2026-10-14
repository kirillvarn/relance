
void __thiscall FUN_005299b0(int param_1,undefined2 *param_2,uint param_3,undefined2 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  
  puVar8 = *(undefined2 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar8) / 0xc)) {
    puVar7 = param_2;
    if ((uint)(((int)puVar8 - (int)param_2) / 0xc) < param_3) {
      for (; puVar7 != puVar8; puVar7 = puVar7 + 6) {
        FUN_00529ce0(puVar7 + param_3 * 6,puVar7);
      }
      iVar5 = *(int *)(param_1 + 8);
      for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_00529ce0(iVar5,param_4);
        iVar5 = iVar5 + 0xc;
      }
      puVar8 = *(undefined2 **)(param_1 + 8);
      if (param_2 != puVar8) {
        do {
          *param_2 = *param_4;
          FUN_00529db0(param_4 + 2);
          FUN_00529db0(param_4 + 4);
          param_2 = param_2 + 6;
        } while (param_2 != puVar8);
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      puVar7 = puVar8;
      for (puVar10 = puVar8 + param_3 * -6; puVar10 != puVar8; puVar10 = puVar10 + 6) {
        FUN_00529ce0(puVar7,puVar10);
        puVar7 = puVar7 + 6;
      }
      puVar8 = *(undefined2 **)(param_1 + 8);
      for (puVar7 = puVar8 + param_3 * -6; param_2 != puVar7; puVar7 = puVar7 + -6) {
        puVar8 = puVar8 + -6;
        *puVar8 = puVar7[-6];
        FUN_00529db0(puVar7 + -4);
        FUN_00529db0(puVar7 + -2);
      }
      puVar8 = param_2 + param_3 * 6;
      for (; param_2 != puVar8; param_2 = param_2 + 6) {
        *param_2 = *param_4;
        FUN_00529db0(param_4 + 2);
        FUN_00529db0(param_4 + 4);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar8 - iVar5) / 0xc, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar8 - iVar5) / 0xc;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0xc);
  pvVar6 = pvVar3;
  for (puVar8 = *(undefined2 **)(param_1 + 4); pvVar1 = pvVar6, uVar4 = param_3, puVar8 != param_2;
      puVar8 = puVar8 + 6) {
    FUN_00529ce0(pvVar6,puVar8);
    pvVar6 = (void *)((int)pvVar6 + 0xc);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_00529ce0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0xc);
  }
  puVar8 = *(undefined2 **)(param_1 + 8);
  if (param_2 != puVar8) {
    iVar2 = param_3 * 0xc - (int)param_2;
    do {
      FUN_00529ce0((int)pvVar6 + iVar2 + (int)param_2,param_2);
      param_2 = param_2 + 6;
    } while (param_2 != puVar8);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar9 = *(int *)(param_1 + 4); iVar9 != iVar2; iVar9 = iVar9 + 0xc) {
    FUN_00528d00();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0xc);
  if (iVar2 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar3 + (param_3 + (*(int *)(param_1 + 8) - iVar2) / 0xc) * 0xc);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)((int)pvVar3 + param_3 * 0xc);
  return;
}

