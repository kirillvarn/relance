
void __fastcall FUN_005abc60(int param_1)

{
  if (*(int **)(param_1 + 0x234) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x234) + 4))(1);
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  return;
}

