
void __fastcall FUN_004da630(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005be4a5;
  local_c = ExceptionList;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  if (param_1[0x11e] != 0) {
    ExceptionList = &local_c;
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x11e),(Watchable *)0x0);
  }
  local_4._0_1_ = 5;
  *(undefined ***)(param_1 + 0xee) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0xee));
  local_4._0_1_ = 4;
  FUN_004058e0();
  local_4._0_1_ = 3;
  if (param_1[0xe6] != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xe6),(Watchable *)0x0);
  }
  local_4._0_1_ = 2;
  FUN_00576010();
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0xd9;
  }
  FUN_005b7e1d(puVar1[2]);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0059fa50();
  *param_1 = &PTR_FUN_005d6eac;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 10) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

