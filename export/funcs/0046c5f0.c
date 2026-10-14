
void __fastcall FUN_0046c5f0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  FUN_005b7e1d(piVar1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return;
}

