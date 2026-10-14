
void __fastcall FUN_004de2f0(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t local_40 [6];
  undefined1 local_34 [52];
  
  iVar1 = FUN_004c45d0(DAT_00674a8c);
  pwVar2 = (wchar_t *)0x0;
  if ((iVar1 != 0) && (pwVar2 = *(wchar_t **)(iVar1 + 0x14), 999 < (int)pwVar2)) {
    pwVar2 = (wchar_t *)0x3e7;
  }
  swprintf(local_40,0x5d0ec4,pwVar2);
  local_40[0] = L'\x10';
  local_40[1] = L'\0';
  (**(code **)(**(int **)(param_1 + 0x5ac) + 0xa8))(0x1d,local_34);
  iVar1 = FUN_004c45d0(DAT_00674a88);
  pwVar2 = (wchar_t *)0x0;
  if ((iVar1 != 0) && (pwVar2 = *(wchar_t **)(iVar1 + 0x14), 999 < (int)pwVar2)) {
    pwVar2 = (wchar_t *)0x3e7;
  }
  swprintf(local_40,0x5d0ec4,pwVar2);
  local_40[0] = L'\x10';
  local_40[1] = L'\0';
  (**(code **)(**(int **)(param_1 + 0x5b4) + 0xa8))(0x1d,local_34);
  return;
}

