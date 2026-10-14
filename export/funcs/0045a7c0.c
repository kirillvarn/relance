
undefined4 FUN_0045a7c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_00611400)[iVar1 * 2] == param_1) {
      return *(undefined4 *)(iVar1 * 8 + 0x611404);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x15);
  return 0;
}

