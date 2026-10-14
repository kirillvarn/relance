
void FUN_004c79a0(bool param_1)

{
  IObjRW *pIVar1;
  IBehaviorManager *this;
  
  pIVar1 = (IObjRW *)FUN_0054baf0();
  this = GetBehaviorManager(pIVar1);
  if (this != (IBehaviorManager *)0x0) {
    IBehaviorManager::update_current_behavior_auto_level(this,param_1);
  }
  return;
}

