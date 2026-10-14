
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00512460(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  fVar1 = _DAT_005c75dc;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_5 = (fVar1 - param_2) * param_5;
  if (param_5 <= *(float *)(param_1 + 0x10)) {
    if ((param_5 < *(float *)(param_1 + 0x10)) &&
       (param_4 = *(float *)(param_1 + 0x10) - param_4, *(float *)(param_1 + 0x10) = param_4,
       param_4 < param_5)) {
      *(float *)(param_1 + 0x10) = param_5;
    }
  }
  else {
    param_3 = param_3 + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x10) = param_3;
    if (param_5 < param_3) {
      *(float *)(param_1 + 0x10) = param_5;
    }
  }
  if (*(float *)(param_1 + 0x10) < _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (_DAT_005c75dc < *(float *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  }
  return;
}

