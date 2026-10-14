
void __thiscall FUN_004568d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    while (iVar2 = piVar3[2], iVar2 != param_2) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return;
      }
    }
    if (iVar2 != 0) {
      FUN_00454bb0();
      FUN_005b7e1d(iVar2);
    }
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}

