
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00509680(int *param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    fVar1 = (float10)(**(code **)**(undefined4 **)param_1[9])(param_2);
    return fVar1 * (float10)(float)param_1[0xac] +
           ((float10)_DAT_005c75dc - fVar1) *
           ((float10)(float)param_1[0xa7] + (float10)(float)param_1[0xa6]);
  }
  fVar1 = (float10)(**(code **)(*param_1 + 0x20))(param_2);
  if (fVar1 < (float10)_DAT_005c75dc) {
    fVar1 = fVar1 * fVar1;
    if (fVar1 < (float10)_DAT_005db098) {
      fVar1 = (float10)_DAT_005db098;
    }
    return (float10)(float)param_1[0xac] / fVar1;
  }
  return (float10)(float)param_1[0xac];
}

