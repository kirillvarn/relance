
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00404670(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6
            ,float param_7)

{
  undefined4 uVar1;
  
  if ((*param_2 < param_5) || (param_6 <= *param_1)) {
    return 0;
  }
  param_5 = param_5 - *param_1;
  uVar1 = 1;
  if (_DAT_005c7474 < param_5) {
    uVar1 = 0xffffffff;
    *param_1 = param_5 + *param_1;
    *param_3 = (param_5 / param_7) * (*param_4 - *param_3) + *param_3;
  }
  param_6 = param_6 - *param_2;
  if (_DAT_005c7474 <= param_6) {
    return uVar1;
  }
  *param_2 = param_6 + *param_2;
  *param_4 = (param_6 / param_7) * (*param_4 - *param_3) + *param_4;
  return 0xffffffff;
}

