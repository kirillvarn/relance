
void __thiscall FUN_005b3400(int *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *_Str;
  
  _Str = param_1 + 0x11;
  *param_1 = 0;
  iVar4 = (int)_Str - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar4] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  do {
    sVar2 = strspn((char *)_Str," \t");
    piVar5 = (int *)((int)_Str + sVar2);
    iVar4 = 0;
    cVar1 = *(char *)((int)_Str + sVar2);
    _Str = piVar5;
    while (cVar1 != '\0') {
      _Str = (int *)((int)_Str + 1);
      pcVar3 = strchr(" \t",(int)cVar1);
      if (pcVar3 != (char *)0x0) break;
      if (cVar1 == '\"') {
        cVar1 = *(char *)_Str;
        while( true ) {
          if (cVar1 == '\0') goto LAB_005b348d;
          _Str = (int *)((int)_Str + 1);
          if (cVar1 == '\"') break;
          *(char *)(iVar4 + (int)piVar5) = cVar1;
          cVar1 = *(char *)_Str;
          iVar4 = iVar4 + 1;
        }
      }
      else {
        *(char *)(iVar4 + (int)piVar5) = cVar1;
        iVar4 = iVar4 + 1;
      }
      cVar1 = (char)*_Str;
    }
LAB_005b348d:
    *(undefined1 *)(iVar4 + (int)piVar5) = 0;
    if ((char)*piVar5 == '\0') {
      return;
    }
    param_1[*param_1 + 1] = (int)piVar5;
    *param_1 = *param_1 + 1;
  } while( true );
}

