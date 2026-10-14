
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00557d00(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  fVar2 = (float)(0x5f3759df - ((int)fVar1 >> 1));
  fVar2 = (_DAT_005ca220 - fVar2 * fVar2 * fVar1 * _DAT_005c75e0) * fVar2;
  *param_1 = fVar2 * *param_1;
  param_1[1] = fVar2 * param_1[1];
  param_1[2] = fVar2 * param_1[2];
  return;
}

