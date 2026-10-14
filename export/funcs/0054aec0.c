
void __fastcall FUN_0054aec0(int param_1)

{
  CEqObj *this;
  bool bVar1;
  
  FUN_00577590("IDR_SPACE");
  FUN_00576190();
  FUN_004348b0();
  FUN_00435630();
  FUN_00549bc0(0,0);
  FUN_00518410();
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x1b0));
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x3c8));
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0x500));
  FUN_004c77a0();
  *(undefined1 *)(param_1 + 0xba9) = 0;
  *(undefined1 *)(param_1 + 0xba8) = 0;
  if (*(char *)(param_1 + 0xbaa) != '\0') {
    *(undefined1 *)(param_1 + 0xbaa) = 0;
  }
  DAT_0067dcc8 = 0;
  *(undefined1 *)(param_1 + 0xbab) = 0;
  if ((((DAT_00679744 != 0) && (DAT_00679744 != 8)) && (DAT_00679744 != -4)) &&
     ((this = *(CEqObj **)(DAT_00679744 + 8), this != (CEqObj *)0x0 &&
      ((*(uint *)(this + 0x4c) & 0x503) == 0x503)))) {
    bVar1 = CEqObj::is_control_excluded(this,7);
    if (bVar1) {
      CEqObj::set_control_exclusion(this,0);
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00554ab0(0);
  FUN_0041dde0("Arrow",1);
  CObject::ReleaseAll();
  FUN_0051fbc0();
  FUN_0052a690();
  FUN_00502aa0();
  FUN_00511010();
  FUN_004fe180();
  FUN_004f73c0();
  FUN_005382f0();
  FUN_00538520();
  FUN_00537ab0();
  FUN_00538ab0();
  FUN_004284f0();
  FUN_0042ad30(1);
  AnimDB::Shutdown();
  FUN_0045a140();
  return;
}

