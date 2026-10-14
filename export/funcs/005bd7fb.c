
void Unwind_005bd7fb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x005bd7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BaseWatcher::~BaseWatcher(*(BaseWatcher **)(unaff_EBP + -0x10));
  return;
}

