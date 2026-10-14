
undefined4 __fastcall FUN_00503330(int param_1)

{
  int *piVar1;
  char cVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && ((*(byte *)(*(int *)(param_1 + 8) + 8) & 2) == 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0xd4) == 0)) {
    return 1;
  }
  return 0;
}

