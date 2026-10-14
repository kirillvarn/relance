
void __thiscall FUN_005900d0(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  
  puVar8 = *(undefined1 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar8) / 0xc)) {
    if (param_3 <= (uint)(((int)puVar8 - (int)param_2) / 0xc)) {
      if (param_3 != 0) {
        puVar7 = puVar8;
        for (puVar10 = puVar8 + param_3 * -0xc; puVar10 != puVar8; puVar10 = puVar10 + 0xc) {
          FUN_00590ab0(puVar7,puVar10);
          puVar7 = puVar7 + 0xc;
        }
        puVar8 = *(undefined1 **)(param_1 + 8);
        for (puVar7 = *(undefined1 **)(param_1 + 8) + param_3 * -0xc; param_2 != puVar7;
            puVar7 = puVar7 + -0xc) {
          puVar8[-0xc] = puVar7[-0xc];
          puVar8[-0xb] = puVar7[-0xb];
          puVar8[-10] = puVar7[-10];
          *(undefined4 *)(puVar8 + -8) = *(undefined4 *)(puVar7 + -8);
          FUN_00590400(puVar7 + -4);
          puVar8 = puVar8 + -0xc;
        }
        puVar8 = param_2 + param_3 * 0xc;
        for (; param_2 != puVar8; param_2 = param_2 + 0xc) {
          FUN_00590d10(param_4);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
      }
      return;
    }
    for (puVar7 = param_2; puVar7 != puVar8; puVar7 = puVar7 + 0xc) {
      FUN_00590ab0(puVar7 + param_3 * 0xc,puVar7);
    }
    iVar5 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_00590ab0(iVar5,param_4);
      iVar5 = iVar5 + 0xc;
    }
    puVar8 = *(undefined1 **)(param_1 + 8);
    if (param_2 != puVar8) {
      puVar7 = param_2 + 2;
      do {
        puVar7[-2] = *param_4;
        puVar7[-1] = param_4[1];
        *puVar7 = param_4[2];
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_4 + 4);
        FUN_00590400(param_4 + 8);
        puVar10 = puVar7 + 10;
        puVar7 = puVar7 + 0xc;
      } while (puVar10 != puVar8);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
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
  for (puVar8 = *(undefined1 **)(param_1 + 4); pvVar1 = pvVar6, uVar4 = param_3, puVar8 != param_2;
      puVar8 = puVar8 + 0xc) {
    FUN_00590ab0(pvVar6,puVar8);
    pvVar6 = (void *)((int)pvVar6 + 0xc);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_00590ab0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0xc);
  }
  puVar8 = *(undefined1 **)(param_1 + 8);
  if (param_2 != puVar8) {
    iVar2 = param_3 * 0xc - (int)param_2;
    do {
      FUN_00590ab0(param_2 + (int)pvVar6 + iVar2,param_2);
      param_2 = param_2 + 0xc;
    } while (param_2 != puVar8);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar9 = *(int *)(param_1 + 4); iVar9 != iVar2; iVar9 = iVar9 + 0xc) {
    FUN_0058e430();
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

