
void __fastcall FUN_0040e990(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0042e160();
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  return;
}

