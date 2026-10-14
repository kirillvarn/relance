
undefined4 __fastcall FUN_0053a960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (0 < iVar1) {
    *(int *)(param_1 + 0xa0) = iVar1 + -1;
    return *(undefined4 *)(param_1 + 0x9c);
  }
  *(uint *)(param_1 + 0xa0) = ((-1 < iVar1) - 1 & 0xfffffff9) + 8;
  iVar1 = FUN_0054baf0();
  if (iVar1 != 0) {
    uVar2 = FUN_0045a490(iVar1,param_1);
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return *(undefined4 *)(param_1 + 0x9c);
}

