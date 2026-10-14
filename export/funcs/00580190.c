
void __fastcall FUN_00580190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c4240;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e4984;
  param_1[0x1f] = &PTR_OnReceive_005e4978;
  local_4 = 4;
  FUN_0059eee0();
  FUN_0059eee0();
  FUN_0059eee0();
  FUN_0059eee0();
  if ((((*(char *)(param_1 + 0x19d) != '\0') || (*(char *)((int)param_1 + 0x675) != '\0')) ||
      (*(char *)((int)param_1 + 0x676) != '\0')) || (*(char *)((int)param_1 + 0x677) != '\0')) {
    FUN_0059d960(param_1);
    DAT_0067c4c4 = 0;
  }
  local_4._0_1_ = 3;
  FUN_0059ef20();
  local_4._0_1_ = 2;
  FUN_0059ef20();
  local_4._0_1_ = 1;
  FUN_0059ef20();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0059ef20();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

