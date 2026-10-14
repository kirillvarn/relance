
void __thiscall FUN_00439690(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  uVar3 = param_2;
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x10)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_4 + 0x10);
  }
  piVar1 = (int *)(iVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_2 = uVar3;
    FUN_00432240(&local_4,&param_2);
    if (local_4 == *(int *)(param_1 + 0x10)) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(local_4 + 0x10);
    }
    if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
      (**(code **)(*DAT_0067ecd0 + 0xa0))(uVar3,DAT_00673344,0);
    }
    if (*(undefined4 **)(iVar4 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar4 + 8))(1);
    }
    iVar2 = *(int *)(iVar4 + 4);
    *(undefined4 *)(iVar4 + 8) = 0;
    if (iVar2 != 0) {
      FUN_0043a140();
      FUN_005b7e1d(iVar2);
    }
    *(undefined4 *)(iVar4 + 4) = 0;
  }
  return;
}

