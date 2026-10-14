
void __fastcall FUN_00419f10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  FUN_00419100();
  FUN_005b7e1d(piVar1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return;
}

