
undefined4 __thiscall FUN_005a2710(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((*(char *)(param_1 + 0x8a2) != '\0') && (param_2[1] != 1)) && (*param_2 == -1)) {
    *(int *)(param_1 + 0x8ac) = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x8a4) <= *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x8ac) = 0xffffffff;
    }
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 0x8ac);
      uVar3 = 0;
      if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x8a4))) &&
         ((iVar1 < 0x100 && (piVar2 = *(int **)(param_1 + 0x48c + iVar1 * 4), piVar2 != (int *)0x0))
         )) {
        uVar3 = (**(code **)(*piVar2 + 0x10))();
      }
      if (param_2[1] == 2) {
        (**(code **)(**(int **)(param_1 + 4) + 0x5c))(0xf001,uVar3,*(undefined4 *)(param_1 + 0x8ac))
        ;
        return 1;
      }
      if (param_2[1] == 3) {
        (**(code **)(**(int **)(param_1 + 4) + 0x5c))(0xf002,uVar3,*(undefined4 *)(param_1 + 0x8ac))
        ;
        return 1;
      }
    }
  }
  return 0;
}

