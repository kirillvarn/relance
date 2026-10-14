
void FUN_00553250(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  bVar1 = false;
  piVar2 = (int *)FUN_0054baf0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar2 + 0x20))();
  iVar4 = (**(code **)(*param_1 + 0x20))();
  if (iVar4 == iVar3) {
    uVar5 = FUN_005416c0(*(undefined4 *)(param_2 + 0x14),0);
    uVar5 = FUN_0054baf0(uVar5);
    iVar4 = FUN_0045a490(uVar5);
    if (iVar4 == -1) {
      bVar1 = true;
    }
  }
  if (*(int *)(param_2 + 0x14) == iVar3) {
    uVar5 = FUN_0054baf0(param_1);
    iVar3 = FUN_0045a490(uVar5);
    if (iVar3 == -1) {
      DAT_00679968 = 1;
      return;
    }
  }
  if (bVar1) {
    DAT_00679968 = 1;
    return;
  }
  return;
}

