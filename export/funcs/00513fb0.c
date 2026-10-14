
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00513fb0(float *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_1[2] * (float10)param_1[2] +
          (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1;
  fVar1 = (float)(0x5f3759df - ((int)(float)fVar2 >> 1));
  return ((float10)_DAT_005ca220 - (float10)fVar1 * (float10)fVar1 * fVar2 * (float10)_DAT_005c75e0)
         * (float10)fVar1 * fVar2;
}

