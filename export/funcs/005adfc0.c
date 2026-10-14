
int __thiscall FUN_005adfc0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar5) / 0x9c) < param_3) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || (uVar4 = (iVar5 - iVar2) / 0x9c, uVar4 <= param_3)) {
      uVar4 = param_3;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar5 - iVar2) / 0x9c;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x9c);
    pvVar6 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); uVar4 = param_3, pvVar1 = pvVar6, iVar2 != param_2;
        iVar2 = iVar2 + 0x9c) {
      FUN_005af3b0(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x9c);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_005af3b0(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x9c);
    }
    iVar2 = *(int *)(param_1 + 8);
    if (param_2 != iVar2) {
      iVar8 = param_3 * 0x9c - param_2;
      do {
        FUN_005af3b0((int)pvVar6 + param_2 + iVar8,param_2);
        param_2 = param_2 + 0x9c;
      } while (param_2 != iVar2);
    }
    iVar2 = *(int *)(param_1 + 8);
    for (iVar8 = *(int *)(param_1 + 4); iVar8 != iVar2; iVar8 = iVar8 + 0x9c) {
      FUN_005686b0();
    }
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(iVar5 * 0x9c + (int)pvVar3);
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
      iVar5 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      iVar5 = iVar2 * -0x2df2df2d;
      iVar2 = iVar2 / 0x9c;
    }
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((iVar2 + param_3) * 0x9c + (int)pvVar3);
    return iVar5;
  }
  iVar2 = -(iVar5 - param_2 >> 0x1f);
  if (param_3 <= (uint)((iVar5 - param_2) / 0x9c)) {
    if (param_3 != 0) {
      iVar8 = iVar5;
      for (iVar7 = iVar5 + param_3 * -0x9c; iVar7 != iVar5; iVar7 = iVar7 + 0x9c) {
        iVar2 = FUN_005af3b0(iVar8,iVar7);
        iVar8 = iVar8 + 0x9c;
      }
      iVar5 = *(int *)(param_1 + 8) + param_3 * -0x9c;
      while (param_2 != iVar5) {
        iVar5 = iVar5 + -0x9c;
        iVar2 = FUN_005a9ea0(iVar5);
      }
      iVar5 = param_2 + param_3 * 0x9c;
      for (; param_2 != iVar5; param_2 = param_2 + 0x9c) {
        iVar2 = FUN_005a9ea0(param_4);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x9c;
    }
    return iVar2;
  }
  for (iVar2 = param_2; iVar2 != iVar5; iVar2 = iVar2 + 0x9c) {
    FUN_005af3b0(param_3 * 0x9c + iVar2,iVar2);
  }
  iVar5 = *(int *)(param_1 + 8);
  for (iVar2 = param_3 - (iVar5 - param_2) / 0x9c; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_005af3b0(iVar5,param_4);
    iVar5 = iVar5 + 0x9c;
  }
  iVar5 = *(int *)(param_1 + 8);
  for (; param_2 != iVar5; param_2 = param_2 + 0x9c) {
    FUN_005a9ea0(param_4);
  }
  iVar5 = *(int *)(param_1 + 8) + param_3 * 0x9c;
  *(int *)(param_1 + 8) = iVar5;
  return iVar5;
}

