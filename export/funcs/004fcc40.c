
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fcc40(float *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_4 == (float *)0x0) {
    if (_DAT_005c7474 <= param_1[2]) {
      if ((_DAT_005c7474 < param_1[2]) &&
         (fVar1 = param_1[2] - param_2 * param_1[3], param_1[2] = fVar1, fVar1 < _DAT_005c7474)) {
        param_1[2] = 0.0;
      }
    }
    else {
      fVar1 = param_2 * param_1[3] + param_1[2];
      param_1[2] = fVar1;
      if (_DAT_005c7474 < fVar1) {
        param_1[2] = 0.0;
        return (float10)param_1[2];
      }
    }
    return (float10)param_1[2];
  }
  fVar1 = (param_3[1] - param_4[1]) * (param_3[1] - param_4[1]) +
          (param_3[2] - param_4[2]) * (param_3[2] - param_4[2]) +
          (*param_3 - *param_4) * (*param_3 - *param_4);
  if (fVar1 < *param_1 * *param_1) {
    fVar2 = param_1[1] * param_1[1];
    if (fVar1 < fVar2 == (fVar1 == fVar2)) {
      fVar1 = (float)_DAT_005c89b8 - (SQRT(fVar1) - param_1[1]) / (*param_1 - param_1[1]);
      if (fVar1 <= param_1[2]) {
        if ((fVar1 < param_1[2]) &&
           (fVar2 = param_1[2] - param_2 * param_1[3], param_1[2] = fVar2, fVar2 < fVar1)) {
          param_1[2] = fVar1;
          return (float10)param_1[2];
        }
      }
      else {
        fVar2 = param_2 * param_1[3] + param_1[2];
        param_1[2] = fVar2;
        if (fVar1 < fVar2) {
          param_1[2] = fVar1;
          return (float10)param_1[2];
        }
      }
    }
    else if (_DAT_005c75dc <= param_1[2]) {
      if ((_DAT_005c75dc < param_1[2]) &&
         (fVar1 = param_1[2] - param_2 * param_1[3], param_1[2] = fVar1, fVar1 < _DAT_005c75dc)) {
        param_1[2] = 1.0;
        return (float10)param_1[2];
      }
    }
    else {
      fVar1 = param_2 * param_1[3] + param_1[2];
      param_1[2] = fVar1;
      if (_DAT_005c75dc < fVar1) {
        param_1[2] = 1.0;
        return (float10)param_1[2];
      }
    }
  }
  else if (_DAT_005c7474 <= param_1[2]) {
    if ((_DAT_005c7474 < param_1[2]) &&
       (fVar1 = param_1[2] - param_2 * param_1[3], param_1[2] = fVar1, fVar1 < _DAT_005c7474)) {
      param_1[2] = 0.0;
      return (float10)param_1[2];
    }
  }
  else {
    fVar1 = param_2 * param_1[3] + param_1[2];
    param_1[2] = fVar1;
    if (_DAT_005c7474 < fVar1) {
      param_1[2] = 0.0;
      return (float10)param_1[2];
    }
  }
  return (float10)param_1[2];
}

