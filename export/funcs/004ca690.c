
BaseWatcher * __fastcall FUN_004ca690(BaseWatcher *param_1)

{
  BaseWatcher local_25;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd9df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  local_4 = 0;
  BaseWatcher::set(param_1,(Watchable *)0x0);
  param_1[0x24] = local_25;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = 2;
  FUN_004ca910();
  local_4 = 3;
  FUN_0048e600();
  local_4 = CONCAT31(local_4._1_3_,4);
  local_24 = 4;
  do {
    FUN_004b5150();
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3e99999a;
  param_1[0x38] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x60) = 0x3e99999a;
  param_1[0x84] = (BaseWatcher)0x0;
  param_1[0x85] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x86] = (BaseWatcher)0x1;
  *(undefined4 *)(param_1 + 0x80) = 0x3f000000;
  *(undefined4 *)(param_1 + 100) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x78) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x170) = 0;
  param_1[0x174] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  ExceptionList = local_c;
  return param_1;
}

