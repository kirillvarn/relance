
undefined4 * __fastcall FUN_004c9060(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_005d5544;
  param_1[4] = 0;
  param_1[0x1c] = 0;
  param_1[0xe] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xf8 | 8;
  DAT_0067dcd4 = DAT_0067dcd4 + 1;
  local_4 = 0;
  FUN_00420d40();
  param_1[0x27] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x1f] = &PTR_FUN_005d2efc;
  param_1[0x23] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa7) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xf8;
  *param_1 = &PTR_FUN_005d709c;
  ExceptionList = local_c;
  return param_1;
}

