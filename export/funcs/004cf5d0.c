
void __fastcall FUN_004cf5d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bdcf8;
  puVar1 = (undefined4 *)param_1[0x105];
  local_4 = 2;
  puVar3 = (undefined4 *)*puVar1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_004d4930(local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(param_1[0x105]);
  param_1[0x105] = 0;
  param_1[0x106] = 0;
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

