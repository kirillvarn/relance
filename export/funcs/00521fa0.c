
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00521fa0(float *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_005c75dc;
  if (*param_1 < _DAT_005c75dc) {
    fVar1 = *param_1;
  }
  *param_1 = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_1[1] < _DAT_005c75dc) {
    fVar1 = param_1[1];
  }
  param_1[1] = fVar1;
  if (_DAT_005c75dc <= param_1[2]) {
    param_1[2] = 1.0;
    return;
  }
  param_1[2] = param_1[2];
  return;
}

