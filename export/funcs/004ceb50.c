
void __fastcall FUN_004ceb50(IDPMsgHandler *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bdc18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc0) != 0) {
    ExceptionList = &local_c;
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xc0),(Watchable *)0x0);
  }
  local_4 = 0xffffffff;
  *(undefined ***)param_1 = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect(param_1);
  ExceptionList = local_c;
  return;
}

