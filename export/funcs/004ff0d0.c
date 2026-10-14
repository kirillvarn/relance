
void __fastcall FUN_004ff0d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bf70c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005da71c;
  iVar1 = 0;
  local_4 = 9;
  if (0 < (int)param_1[2]) {
    piVar2 = param_1 + 3;
    do {
      if (*piVar2 != 0) {
        (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,*piVar2);
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd;
    } while (iVar1 < (int)param_1[2]);
  }
  piVar2 = (int *)param_1[0xaa];
  if (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 0x2d) & 8) != 0) {
      (**(code **)(*piVar2 + 8))();
    }
    FUN_00537ad0();
    param_1[0xaa] = 0;
  }
  local_4._0_1_ = 10;
  FUN_004de730();
  local_4._0_1_ = 8;
  FUN_004de730();
  local_4._0_1_ = 0xb;
  FUN_004de730();
  local_4._0_1_ = 7;
  FUN_004de730();
  local_4._0_1_ = 0xc;
  FUN_004de730();
  local_4._0_1_ = 6;
  FUN_004de730();
  local_4._0_1_ = 0xd;
  FUN_004de730();
  local_4._0_1_ = 5;
  FUN_004de730();
  local_4._0_1_ = 0xe;
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x5e),(uchar *)param_1[0x5f],param_1[0x60]);
  FUN_005b7e1d(param_1[0x5f]);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  local_4._0_1_ = 4;
  FUN_004de730();
  local_4._0_1_ = 0xf;
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x54),(uchar *)param_1[0x55],param_1[0x56]);
  FUN_005b7e1d(param_1[0x55]);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  local_4._0_1_ = 3;
  FUN_004de730();
  local_4._0_1_ = 0x10;
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x4a),(uchar *)param_1[0x4b],param_1[0x4c]);
  FUN_005b7e1d(param_1[0x4b]);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  local_4._0_1_ = 2;
  FUN_004de730();
  local_4._0_1_ = 0x11;
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x40),(uchar *)param_1[0x41],param_1[0x42]);
  FUN_005b7e1d(param_1[0x41]);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  local_4._0_1_ = 1;
  FUN_004de730();
  local_4._0_1_ = 0x12;
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x36),(uchar *)param_1[0x37],param_1[0x38]);
  FUN_005b7e1d(param_1[0x37]);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004de730();
  local_4 = 0xffffffff;
  FUN_005b7ec6(param_1 + 3,0x34,2,FUN_00426de0);
  ExceptionList = pvStack_c;
  return;
}

