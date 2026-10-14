
undefined4 FUN_0054bcb0(int *param_1)

{
  int iVar1;
  
  if (DAT_00678ba0 == '\0') {
    return 0;
  }
  if (DAT_00679738 != (int *)0x0) {
    (**(code **)(*DAT_00679738 + 0x70))(param_1);
    if (*param_1 == 0) {
      return 1;
    }
    iVar1 = (**(code **)(*DAT_00679738 + 0x74))(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (*param_1 < 0xf) {
    return 0;
  }
  if ((((DAT_00679738 != (int *)0x0) && (iVar1 = DAT_00679738[0x30], iVar1 != 0)) &&
      ((int *)(iVar1 + -8) != (int *)0x0)) && (*(int *)(iVar1 + 0x14) == 1)) {
    (**(code **)(*(int *)(iVar1 + -8) + 0x1cc))(param_1);
  }
  return 1;
}

