
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00427940(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*param_4 < _DAT_005c7474) {
    return 0;
  }
  fVar1 = (float10)*param_4 - (float10)param_3;
  fVar2 = (float10)_DAT_005c7474;
  *param_4 = (float)fVar1;
  if (fVar1 < fVar2 != (fVar1 == fVar2)) {
    *param_4 = -1.0;
    *param_5 = param_2;
    return 1;
  }
  fVar3 = (float10)1.4426950408889634 * (float10)param_1 * (float10)_DAT_005c9cf4;
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  fVar4 = (float10)1.4426950408889634 * (float10)param_2 * (float10)_DAT_005c9cf4;
  fVar3 = ROUND(fVar4);
  fVar4 = (float10)f2xm1(fVar4 - fVar3);
  fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
  fVar2 = fVar2 + ((float10)param_3 / (fVar1 + (float10)param_3)) * (fVar3 - fVar2);
  if (fVar2 < (float10)_DAT_005c9cf0 != (fVar2 == (float10)_DAT_005c9cf0)) {
    *param_5 = -96.0;
    return 1;
  }
  fVar2 = (float10)log2(fVar2);
  *param_5 = (float)((float10)0.3010299956639812 * fVar2 * (float10)_DAT_005c9ce8);
  return 1;
}

