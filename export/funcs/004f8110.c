
void __fastcall FUN_004f8110(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,7);
    (**(code **)(**(int **)(param_1 + 0x6c) + 8))(*(int **)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    (**(code **)(**(int **)Alchemy_exref + 0x58))(*(int **)Alchemy_exref,*(int *)(param_1 + 0x70));
    (**(code **)(**(int **)(param_1 + 0x70) + 8))(*(int **)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}

