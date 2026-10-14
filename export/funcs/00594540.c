
void __fastcall FUN_00594540(int param_1)

{
  int *piVar1;
  int local_4;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  local_4 = param_1;
  if (piVar1 != *(int **)(param_1 + 4)) {
    do {
      FUN_005b7e1d(*(undefined4 *)((int)piVar1 + 0xc));
      FUN_0046dfb0(&local_4,piVar1);
      piVar1 = (int *)local_4;
    } while (local_4 != *(int *)(param_1 + 4));
  }
  return;
}

