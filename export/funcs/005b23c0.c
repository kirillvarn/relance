
undefined4 * __fastcall FUN_005b23c0(undefined4 *param_1)

{
  uint uVar1;
  void *local_20 [6];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c5978;
  local_20[5] = ExceptionList;
  uVar1 = 0;
  local_4 = 0;
  ExceptionList = local_20 + 5;
  *param_1 = &PTR_LAB_005e6d20;
  local_20[0] = (void *)0xc5;
  local_20[1] = (void *)0x14;
  local_20[2] = (void *)0x15;
  local_20[3] = (void *)0x17;
  local_20[4] = (void *)0xcb;
  do {
    FUN_005760d0(local_20[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  ExceptionList = local_20[5];
  return param_1;
}

