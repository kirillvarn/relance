
void __fastcall FUN_004d5d40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005be118;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0059fa50();
  *param_1 = &PTR_FUN_005d6eac;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 10) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

