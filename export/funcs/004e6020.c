
undefined4 * __fastcall FUN_004e6020(undefined4 *param_1)

{
  BaseWatcher *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005be8f8;
  local_c = ExceptionList;
  this = (BaseWatcher *)(param_1 + 10);
  ExceptionList = &local_c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)this = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  BaseWatcher::set(this,(Watchable *)0x0);
  *param_1 = &PTR_FUN_005d6eac;
  param_1[0xd] = 0;
  local_4 = 1;
  if (*(int *)this != 0) {
    BaseWatcher::set_pointer(this,(Watchable *)0x0);
  }
  param_1[0xc] = 0;
  local_4 = 2;
  FUN_0059f860();
  local_4._0_1_ = 3;
  FUN_0055dec0();
  param_1[0xe1] = &PTR_LAB_005cbed8;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  local_4._0_1_ = 7;
  FUN_00405890();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_0051b2f0();
  *param_1 = &PTR_FUN_005d8e3c;
  param_1[0xe] = &PTR_LAB_005d8d84;
  param_1[0x2d] = &PTR_OnReceive_005d8d74;
  param_1[0xd9] = &PTR_FUN_005d8d68;
  param_1[0xe1] = &PTR_LAB_005d8d60;
  *(undefined2 *)(param_1 + 0xed) = *(undefined2 *)SUBOBJ_ID_NONE_exref;
  *(undefined1 *)(param_1 + 0x134) = 0;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  ExceptionList = local_c;
  return param_1;
}

