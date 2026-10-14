
undefined4 * __fastcall FUN_005662a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c2053;
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
  param_1[0x1f] = &PTR_LAB_005cbed8;
  local_4 = 1;
  FUN_005b7fba(param_1 + 0x21,0xf0,5,FUN_00566380,thunk_FUN_005a1af0);
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  *param_1 = &PTR_FUN_005e27cc;
  param_1[0x1f] = &PTR_LAB_005e27c4;
  ExceptionList = local_c;
  return param_1;
}

