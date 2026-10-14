
void __fastcall FUN_004d7a70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005be386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d8310;
  param_1[0xe] = &PTR_LAB_005d8344;
  param_1[0x2d] = &PTR_OnReceive_005d8304;
  param_1[0xd9] = &PTR_LAB_005d82fc;
  param_1[0xda] = &PTR_LAB_005d82f4;
  DAT_00674a58 = 0;
  local_4 = 3;
  if (*(int *)(param_1 + 0xe4) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xe4),(Watchable *)0x0);
  }
  FUN_005b7e1d(param_1[0xe0]);
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  local_4._0_1_ = 1;
  FUN_00576010();
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

