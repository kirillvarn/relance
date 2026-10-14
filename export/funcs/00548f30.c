
void __fastcall FUN_00548f30(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c1166;
  local_c = ExceptionList;
  local_4._0_1_ = 8;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xb5c) != 0) {
    ExceptionList = &local_c;
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xb5c),(Watchable *)0x0);
  }
  local_4._0_1_ = 7;
  *(undefined ***)(param_1 + 0xa9c) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0xa9c));
  local_4._0_1_ = 9;
  if (*(int *)(param_1 + 0xa64) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xa64),(Watchable *)0x0);
  }
  local_4._0_1_ = 6;
  *(undefined ***)(param_1 + 0x9a4) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x9a4));
  local_4._0_1_ = 5;
  FUN_0051dfc0();
  local_4._0_1_ = 10;
  if (*(int *)(param_1 + 0x6cc) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x6cc),(Watchable *)0x0);
  }
  local_4._0_1_ = 4;
  *(undefined ***)(param_1 + 0x60c) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x60c));
  local_4._0_1_ = 0xb;
  FUN_00576010();
  local_4._0_1_ = 0xc;
  BaseWatcher::set((BaseWatcher *)(param_1 + 0x5c0),(Watchable *)0x0);
  local_4._0_1_ = 3;
  *(undefined ***)(param_1 + 0x500) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x500));
  local_4._0_1_ = 0xd;
  FUN_00576010();
  local_4._0_1_ = 0xe;
  if (*(int *)(param_1 + 0x488) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x488),(Watchable *)0x0);
  }
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0x3c8) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x3c8));
  local_4._0_1_ = 0xf;
  FUN_00576010();
  local_4._0_1_ = 0x10;
  if (*(int *)(param_1 + 0x270) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x270),(Watchable *)0x0);
  }
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x1b0) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x1b0));
  local_4._0_1_ = 0x11;
  FUN_00420d10();
  local_4._0_1_ = 0x12;
  FUN_00576010();
  local_4._0_1_ = 0x13;
  if (*(int *)(param_1 + 0xcc) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xcc),(Watchable *)0x0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0xc) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0xc));
  local_4 = 0xffffffff;
  FUN_00576010();
  ExceptionList = local_c;
  return;
}

