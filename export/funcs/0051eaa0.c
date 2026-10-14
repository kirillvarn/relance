
void __thiscall FUN_0051eaa0(int param_1,int param_2)

{
  Watchable *pWVar1;
  
  FUN_004c7950();
  FUN_004c7a30(0);
  if (param_2 == 0) {
    pWVar1 = (Watchable *)0x0;
  }
  else {
    pWVar1 = (Watchable *)(param_2 + 8);
  }
  if (pWVar1 != *(Watchable **)(param_1 + 0xc0)) {
                    /* WARNING: Could not recover jumptable at 0x0051ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xc0),pWVar1);
    return;
  }
  return;
}

