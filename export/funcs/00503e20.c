
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00503e20(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_005c7474;
  switch(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x158)) {
  case 1:
    fVar1 = (float10)_DAT_005d1f04;
    if (_DAT_005c7474 < *(float *)(param_1 + 4)) {
      return (fVar1 / (float10)*(float *)(param_1 + 4)) * (float10)*(float *)(param_1 + 0x70);
    }
    break;
  case 2:
  case 3:
    fVar1 = (float10)_DAT_005d1f04;
    break;
  case 4:
    if (*(float *)(param_1 + 0x10) <= _DAT_005c7474) {
      return (float10)_DAT_005c7474;
    }
    return ((float10)_DAT_005c75dc -
           (float10)*(float *)(param_1 + 0x70) / (float10)*(float *)(param_1 + 0x10)) *
           (float10)_DAT_005d1f04;
  }
  return fVar1;
}

