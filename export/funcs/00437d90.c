
int __thiscall FUN_00437d90(int param_1,uint param_2)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  local_4 = FUN_0052c7a0(&param_2);
  if ((local_4 == *(int *)(param_1 + 4)) || (param_2 < *(uint *)(local_4 + 0xc))) {
    piVar1 = (int *)&param_2;
  }
  else {
    piVar1 = &local_4;
  }
  if (*piVar1 != *(int *)(param_1 + 4)) {
    return *piVar1 + 0x10;
  }
  return 0;
}

