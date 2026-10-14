
undefined4 __thiscall FUN_00597ff0(int param_1,uint param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (((param_2 == 0) || (iVar3 = *(int *)(param_1 + 0xa8), iVar3 == 0)) ||
     ((uint)(*(int *)(param_1 + 0xac) - iVar3 >> 2) <= param_2)) {
    return 0;
  }
  iVar1 = param_2 - 1;
  iVar8 = 2;
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xac) - iVar3 >> 2;
  }
  if (uVar6 < param_2 + 1) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
    }
    iVar8 = iVar8 - iVar1;
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  fVar4 = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xec);
  fVar5 = fVar4 + *(float *)(iVar3 + iVar1 * 4);
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xac) - iVar3 >> 2;
  }
  if (param_2 + 1 == iVar7) {
    fVar2 = *(float *)(param_1 + 0x7c);
  }
  else {
    fVar2 = *(float *)(iVar3 + (param_2 + 1) * 4);
  }
  fVar2 = fVar2 - fVar4;
  if ((fVar5 <= param_3) && (fVar5 = param_3, fVar2 < param_3)) {
    fVar5 = fVar2;
  }
  if (fVar5 == *(float *)(iVar3 + param_2 * 4)) {
    return 1;
  }
  *(float *)(iVar3 + param_2 * 4) = fVar5;
  FUN_00598210(0,0,iVar1,iVar8);
  return 1;
}

