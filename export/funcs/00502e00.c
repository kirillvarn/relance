
void __fastcall FUN_00502e00(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

