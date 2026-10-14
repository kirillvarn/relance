
undefined4 * __fastcall FUN_0051b2f0(undefined4 *param_1)

{
  BaseWatcher *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bff0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040f150();
  this = (BaseWatcher *)(param_1 + 0x30);
  *(undefined4 *)this = 0;
  param_1[0x31] = 0;
  *param_1 = &PTR_LAB_005dbf5c;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  local_4 = 2;
  if (*(int *)this != 0) {
    BaseWatcher::set_pointer(this,(Watchable *)0x0);
  }
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfc;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  param_1[0x32] = 0x420c0000;
  FUN_0040f8c0(0x420c0000);
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  ExceptionList = local_c;
  return param_1;
}

