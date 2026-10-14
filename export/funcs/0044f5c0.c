
void __thiscall FUN_0044f5c0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar1 = *(int **)(param_1 + 0xac);
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      while (piVar2[8] != param_2) {
        piVar2 = (int *)*piVar2;
        if (piVar2 == piVar1) {
          return;
        }
      }
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_005b7e1d(piVar2);
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    }
  }
  return;
}

