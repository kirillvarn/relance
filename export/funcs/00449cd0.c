
undefined4 __fastcall FUN_00449cd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x518);
  while (((*piVar3 == 0 || (iVar1 = *(int *)(*piVar3 + 0x1b8), iVar1 == 0)) ||
         (*(int *)(iVar1 + 0x34) != 1))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (0x3f < iVar2) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x518 + iVar2 * 4);
}

