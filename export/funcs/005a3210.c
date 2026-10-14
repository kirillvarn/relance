
undefined4 * __fastcall FUN_005a3210(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_0059f860();
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  param_1[0xd3] = 0x3f800000;
  param_1[0xcf] = 0x3f800000;
  param_1[0xcb] = 0x3f800000;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xda) = local_1;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined1 *)((int)param_1 + 0x37b) = 0;
  *(undefined1 *)((int)param_1 + 0x37a) = 0;
  *(undefined1 *)((int)param_1 + 0x379) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)((int)param_1 + 0x35e) = 0;
  *(undefined1 *)((int)param_1 + 0x35f) = 0;
  param_1[0xd8] = 0;
  *param_1 = &PTR_FUN_005e6084;
  param_1[0x1f] = &PTR_OnReceive_005e6078;
  *(undefined1 *)(param_1 + 0xd7) = 0x60;
  *(byte *)((int)param_1 + 0x35d) = *(byte *)((int)param_1 + 0x35d) & 0xfe;
  return param_1;
}

