
undefined4 __thiscall FUN_00410a40(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((*(byte *)(param_1 + 0xb4) & 8) != 0) {
    if ((*(int *)(param_1 + 0xb0) == 3) && ((*(byte *)(param_1 + 0xb4) & 2) == 0)) {
      return 1;
    }
    fVar1 = *param_2 - *(float *)(param_1 + 0x98);
    fVar2 = param_2[1] - *(float *)(param_1 + 0x9c);
    fVar3 = param_2[2] - *(float *)(param_1 + 0xa0);
    param_3 = *(float *)(param_1 + 0x58) + param_3;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < param_3 * param_3) {
      return 1;
    }
  }
  return 0;
}

