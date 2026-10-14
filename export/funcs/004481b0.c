
void __fastcall FUN_004481b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xa4) + iVar2 * 8 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x88))(0);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0xa8) + iVar2 * 8 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x88))(0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return;
}

