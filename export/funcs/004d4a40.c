
BaseWatcher * __thiscall FUN_004d4a40(BaseWatcher *param_1,undefined4 *param_2)

{
  Watchable *pWVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bdff9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  pWVar1 = (Watchable *)*param_2;
  local_4 = 0;
  if (((pWVar1 != (Watchable *)0x0) && (pWVar1 != (Watchable *)0x8)) && (pWVar1 != (Watchable *)0x0)
     ) {
    BaseWatcher::set_pointer(param_1,pWVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

