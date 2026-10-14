
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005588a0(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_00579290();
  FUN_00439200();
  DAT_00668761 = 1;
  DAT_006799e4 = 0;
  FUN_004c4910(&param_1);
  iVar2 = param_2;
  FUN_004c4a10(param_2);
  FUN_0043d590(param_1);
  FUN_00557550();
  FUN_0042acb0(2);
  RefreshLoadingProgress();
  FUN_00428030(3);
  RefreshLoadingProgress();
  FUN_00412070(0x3f800000);
  FUN_00412050(0,(float)_DAT_005c89b8 / _DAT_0061650c);
  RefreshLoadingProgress();
  FUN_00558db0();
  FUN_0041dde0("arrow",0);
  RefreshLoadingProgress();
  FUN_004564d0();
  _DAT_006799e0 = 0;
  RefreshLoadingProgress();
  DAT_006799dc = 0;
  DAT_006799dd = 0;
  DAT_006799de = 0;
  FUN_004489f0(param_3 == '\0');
  DAT_00668760 = 1;
  RefreshLoadingProgress();
  if (iVar2 == 0) {
    FUN_0043b290(param_1);
  }
  else {
    FUN_0043b570(param_1);
    FUN_0043bab0(iVar2);
    FUN_0043b6b0(iVar2);
  }
  RefreshLoadingProgress();
  iVar2 = FUN_0043a460();
  if (((iVar2 == 0) || (*(char *)(iVar2 + 0x517) == '\0')) && (param_3 == '\0')) {
    if ((iVar2 != 0) && (cVar1 = FUN_0044ab60(), cVar1 == '\0')) {
      DAT_006799e4 = 0;
    }
    FUN_0045b2d0((float)DAT_006799e4 * _DAT_005d1494);
  }
  RefreshLoadingProgress();
  _DAT_00610a0c = RtcSlider::get_fps_cap();
  return 1;
}

