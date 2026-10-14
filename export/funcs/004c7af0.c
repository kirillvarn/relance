
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7af0(float param_1)

{
  float fVar1;
  IObjRW *pIVar2;
  IBehaviorManager *pIVar3;
  
  DAT_00673564 = param_1;
  if ((float)_DAT_005d5060 <= param_1) {
    if (_DAT_005c75dc < param_1) {
      DAT_00673564 = 1.0;
    }
  }
  else {
    DAT_00673564 = -1.0;
  }
  fVar1 = DAT_00673564;
  pIVar2 = (IObjRW *)FUN_0054baf0();
  pIVar3 = GetBehaviorManager(pIVar2);
  if (pIVar3 != (IBehaviorManager *)0x0) {
    IBehaviorManager::update_current_behavior_throttle(pIVar3,fVar1);
  }
  if (DAT_00673564 == _DAT_005c7474) {
    pIVar2 = (IObjRW *)FUN_0054baf0();
    pIVar3 = GetBehaviorManager(pIVar2);
    if (pIVar3 != (IBehaviorManager *)0x0) {
      IBehaviorManager::update_current_behavior_cruise(pIVar3,false);
    }
  }
  return;
}

