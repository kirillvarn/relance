
void __thiscall FUN_0043ae70(int param_1,int param_2,int param_3)

{
  ScriptBehavior *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x10)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_4 + 0x10);
  }
  if (*(int *)(iVar2 + 4) != 0) {
    param_2 = 0;
    cVar1 = FUN_0043ce90(&param_2,1);
    iVar2 = param_3;
    while ((iVar3 = 0, cVar1 != '\0' && (iVar3 = param_2, **(int **)(param_2 + 8) != iVar2))) {
      cVar1 = FUN_0043ce90(&param_2,1);
    }
    local_4 = iVar3;
    if (iVar3 != 0) {
      this = *(ScriptBehavior **)(iVar3 + 8);
      if (this != (ScriptBehavior *)0x0) {
        ScriptBehavior::~ScriptBehavior(this);
        FUN_005b7e1d(this);
      }
      FUN_0043cf80(&local_4);
      return;
    }
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\MirrorDatabase.h",0xf6,
               "Cannot find record to remove\n");
  }
  return;
}

