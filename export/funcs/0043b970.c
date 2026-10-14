
void __thiscall FUN_0043b970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_8;
  int local_4;
  
  FUN_0045b380();
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  local_8 = uVar1;
  FUN_00432240(&local_4,&local_8);
  if (local_4 == *(int *)(param_1 + 0x10)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,local_8);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_4 + 0x10);
  }
  piVar4 = (int *)(iVar3 + 0xc);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar3 = FUN_00439610(uVar1);
    if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
      (**(code **)(*DAT_0067ecd0 + 0xa0))(uVar1,DAT_00673344,0);
    }
    if (*(undefined4 **)(iVar3 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar3 + 8))(1);
    }
    iVar2 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar3 + 8) = 0;
    if (iVar2 != 0) {
      FUN_0043a140();
      FUN_005b7e1d(iVar2);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0x98))(param_2,DAT_00673344);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  piVar4 = (int *)FUN_0059da10("NN_Inventory");
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 8))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*piVar4 + 8))();
      (**(code **)(*piVar4 + 0xa8))(0x4b,0,0);
    }
  }
  return;
}

