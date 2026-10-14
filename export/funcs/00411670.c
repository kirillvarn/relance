
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411670(int param_1,float param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_2 = param_2 * _DAT_005c77f4;
  *(float *)(param_1 + 0x70) = param_2;
  *(float *)(param_1 + 0x6c) = param_2 * (float)_DAT_005c75e8;
  return;
}

