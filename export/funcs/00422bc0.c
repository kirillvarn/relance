
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00422bc0(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  pfVar1 = param_1 + 3;
  *pfVar1 = *param_3 - *param_1;
  param_1[4] = fVar2 - param_1[1];
  param_1[5] = fVar3 - param_1[2];
  fVar2 = _DAT_005c75dc /
          SQRT(param_1[5] * param_1[5] + param_1[4] * param_1[4] + *pfVar1 * *pfVar1);
  *pfVar1 = fVar2 * *pfVar1;
  param_1[4] = fVar2 * param_1[4];
  param_1[5] = fVar2 * param_1[5];
  param_1[6] = -1.0;
  param_1[0x15] = 0.0;
  param_1[0x14] = -NAN;
  param_1[0x16] = 0.0;
  return;
}

