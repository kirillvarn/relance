
FmtStr * __thiscall FUN_005a6b90(FmtStr *param_1,FmtStr *param_2,uint param_3,FmtStr *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  FmtStr *pFVar6;
  void *pvVar7;
  FmtStr *pFVar8;
  FmtStr *pFVar9;
  FmtStr *pFVar10;
  
  pFVar9 = *(FmtStr **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)pFVar9) / 0x1c)) {
    pFVar10 = (FmtStr *)-((int)pFVar9 - (int)param_2 >> 0x1f);
    if (param_3 <= (uint)(((int)pFVar9 - (int)param_2) / 0x1c)) {
      if (param_3 != 0) {
        pFVar6 = pFVar9;
        for (pFVar8 = pFVar9 + param_3 * -0x1c; pFVar8 != pFVar9; pFVar8 = pFVar8 + 0x1c) {
          pFVar10 = (FmtStr *)FUN_005a7c80(pFVar6,pFVar8);
          pFVar6 = pFVar6 + 0x1c;
        }
        pFVar9 = *(FmtStr **)(param_1 + 8);
        pFVar6 = *(FmtStr **)(param_1 + 8) + param_3 * -0x1c;
        while (param_2 != pFVar6) {
          FmtStr::operator=(pFVar9 + -0x1c,pFVar6 + -0x1c);
          pFVar10 = *(FmtStr **)(pFVar6 + -4);
          *(FmtStr **)(pFVar9 + -4) = pFVar10;
          pFVar9 = pFVar9 + -0x1c;
          pFVar6 = pFVar6 + -0x1c;
        }
        pFVar9 = param_2 + param_3 * 0x1c;
        for (; param_2 != pFVar9; param_2 = param_2 + 0x1c) {
          pFVar10 = FmtStr::operator=(param_2,param_4);
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
        }
        *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
      }
      return pFVar10;
    }
    for (pFVar10 = param_2; pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x1c) {
      FUN_005a7c80(pFVar10 + param_3 * 0x1c,pFVar10);
    }
    iVar5 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_005a7c80(iVar5,param_4);
      iVar5 = iVar5 + 0x1c;
    }
    pFVar9 = *(FmtStr **)(param_1 + 8);
    for (; param_2 != pFVar9; param_2 = param_2 + 0x1c) {
      FmtStr::operator=(param_2,param_4);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
    return param_1;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)pFVar9 - iVar5) / 0x1c, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)pFVar9 - iVar5) / 0x1c;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x1c);
  pvVar7 = pvVar3;
  for (pFVar9 = *(FmtStr **)(param_1 + 4); uVar4 = param_3, pvVar1 = pvVar7, pFVar9 != param_2;
      pFVar9 = pFVar9 + 0x1c) {
    FUN_005a7c80(pvVar7,pFVar9);
    pvVar7 = (void *)((int)pvVar7 + 0x1c);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_005a7c80(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x1c);
  }
  pFVar9 = *(FmtStr **)(param_1 + 8);
  if (param_2 != pFVar9) {
    iVar2 = param_3 * 0x1c - (int)param_2;
    do {
      FUN_005a7c80(param_2 + (int)pvVar7 + iVar2,param_2);
      param_2 = param_2 + 0x1c;
    } while (param_2 != pFVar9);
  }
  pFVar9 = *(FmtStr **)(param_1 + 8);
  for (pFVar10 = *(FmtStr **)(param_1 + 4); pFVar10 != pFVar9; pFVar10 = pFVar10 + 0x1c) {
    FmtStr::~FmtStr(pFVar10);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar5 * 0x1c + (int)pvVar3);
  if (*(int *)(param_1 + 4) != 0) {
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((iVar5 / 0x1c + param_3) * 0x1c + (int)pvVar3);
    return (FmtStr *)(iVar5 * -0x6db6db6d);
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)(param_3 * 0x1c + (int)pvVar3);
  return (FmtStr *)0x0;
}

