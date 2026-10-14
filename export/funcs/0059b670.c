
undefined4 * __thiscall FUN_0059b670(undefined4 *param_1,char *param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = DACOM_CRC::GetCRC32(param_2);
  param_1[1] = uVar1;
  return param_1;
}

