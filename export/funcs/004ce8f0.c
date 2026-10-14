
void __fastcall FUN_004ce8f0(undefined4 *param_1)

{
  IDPMsgHandler *this;
  BaseWatcher *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_14 [4];
  IDPMsgHandler *pIStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_005bdbdb;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d764c;
  param_1[0x1f] = &PTR_LAB_005d761c;
  piVar3 = (int *)param_1[0x16d];
  local_4 = 5;
  if (piVar3 != (int *)0x0) {
    iVar2 = piVar3[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
  }
  if (param_1[0x11d] != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[0x11d]);
    param_1[0x11d] = 0;
  }
  if ((undefined4 *)param_1[0x16c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16c])(1);
  }
  param_1[0x16c] = 0;
  param_1[0x16c] = 0;
  piVar3 = (int *)*DAT_006735b8;
  if (piVar3 != DAT_006735b8) {
    do {
      if (piVar3[0xf] != 0) {
        FUN_004ceb30(1);
      }
      piVar3[0xf] = 0;
      piVar3 = (int *)FUN_00516f70(auStack_14,piVar3);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_006735b8);
  }
  this = (IDPMsgHandler *)(param_1 + 0x12e);
  DAT_006748f8 = 0;
  local_4._0_1_ = 6;
  pIStack_10 = this;
  BaseWatcher::set((BaseWatcher *)(param_1 + 0x15e),(Watchable *)0x0);
  local_4._0_1_ = 4;
  *(undefined ***)this = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect(this);
  local_4._0_1_ = 3;
  if (param_1[0x11d] != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[0x11d]);
    param_1[0x11d] = 0;
  }
  this_00 = (BaseWatcher *)(param_1 + 0xa1);
  local_4._0_1_ = 8;
  pIStack_10 = (IDPMsgHandler *)this_00;
  FUN_004cabd0();
  local_4._0_1_ = 7;
  FUN_004cab70();
  local_4._0_1_ = 10;
  FUN_004cbb40();
  FUN_004de730();
  local_4._0_1_ = 2;
  if (*(int *)this_00 != 0) {
    BaseWatcher::set_pointer(this_00,(Watchable *)0x0);
  }
  local_4._0_1_ = 0xc;
  pIStack_10 = (IDPMsgHandler *)(param_1 + 0x2d);
  FUN_004cabd0();
  local_4._0_1_ = 0xb;
  FUN_004cab70();
  local_4._0_1_ = 0xe;
  FUN_004cbb40();
  FUN_004de730();
  local_4._0_1_ = 1;
  BaseWatcher::set((BaseWatcher *)(param_1 + 0x2d),(Watchable *)0x0);
  param_1[0x1f] = &PTR_FUN_005d6eac;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(param_1 + 0x29) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x29),(Watchable *)0x0);
  }
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar3 = (int *)param_1[3];
  local_4 = 0xffffffff;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    (**(code **)(*piVar3 + 0x28))();
  }
  FUN_0059dc00(param_1);
  ExceptionList = pvStack_c;
  return;
}

