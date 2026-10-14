
int * FUN_00576b60(char *param_1)

{
  code *_Str1;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_0067c228;
  if (piVar2 != DAT_0067c228) {
    do {
      _Str1 = (code *)piVar2[3];
      if ((code *)piVar2[3] == (code *)0x0) {
        _Str1 = _C_exref;
      }
      iVar1 = stricmp((char *)_Str1,param_1);
      if (iVar1 == 0) {
        return piVar2 + 2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0067c228);
  }
  return (int *)0x0;
}

