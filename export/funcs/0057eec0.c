
void __thiscall FUN_0057eec0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar10 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar10) / 0xc)) {
    if (param_3 <= (uint)(((int)puVar10 - (int)param_2) / 0xc)) {
      if (param_3 != 0) {
        puVar9 = puVar10;
        for (puVar11 = puVar10 + param_3 * -3; puVar11 != puVar10; puVar11 = puVar11 + 3) {
          FUN_0057fc60(puVar9,puVar11);
          puVar9 = puVar9 + 3;
        }
        puVar10 = *(undefined4 **)(param_1 + 8);
        puVar9 = *(undefined4 **)(param_1 + 8) + param_3 * -3;
        while (param_2 != puVar9) {
          puVar6 = puVar9 + -3;
          puVar11 = puVar10 + -3;
          *puVar11 = puVar9[-3];
          *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
          puVar4 = (undefined2 *)((int)puVar10 + -10);
          do {
            *(undefined1 *)puVar4 = *(undefined1 *)(((int)puVar6 - (int)puVar11) + (int)puVar4);
            puVar4 = (undefined2 *)((int)puVar4 + 1);
          } while ((undefined1 *)((int)puVar4 + (-2 - (int)puVar11)) < (undefined1 *)0x2);
          puVar10[-2] = puVar9[-2];
          puVar10 = puVar11;
          puVar9 = puVar6;
        }
        puVar10 = param_2 + param_3 * 3;
        for (; param_2 != puVar10; param_2 = param_2 + 3) {
          FUN_0057fcb0(param_4);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
      }
      return;
    }
    for (puVar9 = param_2; puVar9 != puVar10; puVar9 = puVar9 + 3) {
      FUN_0057fc60(puVar9 + param_3 * 3,puVar9);
    }
    iVar7 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar7 - (int)param_2) / 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_0057fc60(iVar7,param_4);
      iVar7 = iVar7 + 0xc;
    }
    puVar10 = *(undefined4 **)(param_1 + 8);
    if (param_2 != puVar10) {
      iVar7 = (int)param_4 - (int)param_2;
      do {
        *param_2 = *param_4;
        *(undefined2 *)param_2 = *(undefined2 *)param_4;
        puVar4 = (undefined2 *)((int)param_2 + 2);
        do {
          *(undefined1 *)puVar4 = *(undefined1 *)(iVar7 + (int)puVar4);
          puVar4 = (undefined2 *)((int)puVar4 + 1);
        } while ((undefined1 *)((-2 - (int)param_2) + (int)puVar4) < (undefined1 *)0x2);
        param_2[1] = param_4[1];
        param_2 = param_2 + 3;
        iVar7 = iVar7 + -0xc;
      } while (param_2 != puVar10);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
    return;
  }
  iVar7 = *(int *)(param_1 + 4);
  if ((iVar7 == 0) || (uVar5 = ((int)puVar10 - iVar7) / 0xc, uVar5 <= param_3)) {
    uVar5 = param_3;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = ((int)puVar10 - iVar7) / 0xc;
  }
  iVar7 = iVar7 + uVar5;
  iVar2 = iVar7;
  if (iVar7 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0xc);
  pvVar8 = pvVar3;
  for (puVar10 = *(undefined4 **)(param_1 + 4); pvVar1 = pvVar8, uVar5 = param_3, puVar10 != param_2
      ; puVar10 = puVar10 + 3) {
    FUN_0057fc60(pvVar8,puVar10);
    pvVar8 = (void *)((int)pvVar8 + 0xc);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    FUN_0057fc60(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0xc);
  }
  puVar10 = *(undefined4 **)(param_1 + 8);
  if (param_2 != puVar10) {
    iVar2 = param_3 * 0xc - (int)param_2;
    do {
      FUN_0057fc60((int)pvVar8 + iVar2 + (int)param_2,param_2);
      param_2 = param_2 + 3;
    } while (param_2 != puVar10);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar7 * 0xc);
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

