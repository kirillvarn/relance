
void __fastcall FUN_004d64c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005be239;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d8104;
  param_1[0xe] = &PTR_LAB_005d804c;
  param_1[0x2d] = &PTR_OnReceive_005d803c;
  DAT_00674a10 = 0;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  if (param_1[0xfb] != -1) {
    FUN_0059eee0();
  }
  local_4._0_1_ = 4;
  FUN_0059ef20();
  local_4._0_1_ = 6;
  if (param_1[0xf0] != -1) {
    FUN_0059eee0();
  }
  local_4._0_1_ = 3;
  FUN_0059ef20();
  local_4._0_1_ = 7;
  if (param_1[0xe5] != -1) {
    FUN_0059eee0();
  }
  local_4._0_1_ = 2;
  FUN_0059ef20();
  local_4._0_1_ = 8;
  if (param_1[0xda] != -1) {
    FUN_0059eee0();
  }
  local_4._0_1_ = 1;
  FUN_0059ef20();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0059fa50();
  *param_1 = &PTR_FUN_005d6eac;
  local_4 = 0xffffffff;
  if (param_1[10] != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

