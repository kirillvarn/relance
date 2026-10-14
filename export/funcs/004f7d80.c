
void __thiscall FUN_004f7d80(int param_1,int param_2)

{
  Watchable *pWVar1;
  
  if (param_2 == 0) {
    pWVar1 = (Watchable *)0x0;
  }
  else {
    pWVar1 = (Watchable *)(param_2 + 8);
  }
  if (pWVar1 != *(Watchable **)(param_1 + 0x44)) {
                    /* WARNING: Could not recover jumptable at 0x004f7d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x44),pWVar1);
    return;
  }
  return;
}

