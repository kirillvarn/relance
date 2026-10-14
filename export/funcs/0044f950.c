
void __fastcall FUN_0044f950(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x58))(*(int **)(param_1 + 0x3c),0);
  }
  return;
}

