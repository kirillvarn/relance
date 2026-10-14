
void __fastcall FUN_004520c0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b9e5e;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_005b7ec6(param_1 + 0x278,0x3c,0x20,IDPMsgHandler::OnDisconnect);
  local_4 = local_4 & 0xffffff00;
  FUN_005b7ec6(param_1 + 0x78,0x10,0x20,IDPMsgHandler::OnDisconnect);
  local_4 = 0xffffffff;
  FUN_0044fd80();
  ExceptionList = local_c;
  return;
}

