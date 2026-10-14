
undefined4 * __fastcall FUN_0040e250(undefined4 *param_1)

{
  *param_1 = 0;
  ID_String::clear((ID_String *)(param_1 + 1));
  param_1[2] = 0;
  CacheString::clear((CacheString *)(param_1 + 3));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0xffffffff;
  return param_1;
}

