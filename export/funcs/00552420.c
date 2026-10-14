
undefined1 __fastcall FUN_00552420(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((9 < iVar1) && (iVar1 < 0xf)) {
    return 1;
  }
  iVar1 = FUN_005b7030(iVar1);
  return *(undefined1 *)(iVar1 + 0x48);
}

