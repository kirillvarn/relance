
undefined4 * __fastcall FUN_005a2100(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c5023;
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
  FUN_005b7fba(param_1 + 0x123,4,0x100,FUN_005b33f0,FUN_005a27e0);
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_005e5f9c;
  param_1[0x22b] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x229] = 0;
  param_1[0x22a] = 0x10;
  param_1[0x223] = 0;
  *(undefined1 *)(param_1 + 0x228) = 1;
  *(undefined1 *)((int)param_1 + 0x8a1) = 0;
  *(undefined1 *)((int)param_1 + 0x8a2) = 1;
  uVar1 = FUN_004177b0("ListText");
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_005e5f88;
  ExceptionList = local_c;
  return param_1;
}

