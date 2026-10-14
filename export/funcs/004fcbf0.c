
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fcbf0(float *param_1,float param_2,float param_3,float param_4)

{
  *param_1 = param_4;
  param_1[1] = param_3;
  if (param_4 < param_3) {
    param_1[1] = param_4;
    *param_1 = param_3;
  }
  if (_DAT_005c7474 < param_2) {
    param_1[3] = param_2;
    return;
  }
  param_1[3] = 0.0;
  return;
}

