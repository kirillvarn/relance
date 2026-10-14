
void __thiscall FUN_00590500(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar7) / 100)) {
    if (param_3 <= (uint)(((int)puVar7 - (int)param_2) / 100)) {
      if (param_3 != 0) {
        puVar9 = puVar7;
        for (puVar10 = puVar7 + param_3 * -0x19; puVar10 != puVar7; puVar10 = puVar10 + 0x19) {
          FUN_00590b40(puVar9,puVar10);
          puVar9 = puVar9 + 0x19;
        }
        puVar7 = *(undefined4 **)(param_1 + 8);
        for (puVar9 = *(undefined4 **)(param_1 + 8) + param_3 * -0x19; param_2 != puVar9;
            puVar9 = puVar9 + -0x19) {
          puVar7[-0x19] = puVar9[-0x19];
          puVar7[-0x18] = puVar9[-0x18];
          FUN_00413df0(puVar9[-0x17],0xffffffff);
          FUN_00590f30(puVar9 + -0x15);
          puVar7[-8] = puVar9[-8];
          puVar7[-7] = puVar9[-7];
          puVar7[-6] = puVar9[-6];
          puVar7[-5] = puVar9[-5];
          puVar7[-4] = puVar9[-4];
          puVar7[-3] = puVar9[-3];
          puVar7[-2] = puVar9[-2];
          *(undefined1 *)(puVar7 + -1) = *(undefined1 *)(puVar9 + -1);
          puVar7 = puVar7 + -0x19;
        }
        if (param_2 != param_2 + param_3 * 0x19) {
          puVar7 = param_2 + 2;
          do {
            puVar7[-2] = *param_4;
            puVar7[-1] = param_4[1];
            FUN_00413df0(param_4[2],0xffffffff);
            FUN_00590f30(param_4 + 4);
            puVar7[0xf] = param_4[0x11];
            puVar7[0x10] = param_4[0x12];
            puVar7[0x11] = param_4[0x13];
            puVar7[0x12] = param_4[0x14];
            puVar7[0x13] = param_4[0x15];
            puVar7[0x14] = param_4[0x16];
            puVar7[0x15] = param_4[0x17];
            *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)(param_4 + 0x18);
            puVar9 = puVar7 + 0x17;
            puVar7 = puVar7 + 0x19;
          } while (puVar9 != param_2 + param_3 * 0x19);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 100;
      }
      return;
    }
    for (puVar9 = param_2; puVar9 != puVar7; puVar9 = puVar9 + 0x19) {
      FUN_00590b40(puVar9 + param_3 * 0x19,puVar9);
    }
    iVar4 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar4 - (int)param_2) / 100; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_00590b40(iVar4,param_4);
      iVar4 = iVar4 + 100;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != puVar7; param_2 = param_2 + 0x19) {
      FUN_00590d70(param_4);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 100;
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  if ((iVar4 == 0) || (uVar8 = ((int)puVar7 - iVar4) / 100, uVar8 <= param_3)) {
    uVar8 = param_3;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)puVar7 - iVar4) / 100;
  }
  iVar4 = iVar4 + uVar8;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 100);
  pvVar5 = pvVar3;
  for (puVar7 = *(undefined4 **)(param_1 + 4); pvVar1 = pvVar5, uVar8 = param_3, puVar7 != param_2;
      puVar7 = puVar7 + 0x19) {
    FUN_00590b40(pvVar5,puVar7);
    pvVar5 = (void *)((int)pvVar5 + 100);
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    FUN_00590b40(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 100);
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (param_2 != puVar7) {
    iVar2 = param_3 * 100 - (int)param_2;
    do {
      FUN_00590b40((int)pvVar5 + iVar2 + (int)param_2,param_2);
      param_2 = param_2 + 0x19;
    } while (param_2 != puVar7);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar6 = *(int *)(param_1 + 4); iVar6 != iVar2; iVar6 = iVar6 + 100) {
    FUN_00444ee0();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar4 * 100 + (int)pvVar3);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - iVar4) / 100 + param_3) * 100 + (int)pvVar3);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)(param_3 * 100 + (int)pvVar3);
  return;
}

