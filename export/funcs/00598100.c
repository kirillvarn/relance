
undefined4 __thiscall FUN_00598100(int param_1,uint param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (((param_2 != 0) && (iVar3 = *(int *)(param_1 + 0x98), iVar3 != 0)) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x9c) - iVar3 >> 2))) {
    iVar1 = param_2 - 1;
    iVar8 = 2;
    if (iVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 0x9c) - iVar3 >> 2;
    }
    if (uVar6 < param_2 + 1) {
      if (*(int *)(param_1 + 0x98) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
      }
      iVar8 = iVar8 - iVar1;
    }
    iVar3 = *(int *)(param_1 + 0x98);
    fVar4 = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xec);
    fVar5 = *(float *)(iVar3 + iVar1 * 4) - fVar4;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x9c) - iVar3 >> 2;
    }
    if (param_2 + 1 == iVar7) {
      fVar2 = *(float *)(param_1 + 0x80);
    }
    else {
      fVar2 = *(float *)(iVar3 + (param_2 + 1) * 4);
    }
    fVar2 = fVar2 + fVar4;
    if ((fVar2 <= param_3) && (fVar2 = param_3, fVar5 < param_3)) {
      fVar2 = fVar5;
    }
    param_3 = fVar2;
    if (*(float *)(iVar3 + param_2 * 4) != param_3) {
      *(float *)(iVar3 + param_2 * 4) = param_3;
      FUN_00598210(iVar1,iVar8,0,0);
    }
    return 1;
  }
  return 0;
}

