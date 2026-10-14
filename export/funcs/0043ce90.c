
bool __thiscall FUN_0043ce90(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    if (param_3 != '\0') {
      *param_2 = *piVar1;
      return *param_2 != 0;
    }
    iVar2 = piVar1[1];
    *param_2 = iVar2;
    return iVar2 != 0;
  }
  if (param_3 != '\0') {
    iVar2 = *(int *)(param_1 + 4);
    *param_2 = iVar2;
    return iVar2 != 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  *param_2 = iVar2;
  return iVar2 != 0;
}

