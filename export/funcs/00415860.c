
/* WARNING: Removing unreachable block (ram,0x004158d0) */

void __thiscall FUN_00415860(int *param_1,wchar_t *param_2)

{
  uint uVar1;
  short *psVar2;
  int *piVar3;
  int *piVar4;
  wchar_t *_Str2;
  int iVar5;
  size_t _Count;
  void *pvVar6;
  undefined2 *puVar7;
  wchar_t *_Str1;
  int *piVar8;
  
  _Str2 = (wchar_t *)*param_1;
  if (_Str2 != param_2) {
    _Str1 = param_2;
    if (param_2 == (wchar_t *)0x0) {
      _Str1 = L"";
    }
    if (_Str2 == (wchar_t *)0x0) {
      _Str2 = L"";
    }
    iVar5 = wcscmp(_Str1,_Str2);
    if (iVar5 != 0) {
      psVar2 = (short *)*param_1;
      if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
        free(psVar2);
        *param_1 = 0;
        param_1[1] = 0;
        piVar4 = (int *)param_1[5];
        piVar3 = (int *)param_1[4];
        for (piVar8 = piVar3; piVar8 != piVar4; piVar8 = piVar8 + 2) {
          if ((int *)*piVar8 != (int *)0x0) {
            (**(code **)(*(int *)*piVar8 + 4))();
          }
        }
        param_1[5] = (int)piVar3;
        param_1[10] = 0;
      }
      if (param_2 != (wchar_t *)0x0) {
        _Count = wcslen(param_2);
        uVar1 = _Count + 1;
        if ((uint)param_1[1] < uVar1) {
          if ((void *)*param_1 == (void *)0x0) {
            puVar7 = malloc(uVar1 * 2);
            *param_1 = (int)puVar7;
            *puVar7 = 0;
          }
          else {
            pvVar6 = realloc((void *)*param_1,uVar1 * 2);
            *param_1 = (int)pvVar6;
          }
          param_1[1] = uVar1;
        }
        wcsncpy((wchar_t *)*param_1,param_2,_Count);
        *(undefined2 *)(*param_1 + _Count * 2) = 0;
        param_1[10] = 0;
        return;
      }
      psVar2 = (short *)*param_1;
      if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
        *psVar2 = 0;
      }
      param_1[10] = 0;
    }
  }
  return;
}

