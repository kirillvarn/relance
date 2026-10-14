
void __fastcall FUN_00568810(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    *param_1 = iVar1 + -1;
    RegCloseKey((HKEY)param_1[iVar1]);
  }
  return;
}

