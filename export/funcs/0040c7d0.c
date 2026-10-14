
undefined4 __fastcall FUN_0040c7d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xb0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    piVar1 = (int *)(param_1 + 0xb4);
    iVar2 = 5;
    do {
      if (*piVar1 != 0) {
        FUN_0040e990();
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return *(undefined4 *)(param_1 + 0xb0);
}

