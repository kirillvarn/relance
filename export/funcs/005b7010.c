
int FUN_005b7010(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005b7000();
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + iVar2 * 4) == param_1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x16);
  return 0;
}

