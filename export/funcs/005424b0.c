
void __thiscall FUN_005424b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x174))(param_2);
  }
  return;
}

