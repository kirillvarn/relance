
void __fastcall FUN_004c8630(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005d6eac;
  if (param_1[10] != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  return;
}

