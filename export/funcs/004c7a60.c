
void FUN_004c7a60(bool param_1)

{
  IObjRW *pIVar1;
  IBehaviorManager *this;
  
  pIVar1 = (IObjRW *)FUN_0054baf0();
  this = GetBehaviorManager(pIVar1);
  if (this != (IBehaviorManager *)0x0) {
    IBehaviorManager::update_current_behavior_brake_reverse(this,param_1);
  }
  return;
}

