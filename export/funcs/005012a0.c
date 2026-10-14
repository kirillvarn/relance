
void __fastcall FUN_005012a0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2a8);
  if (piVar1 != (int *)0x0) {
    if ((*(byte *)(piVar1 + 0x2d) & 8) != 0) {
      (**(code **)(*piVar1 + 8))();
    }
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  return;
}

