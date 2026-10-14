
undefined4 * __fastcall FUN_004068d0(undefined4 *param_1)

{
  undefined1 local_1;
  
  param_1[1] = 0;
  param_1[2] = 0xbf800000;
  param_1[3] = 0xbf800000;
  CacheString::clear((CacheString *)(param_1 + 4));
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = local_1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xc) = local_1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x10) = local_1;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_005c7734;
  return param_1;
}

