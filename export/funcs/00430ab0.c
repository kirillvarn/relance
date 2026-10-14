
int FUN_00430ab0(uint param_1)

{
  int *piVar1;
  int local_4;
  
  local_4 = FUN_0052c7a0(&param_1);
  piVar1 = &local_4;
  if ((local_4 == DAT_00667e1c) || (param_1 < *(uint *)(local_4 + 0xc))) {
    piVar1 = (int *)&param_1;
  }
  if (*piVar1 == DAT_00667e1c) {
    return 0;
  }
  return *piVar1 + 0x10;
}

