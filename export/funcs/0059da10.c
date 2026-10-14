
undefined4 FUN_0059da10(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0067dbe8;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(int *)(iVar1 + 8) != 0) &&
       (iVar2 = stricmp((char *)(*(int *)(iVar1 + 8) + 0x18),param_1), iVar2 == 0)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return *(undefined4 *)(iVar1 + 8);
}

