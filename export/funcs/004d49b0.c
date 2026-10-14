
void FUN_004d49b0(undefined4 *param_1,undefined4 *param_2)

{
  Watchable *pWVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bdfda;
  local_c = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    pWVar1 = (Watchable *)param_2[1];
    local_4 = 1;
    if (((pWVar1 != (Watchable *)0x0) && (pWVar1 != (Watchable *)0x8)) &&
       (pWVar1 != (Watchable *)0x0)) {
      BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 1),pWVar1);
    }
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  ExceptionList = local_c;
  return;
}

