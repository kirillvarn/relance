
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00595e30(int param_1,float param_2,float param_3)

{
  *(float *)(param_1 + 0x334) = param_2;
  *(float *)(param_1 + 0x338) = param_3;
  if (param_2 < param_3) {
    *(float *)(param_1 + 0x3b0) = param_2 * (float)_DAT_005cf100;
    FUN_00595840();
    return;
  }
  *(float *)(param_1 + 0x3b0) = param_3 * (float)_DAT_005cf100;
  FUN_00595840();
  return;
}

