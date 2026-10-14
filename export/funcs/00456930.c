
void __fastcall FUN_00456930(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 8);
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = piVar3[2];
      if (iVar1 != 0) {
        FUN_00454bb0();
        FUN_005b7e1d(iVar1);
      }
      piVar2 = (int *)*piVar3;
      *(int **)piVar3[1] = piVar2;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_005b7e1d(piVar3);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 8));
  }
  return;
}

