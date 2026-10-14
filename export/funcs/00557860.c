
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00557860(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar1 = (float)_DAT_005c8ba8;
  param_1[6] = *param_1;
  param_1[7] = param_1[1];
  param_1[8] = param_1[2];
  param_1[9] = *param_1;
  param_1[10] = param_1[1];
  param_1[0xb] = param_1[2];
  if (param_1[0xc] != fVar1) {
    fVar1 = param_2 * param_1[0xc] + param_1[0xd];
    fVar2 = (float)_DAT_005c89b8;
    param_1[0xd] = fVar1;
    if (fVar2 <= fVar1) {
      dVar3 = floor((double)fVar1);
      param_1[0xd] = fVar1 - (float)dVar3;
    }
    fVar1 = _DAT_005c7474;
    if ((param_1[0xd] <= param_1[0x10]) &&
       (fVar1 = (_DAT_005d55b4 / param_1[0x10]) * param_1[0xd], _DAT_005c75dc < fVar1)) {
      fVar1 = _DAT_005d55b4 - fVar1;
    }
    param_1[9] = fVar1 * *param_1;
    param_1[10] = fVar1 * param_1[1];
    param_1[0xb] = fVar1 * param_1[2];
    param_1[6] = (*param_1 - param_1[3]) * fVar1 + param_1[3];
    param_1[7] = (param_1[1] - param_1[4]) * fVar1 + param_1[4];
    param_1[8] = (param_1[2] - param_1[5]) * fVar1 + param_1[5];
  }
  return;
}

