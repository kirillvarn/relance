
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0042da00(float *param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 *param_5)

{
  float unaff_EDI;
  float10 fVar1;
  float10 fVar2;
  
  if ((float)param_3 < (float)_DAT_005c75f0) {
    *param_5 = 0x3f800000;
    return 1;
  }
  fVar1 = (float10)(**(code **)(*param_2 + 0x2c))(param_2);
  fVar2 = (float10)(**(code **)(*param_2 + 0x20))(param_2);
  fVar1 = ((float10)(float)param_2 / (float10)(float)fVar1) * fVar2 * (float10)unaff_EDI;
  if ((float10)param_1[2] < fVar1) {
    fVar1 = (fVar1 - (float10)param_1[1]) / ((float10)*param_1 - (float10)param_1[1]);
    if ((float10)_DAT_005c75dc < fVar1) {
      *param_3 = _DAT_005c75dc;
      return 1;
    }
    if (fVar1 < (float10)_DAT_005c7474) {
      fVar1 = (float10)_DAT_005c7474;
    }
    *param_3 = (float)fVar1;
    return 1;
  }
  *param_3 = 0.0;
  return 0;
}

