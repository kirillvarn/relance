
void FUN_004f3820(BaseWatcher *param_1,undefined4 *param_2)

{
  Watchable *pWVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf16a;
  local_c = ExceptionList;
  if (param_1 != (BaseWatcher *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    pWVar1 = (Watchable *)*param_2;
    local_4 = 1;
    if (((pWVar1 != (Watchable *)0x0) && (pWVar1 != (Watchable *)0x8)) &&
       (pWVar1 != (Watchable *)0x0)) {
      BaseWatcher::set_pointer(param_1,pWVar1);
    }
    *(undefined4 *)(param_1 + 8) = param_2[2];
    *(undefined4 *)(param_1 + 0xc) = param_2[3];
    *(undefined4 *)(param_1 + 0x10) = param_2[4];
    *(undefined4 *)(param_1 + 0x14) = param_2[5];
    *(undefined4 *)(param_1 + 0x18) = param_2[6];
    *(undefined4 *)(param_1 + 0x1c) = param_2[7];
  }
  ExceptionList = local_c;
  return;
}

