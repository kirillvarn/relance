
int __thiscall FUN_00489f70(int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x60))();
    (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

