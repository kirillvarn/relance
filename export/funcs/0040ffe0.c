
undefined4 FUN_0040ffe0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = 4;
  if (param_3 - param_2[2] < *(float *)(param_1 + 0xa4)) {
    return 1;
  }
  if (-param_2[2] - param_3 < *(float *)(param_1 + 0xa4)) {
    uVar2 = 3;
  }
  fVar1 = *(float *)(param_1 + 0x88) * param_2[2] + ABS(*param_2) * *(float *)(param_1 + 0x80);
  if (param_3 < fVar1) {
    return 1;
  }
  if (-param_3 < fVar1) {
    uVar2 = 3;
  }
  fVar1 = *(float *)(param_1 + 0x94) * param_2[2] + ABS(param_2[1]) * *(float *)(param_1 + 0x90);
  if (param_3 < fVar1) {
    return 1;
  }
  if (-param_3 < fVar1) {
    uVar2 = 3;
  }
  if (*(float *)(param_1 + 0xa8) < -param_2[2] - param_3) {
    return 1;
  }
  if (*(float *)(param_1 + 0xa8) < param_3 - param_2[2]) {
    uVar2 = 3;
  }
  return uVar2;
}

