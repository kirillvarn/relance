
void __fastcall FUN_004f9450(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_005d9dac;
  DAT_00674f58 = DAT_00674f58 + -1;
  *param_1 = &PTR_LAB_005d9aac;
  if (param_1[0x11] != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x11),(Watchable *)0x0);
  }
  return;
}

