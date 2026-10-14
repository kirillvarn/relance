
void FUN_004c7950(void)

{
  IObjRW *pIVar1;
  IBehaviorManager *this;
  
  pIVar1 = (IObjRW *)FUN_0054baf0();
  this = GetBehaviorManager(pIVar1);
  if (this != (IBehaviorManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004c7965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IBehaviorManager::reset_current_behavior_direction(this);
    return;
  }
  return;
}

