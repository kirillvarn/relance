
int * FUN_004177b0(char *param_1)

{
  char *_Str1;
  int iVar1;
  int *piVar2;
  char *_Str2;
  
  piVar2 = (int *)*DAT_0061651c;
  if (piVar2 != DAT_0061651c) {
    do {
      _Str2 = param_1;
      _Str1 = (char *)(**(code **)(piVar2[2] + 4))();
      iVar1 = stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return piVar2 + 2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0061651c);
  }
  return (int *)0x0;
}

