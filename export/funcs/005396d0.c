
void __fastcall FUN_005396d0(int param_1)

{
  Watchable *this;
  
  if (param_1 == 0) {
    this = (Watchable *)0x0;
  }
  else {
    this = (Watchable *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x005396db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Watchable::unwatch(this);
  return;
}

