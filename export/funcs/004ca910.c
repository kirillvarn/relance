
void __fastcall FUN_004ca910(BaseWatcher *param_1)

{
  if (*(int *)param_1 != 0) {
    BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = (BaseWatcher)0x0;
  param_1[0x15] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[8] = (BaseWatcher)0x1;
  param_1[0x20] = (BaseWatcher)0x1;
  return;
}

