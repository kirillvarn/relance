
undefined4 * __fastcall FUN_00566380(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c2068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_004215b0();
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xf8 | 8;
  *param_1 = &PTR_FUN_005d5544;
  param_1[4] = 0;
  param_1[0x1c] = 0;
  param_1[0xe] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  DAT_0067dcd4 = DAT_0067dcd4 + 1;
  local_4 = 0;
  FUN_004144b0();
  *(undefined1 *)((int)param_1 + 0xcf) = 0;
  *(undefined1 *)((int)param_1 + 0xce) = 0;
  *(undefined1 *)((int)param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((int)param_1 + 0xd3) = 0;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  *(undefined1 *)((int)param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((int)param_1 + 0xd7) = 0;
  *(undefined1 *)((int)param_1 + 0xd6) = 0;
  *(undefined1 *)((int)param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0xdb) = 0;
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0xdf) = 0;
  *(undefined1 *)((int)param_1 + 0xde) = 0;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x3b] = 0;
  *param_1 = &PTR_FUN_005e2844;
  *(undefined1 *)((int)param_1 + 0xe6) = 1;
  ExceptionList = local_c;
  return param_1;
}

