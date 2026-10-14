
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004cc060(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = SQRT(param_2 * param_2 + param_1 * param_1);
  if (fVar1 < ABS(param_3 * _DAT_005d7478)) {
    return (float10)_DAT_005c7474;
  }
  fVar2 = (float)_DAT_005c7720;
  if ((!NAN(fVar1) && !NAN(fVar2)) && fVar1 < fVar2 != (fVar1 == fVar2)) {
    return (float10)_DAT_005c7474;
  }
  fVar3 = ((float10)_DAT_005c75dc / (float10)fVar1) * (float10)param_2;
  if (fVar3 < (float10)_DAT_005c8ba8) {
    fVar3 = -fVar3;
  }
  fVar4 = (float10)fpatan(-(float10)(float)((float10)param_1 *
                                           ((float10)_DAT_005c75dc / (float10)fVar1)),fVar3);
  fVar4 = (float10)_DAT_006108fc * (float10)_DAT_005d7470 * fVar4;
  fVar3 = (float10)fsin(fVar4);
  fVar4 = (float10)fcos(fVar4);
  if (fVar4 < (float10)(DAT_00610900 * (float)_DAT_005d5138)) {
    fVar4 = (float10)(DAT_00610900 * (float)_DAT_005d5138);
  }
  return ((float10)DAT_00610900 * (float10)(float)-fVar3 * (float10)_DAT_005ca320) / fVar4;
}

