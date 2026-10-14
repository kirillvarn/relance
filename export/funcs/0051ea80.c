
void __fastcall FUN_0051ea80(IDPMsgHandler *param_1)

{
  IDPMsgHandler::OnDisconnect(param_1);
  FUN_0041a0f0(0,0x40400000);
  param_1[0xf8] = (IDPMsgHandler)0x0;
  return;
}

