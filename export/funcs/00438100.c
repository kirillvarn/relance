
undefined4 __thiscall FUN_00438100(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  local_8 = FUN_0052c7a0(&param_2);
  local_4 = *(int *)(param_1 + 4);
  if ((local_8 == local_4) || (param_2 < *(uint *)(local_8 + 0xc))) {
    piVar2 = &local_4;
  }
  else {
    piVar2 = &local_8;
  }
  iVar1 = *piVar2;
  if ((iVar1 != local_4) && (iVar1 != -0x10)) {
    return *(undefined4 *)(iVar1 + 0x20);
  }
  return 0xffffffff;
}

