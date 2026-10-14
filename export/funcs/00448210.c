
void __thiscall FUN_00448210(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xa4) + iVar2 * 8 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x80))(param_2);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0xa8) + iVar2 * 8 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x80))(param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return;
}

