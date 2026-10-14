
undefined4 FUN_004575e0(int param_1)

{
  if ((*(char *)(param_1 + 0x73) == '\0') && (*(char *)(param_1 + 0x72) == '\0')) {
    FUN_0044f5c0(*(undefined4 *)(param_1 + 0x7c));
    if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x60))();
      (**(code **)(**(int **)(param_1 + 0x7c) + 8))(*(int **)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  return 0;
}

