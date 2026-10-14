
void FUN_0053d940(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005416c0(*param_2,0);
  if (iVar1 == 0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\IClientS.cpp",0x5f0,
               "SPObjActivate failed... probably jump-gate in old system closing?\n");
  }
  else {
    if (*(int *)(iVar1 + 0x1c) == 2) {
      FUN_005484c0(*(undefined1 *)(param_2 + 1),param_2[2]);
      return;
    }
    if (*(int *)(iVar1 + 0x1c) == 1) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\IClientS.cpp",0x5e8,
                 "Combat mode no longer supported! (Ignorable)");
      return;
    }
  }
  return;
}

