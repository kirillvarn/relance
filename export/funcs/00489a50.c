
void __fastcall FUN_00489a50(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x60))();
    (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

