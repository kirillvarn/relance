
undefined4 __fastcall FUN_00555810(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) - iVar2 >> 2 != 0)) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c) - iVar2 >> 2;
    }
    iVar1 = rand();
    return *(undefined4 *)
            (*(int *)(param_1 + 0x18) +
            ((int)(iVar1 * iVar2 + (iVar1 * iVar2 >> 0x1f & 0x7fffU)) >> 0xf) * 4);
  }
  return 0;
}

