
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0053eb10(float param_1,float param_2)

{
  float10 fVar1;
  
  if ((param_1 == _DAT_005c7474) && (param_2 == _DAT_005c7474)) {
    return (float10)_DAT_005c7474;
  }
  if (ABS(param_1) <= ABS(param_2)) {
    fVar1 = (float10)fpatan(-((float10)param_1 / (float10)ABS(param_2)),(float10)1);
    if (param_2 < _DAT_005c7474) {
      if ((float10)_DAT_005c7474 < fVar1) {
        return (float10)_DAT_005c8a5c - fVar1;
      }
      fVar1 = (float10)_DAT_005df814 - fVar1;
    }
    return fVar1;
  }
  fVar1 = (float10)fpatan((float10)param_2 / (float10)ABS(param_1),(float10)1);
  if (_DAT_005c7474 < param_1) {
    return fVar1 - (float10)_DAT_005dc88c;
  }
  return (float10)_DAT_005dc88c - fVar1;
}

