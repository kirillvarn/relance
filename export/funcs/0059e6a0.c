
undefined4 FUN_0059e6a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0067dbe8;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((*(int **)(iVar1 + 8) != (int *)0x0) &&
        (iVar2 = (**(code **)(**(int **)(iVar1 + 8) + 8))(), iVar2 != 0)) &&
       (*(char *)(iVar2 + 0x2d0) != '\0')) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 1;
}

