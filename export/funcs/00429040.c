
void __thiscall FUN_00429040(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_LAB_005ca174;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 3) = (param_2 & 1) << 2 ^ *(byte *)(param_1 + 3) & 0xe0;
  param_1[9] = 1;
  param_1[10] = DAT_00667c58;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_005c9fac;
  DAT_00667cbc = DAT_00667cbc + 1;
  return;
}

