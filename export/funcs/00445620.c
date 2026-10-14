
long __thiscall FUN_00445620(int *param_1,char *param_2)

{
  void *_Memory;
  int iVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar6 = 0;
  piVar5 = param_1 + 0xc9;
  do {
    if (((((char)piVar5[2] != '\0') && ((char *)*piVar5 != (char *)0x0)) &&
        (iVar1 = stricmp((char *)*piVar5,param_2), iVar1 == 0)) && (piVar5[1] != -1)) {
      return piVar5[1];
    }
    if ((iVar4 < 0) && ((char)piVar5[2] == '\0')) {
      iVar4 = iVar6;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 3;
  } while (iVar6 < 5);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  pcVar3 = param_2;
  lVar2 = (**(code **)(*param_1 + 0x18))();
  lVar2 = CompoundInstanceFindFirstName(lVar2,pcVar3);
  if (lVar2 != -1) {
    iVar4 = iVar4 * 3 + 0xc9;
    _Memory = (void *)param_1[iVar4];
    param_1 = param_1 + iVar4;
    param_1[1] = lVar2;
    if (_Memory != (void *)0x0) {
      free(_Memory);
      *param_1 = 0;
    }
    pcVar3 = _strdup(param_2);
    *param_1 = (int)pcVar3;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return lVar2;
}

