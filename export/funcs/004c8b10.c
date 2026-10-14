
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8b10(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  param_3 = _DAT_005c75dc / param_3;
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * fVar2;
  param_1[2] = param_3 * fVar1;
  return;
}

