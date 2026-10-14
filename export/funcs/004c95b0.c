
BaseWatcher * __thiscall FUN_004c95b0(BaseWatcher *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  local_4 = 0;
  if ((param_2 != 0) && ((Watchable *)(param_2 + 8) != (Watchable *)0x0)) {
    BaseWatcher::set_pointer(param_1,(Watchable *)(param_2 + 8));
  }
  ExceptionList = local_c;
  return param_1;
}

