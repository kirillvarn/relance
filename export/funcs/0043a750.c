
void __thiscall FUN_0043a750(int param_1,int param_2,int param_3)

{
  NewsBroadcastProperties *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x24)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,param_2);
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
      this = *(NewsBroadcastProperties **)(iVar3 + 8);
      if (this != (NewsBroadcastProperties *)0x0) {
        NewsBroadcastProperties::~NewsBroadcastProperties(this);
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

