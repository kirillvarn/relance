
void __thiscall FUN_0052dd40(int param_1,Vector *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  Munition *pMVar5;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_0052cfd0();
    bVar2 = SinglePlayer();
    if (!bVar2) {
      (**(code **)(*piVar1 + 0x94))();
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    FUN_005532d0(uVar3);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    if ((iVar4 == 0) || (((byte)*(undefined4 *)(iVar4 + 0x4c) & 3) != 3)) {
      iVar4 = FUN_0054bb00();
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xb4);
    }
    if (iVar4 != 0) {
      CEGun::SetTargetPoint(*(CEGun **)(param_1 + 4),param_2);
    }
    if (*(CEGun **)(param_1 + 4) == (CEGun *)0x0) {
      pMVar5 = (Munition *)0x0;
    }
    else {
      pMVar5 = CEGun::MunitionArch(*(CEGun **)(param_1 + 4));
    }
    if (*(int *)(pMVar5 + 0x90) == 0) {
      FUN_0052dde0(param_2);
    }
  }
  return;
}

