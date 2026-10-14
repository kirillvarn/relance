
void __thiscall FUN_00555f00(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (param_2 == 1) {
      (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 8),param_3);
      return;
    }
    if (param_2 == 2) {
      (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(param_1 + 8),param_3);
      return;
    }
    if (param_2 == 3) {
      (**(code **)(*piVar1 + 0x30))(*(undefined4 *)(param_1 + 8),param_3);
    }
  }
  return;
}

