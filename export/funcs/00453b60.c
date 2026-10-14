
int __thiscall FUN_00453b60(int param_1,char *param_2)

{
  code *_Str1;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (piVar2 == *(int **)(param_1 + 4)) {
    return 0;
  }
  while (((_Str1 = (code *)piVar2[4], (code *)piVar2[4] == (code *)0x0 &&
          (_Str1 = _C_exref, _C_exref == (code *)0x0)) ||
         (iVar1 = stricmp((char *)_Str1,param_2), iVar1 != 0))) {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)*(int *)(param_1 + 4)) {
      return 0;
    }
  }
  return piVar2[2];
}

