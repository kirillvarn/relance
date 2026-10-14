
void __thiscall FUN_00525040(undefined4 *param_1,int param_2)

{
  int iVar1;
  IAction *pIVar2;
  
  iVar1 = ActionDB::get_action_count((ActionDB *)(param_1 + 8));
  if (iVar1 == 0) {
    iVar1 = param_1[0x10];
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x14) == 2) {
        if (param_2 == 0) {
          param_2 = (**(code **)*param_1)();
          iVar1 = param_1[0x10];
        }
        pIVar2 = (IAction *)FUN_005361e0(iVar1,param_1,param_2);
        ActionDB::add((ActionDB *)(param_1 + 8),pIVar2);
        return;
      }
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x79c,
                 "Explosion process for asteroid should be set to none");
      return;
    }
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x7a5,
               "asteroid_mine told to explode but has no explosion archetype");
  }
  return;
}

