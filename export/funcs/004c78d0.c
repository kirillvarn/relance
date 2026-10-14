
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c78d0(float param_1,float param_2,undefined4 param_3)

{
  IObjRW *pIVar1;
  IBehaviorManager *this;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (((param_1 == _DAT_005c7474) && (param_2 == _DAT_005c7474)) ||
     ((*(char *)(DAT_00674aa0 + 0x5b9) == '\0' && (*(char *)(DAT_00674aa0 + 0x5ba) == '\0')))) {
    pIVar1 = (IObjRW *)FUN_0054baf0();
    this = GetBehaviorManager(pIVar1);
    if (this != (IBehaviorManager *)0x0) {
      local_c = param_1;
      local_8 = param_2;
      local_4 = param_3;
      IBehaviorManager::update_current_behavior_direction(this,(Vector *)&local_c);
    }
  }
  return;
}

