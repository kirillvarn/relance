
void __fastcall FUN_005582a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)piVar3[2];
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_005b7e1d(*piVar1);
        }
        FUN_005b7e1d(piVar1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = (int *)*piVar1;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar1 = piVar2;
  }
  return;
}

