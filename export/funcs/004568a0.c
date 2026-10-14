
undefined1 __fastcall FUN_004568a0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar3 = (int *)*piVar1;
  uVar2 = 1;
  if (piVar3 != piVar1) {
    while ((*(char *)(piVar3[2] + 6) == '\0' || (*(char *)(piVar3[2] + 0x15) != '\0'))) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

