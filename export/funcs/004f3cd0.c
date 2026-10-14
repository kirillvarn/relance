
void __fastcall FUN_004f3cd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bf23f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d9784;
  param_1[0xe] = &PTR_LAB_005d96cc;
  param_1[0x2d] = &PTR_OnReceive_005d96bc;
  DAT_00674bc8 = 0;
  local_4 = 1;
  if (*(int *)(param_1 + 0xd9) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xd9),(Watchable *)0x0);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0059fa50();
  *param_1 = &PTR_FUN_005d6eac;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 10) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

