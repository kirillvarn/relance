
undefined4 __thiscall FUN_0051a190(int param_1,int param_2)

{
  char cVar1;
  IObjRW *pIVar2;
  IBehaviorManager *this;
  
  cVar1 = FUN_0045a740();
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_0051d7f0(param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  if (param_2 != 0x3f) {
    return 0;
  }
  *(bool *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) == '\0';
  if (*(int *)(param_1 + -0x38) == 0) {
    pIVar2 = (IObjRW *)0x0;
  }
  else {
    pIVar2 = (IObjRW *)(*(int *)(param_1 + -0x38) + -8);
  }
  this = GetBehaviorManager(pIVar2);
  if (this != (IBehaviorManager *)0x0) {
    IBehaviorManager::update_level_camera(this,*(bool *)(param_1 + 0x44));
  }
  return 1;
}

