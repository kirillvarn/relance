
undefined4 __thiscall FUN_00449d10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x518);
  while ((*piVar2 == 0 || (*(int *)(*piVar2 + 0x300) != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x3f < iVar1) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x518 + iVar1 * 4);
}

