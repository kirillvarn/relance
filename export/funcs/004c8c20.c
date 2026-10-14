
void __fastcall FUN_004c8c20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bd843;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d6e7c;
  local_4 = 1;
  if (param_1[0x14] != -1) {
    FUN_0059eee0();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0059ef20();
  *param_1 = &PTR_FUN_005d6eac;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 10) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

