
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004176c0(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = ABS(param_3);
  if (ABS(param_3) < (float)_DAT_005c75f8) {
    fVar1 = _DAT_005c75dc;
  }
  return CONCAT44(-((_DAT_005c75dc / _DAT_0067dc9c) * _DAT_0067dc74 * (_DAT_0067dc9c / fVar1) *
                   param_2),
                  _DAT_0067dc70 * (_DAT_005c75dc / _DAT_0067dc9c) * (_DAT_0067dc9c / fVar1) *
                  param_1);
}

