
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00543380(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0e02;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00532bc0(1);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  local_4 = 1;
  param_1[0x41] = 0;
  FUN_00420d40();
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4e] = 0x3f800000;
  param_1[0x4a] = 0x3f800000;
  param_1[0x46] = 0x3f800000;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xfc;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *param_1 = &PTR_LAB_005dfd6c;
  param_1[1] = &PTR_LAB_005dfcec;
  param_1[3] = &PTR_FUN_005dfce0;
  param_1[0x2b] = &PTR_FUN_005dfcd8;
  param_1[0x56] = 0;
  iVar1 = rand();
  param_1[0xd] = (float)iVar1 * _DAT_005caeec;
  ExceptionList = local_c;
  return param_1;
}

