
undefined4 __thiscall FUN_0058cfb0(int param_1,uint param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (((param_2 != 0) && (iVar2 = *(int *)(param_1 + 0x4a4), iVar2 != 0)) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x4a8) - iVar2 >> 2))) {
    fVar3 = *(float *)(param_1 + 0x4fc) + *(float *)(param_1 + 0x4fc);
    fVar4 = *(float *)(iVar2 + (param_2 - 1) * 4) - fVar3;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x4a8) - iVar2 >> 2;
    }
    if (param_2 + 1 == iVar5) {
      fVar1 = *(float *)(param_1 + 0x48c);
    }
    else {
      fVar1 = *(float *)(iVar2 + (param_2 + 1) * 4);
    }
    fVar1 = fVar1 + fVar3;
    if ((fVar1 <= param_3) && (fVar1 = param_3, fVar4 < param_3)) {
      fVar1 = fVar4;
    }
    param_3 = fVar1;
    if (*(float *)(iVar2 + param_2 * 4) != param_3) {
      *(float *)(iVar2 + param_2 * 4) = param_3;
      if (((*(int *)(param_1 + 0x4a4) != 0) &&
          (param_2 - 1 < (uint)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2))) &&
         ((*(int *)(param_1 + 0x4b4) != 0 &&
          (*(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2 != 0)))) {
        FUN_0057a620(1,1);
      }
    }
    return 1;
  }
  return 0;
}

