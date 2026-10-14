
void __fastcall FUN_005687e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (0 < iVar1) {
    *param_1 = iVar1 + -1;
    RegCloseKey((HKEY)param_1[iVar1]);
    iVar1 = *param_1;
  }
  return;
}

