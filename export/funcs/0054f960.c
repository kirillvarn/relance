
void __thiscall FUN_0054f960(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0xc) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  if (param_3 != (int *)0x0) {
    *(int **)(param_1 + 0x10) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  return;
}

