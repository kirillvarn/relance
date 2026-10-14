
undefined4 * __fastcall FUN_00517180(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfdf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051ca80();
  local_4 = 0;
  FUN_00420d40();
  *param_1 = &PTR_LAB_005db944;
  param_1[0x3e] = &PTR_FUN_005db93c;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x4b] = 0x3f800000;
  param_1[0x47] = 0x3f800000;
  param_1[0x43] = 0x3f800000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x57] = 0x3f800000;
  param_1[0x53] = 0x3f800000;
  param_1[0x4f] = 0x3f800000;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[99] = 0x3f800000;
  param_1[0x5f] = 0x3f800000;
  param_1[0x5b] = 0x3f800000;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((int)param_1 + 0xfd) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  ExceptionList = local_c;
  return param_1;
}

