
int __thiscall FUN_00542330(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    *param_2 = iVar1;
    return iVar1;
  }
  iVar1 = *(int *)(*param_2 + 0x14);
  *param_2 = iVar1;
  return iVar1;
}

