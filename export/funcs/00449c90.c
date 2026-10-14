
undefined4 __thiscall FUN_00449c90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x518);
  while ((*piVar3 == 0 || (*(int *)(*piVar3 + 0x154) != param_2))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (0x3f < iVar2) {
      return uVar1;
    }
  }
  if (iVar2 != -1) {
    uVar1 = *(undefined4 *)(param_1 + 0x518 + iVar2 * 4);
  }
  return uVar1;
}

