
void FUN_00421a70(byte param_1,byte param_2,byte param_3)

{
  DAT_00616898 = ((param_1 | 0xffffff00) << 8 | (uint)param_2) << 8 | (uint)param_3;
  return;
}

