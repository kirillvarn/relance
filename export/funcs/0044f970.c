
void __thiscall FUN_0044f970(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x48) + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x48))(param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4c));
  }
  return;
}

