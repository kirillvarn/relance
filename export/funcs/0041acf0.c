
ulong * __thiscall FUN_0041acf0(ulong *param_1,char *param_2)

{
  ulong uVar1;
  
  uVar1 = DACOM_CRC::GetCRC32(param_2);
  *param_1 = uVar1;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  return param_1;
}

