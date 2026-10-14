
int __fastcall FUN_005687c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    *param_1 = iVar1 + -1;
    return param_1[iVar1];
  }
  return 0;
}

