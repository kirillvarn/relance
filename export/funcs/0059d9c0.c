
int FUN_0059d9c0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0067dbe8;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 8);
    if (((iVar1 != 0) && (*(char **)(iVar1 + 0x10) != (char *)0x0)) &&
       (iVar3 = stricmp(*(char **)(iVar1 + 0x10),param_1), iVar3 == 0)) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar1;
}

