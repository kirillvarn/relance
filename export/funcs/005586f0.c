
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005586f0(int *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  if (*param_1 == 3) {
    *param_6 = 3.0;
    return 1;
  }
  fVar6 = (float10)(float)param_1[0x13] * (float10)(float)param_1[0x13];
  if (fVar6 == (float10)_DAT_005c7474) {
    *param_6 = 0.0;
    return 0;
  }
  fVar2 = *param_4 - *param_2;
  fVar3 = param_4[1] - param_2[1];
  fVar1 = (float)((float10)param_4[2] - (float10)param_2[2]);
  fVar7 = (float10)fVar3 * (float10)fVar3 +
          (float10)fVar2 * (float10)fVar2 +
          ((float10)param_4[2] - (float10)param_2[2]) * (float10)fVar1;
  fVar4 = (float10)_DAT_005d55b4;
  if (*param_1 != 1) {
    if ((float10)_DAT_005c75f0 <= fVar7) {
      fVar8 = ((float10)fVar2 * (float10)*param_3 +
              (float10)param_3[1] * (float10)fVar3 + (float10)param_3[2] * (float10)fVar1) /
              SQRT(fVar7);
      fVar5 = (float10)fcos((float10)(float)param_1[0x19] * (float10)_DAT_005c75e0);
      if (fVar8 < fVar5 != (fVar8 == fVar5)) {
        fVar4 = (float10)(float)fVar8;
      }
    }
  }
  *param_6 = (float)(fVar4 - fVar7 / fVar6);
  return 1;
}

