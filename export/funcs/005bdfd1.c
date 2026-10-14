
void Unwind_005bdfd1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x005bdfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BaseWatcher::~BaseWatcher(*(BaseWatcher **)(unaff_EBP + 8));
  return;
}

