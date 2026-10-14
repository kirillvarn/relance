
void FUN_004c7a30(StrafeDir param_1)

{
  IObjRW *pIVar1;
  IBehaviorManager *this;
  
  pIVar1 = (IObjRW *)FUN_0054baf0();
  this = GetBehaviorManager(pIVar1);
  if (this != (IBehaviorManager *)0x0) {
    IBehaviorManager::update_current_behavior_slide_strafe_burst(this,param_1);
  }
  return;
}

