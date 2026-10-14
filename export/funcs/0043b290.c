
void __thiscall FUN_0043b290(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int aiStack_8 [2];
  
  uVar1 = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0x8c))(param_2,DAT_00673344);
  }
  iVar2 = FUN_00439590(uVar1);
  if (*(int *)(iVar2 + 8) == 0) {
    FUN_004397a0(uVar1);
  }
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  param_2 = uVar1;
  FUN_00432240(aiStack_8,&param_2);
  if (aiStack_8[0] == *(int *)(param_1 + 0x24)) {
    puVar3 = (undefined4 *)FUN_00411c50(0x10000,1);
    (**(code **)FDUMP_exref)
              (*puVar3,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,param_2);
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(aiStack_8[0] + 0x10);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x48);
  if (iVar2 == 0) {
    if (DAT_0067ecd0 != (int *)0x0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x405,
                 "Failed to get start location\n");
    }
    param_2 = uVar1;
    FUN_00432240(aiStack_8,&param_2);
    if (aiStack_8[0] == *(int *)(param_1 + 0x24)) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,param_2);
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(aiStack_8[0] + 0x10);
    }
    iVar2 = *(int *)(*piVar4 + 4);
  }
  FUN_0043bab0(iVar2);
  FUN_0043b6b0(iVar2);
  return;
}

