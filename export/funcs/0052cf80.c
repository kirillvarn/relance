
int * __thiscall FUN_0052cf80(int param_1,int *param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  ID_String::clear((ID_String *)&local_4);
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    *param_2 = local_4;
    return param_2;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x30))();
  if (iVar1 != 0) {
    *param_2 = *(int *)(iVar1 + 4);
    return param_2;
  }
  *param_2 = local_4;
  return param_2;
}

