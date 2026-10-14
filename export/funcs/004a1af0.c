
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a1af0(int param_1,byte *param_2)

{
  *(float *)(param_1 + 0x14) = (float)*param_2 * _DAT_005c7f68;
  *(float *)(param_1 + 0x18) = (float)param_2[1] * _DAT_005c7f68;
  *(float *)(param_1 + 0x1c) = (float)param_2[2] * _DAT_005c7f68;
  *(float *)(param_1 + 0x24) = (float)param_2[3] * _DAT_005c7f68;
  return;
}

