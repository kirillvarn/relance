
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411c80(byte *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_1[2] * _DAT_005c7f68;
  fVar2 = (float)param_1[1] * _DAT_005c7f68;
  *param_2 = (float)*param_1 * _DAT_005c7f68;
  param_2[1] = fVar2;
  param_2[2] = fVar1;
  return;
}

