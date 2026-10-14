
int __thiscall FUN_00455ed0(int param_1,char *param_2)

{
  code *_Str1;
  int iVar1;
  int *piVar2;
  int local_4;
  
  local_4 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  piVar2 = (int *)**(int **)(param_1 + 0x128);
  if (piVar2 != *(int **)(param_1 + 0x128)) {
    while( true ) {
      _Str1 = (code *)piVar2[4];
      if ((code *)piVar2[4] == (code *)0x0) {
        _Str1 = _C_exref;
      }
      iVar1 = stricmp((char *)_Str1,param_2);
      if (iVar1 == 0) break;
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)*(int *)(param_1 + 0x128)) {
        return 0;
      }
    }
    local_4 = piVar2[2];
  }
  return local_4;
}

