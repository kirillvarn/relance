
undefined4 __thiscall FUN_0052d410(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  CELauncher *this;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  
  this = *(CELauncher **)(param_1 + 4);
  iVar5 = (**(code **)(*(int *)this + 0x90))(param_2);
  if (iVar5 == 9) {
    FUN_0052cfd0();
    (**(code **)(*(int *)this + 0x94))();
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    cVar4 = FUN_00548eb0(uVar6);
    if ((cVar4 != '\0') && (*(char *)(*(int *)(this + 0x4c) + 0x78) != '\0')) {
      iVar5 = FUN_004c45d0(*(undefined4 *)(*(int *)(this + 0x4c) + 8));
      if (iVar5 != 0) {
        uVar7 = CELauncher::GetProjectilesPerFire(this);
        bVar3 = *(int *)(iVar5 + 0x14) <= (int)uVar7;
        if (bVar3) {
          uVar1 = *(undefined2 *)(iVar5 + 2);
        }
        else {
          uVar1 = *(undefined2 *)(iVar5 + 2);
        }
        FUN_004c4320(!bVar3,uVar1,uVar7);
      }
    }
    uVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    FUN_005532d0(uVar6);
    return 1;
  }
  if (iVar5 == 3) {
    iVar5 = FUN_0054baf0();
    if (*(int *)(param_1 + 8) == iVar5) {
      cVar4 = FUN_0054bc80();
      if (cVar4 != '\0') {
        FUN_00428680(*(undefined4 *)(param_1 + 0x14),0,0,0);
      }
    }
  }
  else if ((5 < iVar5) && (iVar5 < 9)) {
    piVar2 = *(int **)(param_1 + 8);
    piVar8 = (int *)FUN_0054baf0();
    if (piVar2 == piVar8) {
      (**(code **)(*piVar2 + 0x1d0))();
      return 0;
    }
  }
  return 0;
}

