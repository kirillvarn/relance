
int * __thiscall FUN_004a3240(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  wchar_t *_Str;
  short *psVar3;
  int *piVar4;
  size_t _Count;
  void *pvVar5;
  undefined2 *puVar6;
  int *piVar7;
  int *piVar8;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar7 = param_2;
  if (param_3 != iVar2) {
    do {
      _Str = *(wchar_t **)((param_3 - (int)param_2) + (int)piVar7);
      if (_Str == (wchar_t *)0x0) {
        psVar3 = (short *)*piVar7;
        if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
          *psVar3 = 0;
        }
      }
      else {
        _Count = wcslen(_Str);
        uVar1 = _Count + 1;
        if ((uint)piVar7[1] < uVar1) {
          if ((void *)*piVar7 == (void *)0x0) {
            puVar6 = malloc(uVar1 * 2);
            *piVar7 = (int)puVar6;
            *puVar6 = 0;
          }
          else {
            pvVar5 = realloc((void *)*piVar7,uVar1 * 2);
            *piVar7 = (int)pvVar5;
          }
          piVar7[1] = uVar1;
        }
        wcsncpy((wchar_t *)*piVar7,_Str,_Count);
        *(undefined2 *)(*piVar7 + _Count * 2) = 0;
      }
      piVar7 = piVar7 + 2;
    } while ((param_3 - (int)param_2) + (int)piVar7 != iVar2);
  }
  piVar4 = *(int **)(param_1 + 8);
  piVar8 = piVar7;
  if (piVar7 == piVar4) {
    *(int **)(param_1 + 8) = piVar7;
    return param_2;
  }
  do {
    if ((void *)*piVar8 != (void *)0x0) {
      free((void *)*piVar8);
      *piVar8 = 0;
      piVar8[1] = 0;
    }
    piVar8 = piVar8 + 2;
  } while (piVar8 != piVar4);
  *(int **)(param_1 + 8) = piVar7;
  return param_2;
}

