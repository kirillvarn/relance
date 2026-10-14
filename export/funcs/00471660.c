
void FUN_00471660(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  wchar_t *_Str;
  size_t _Count;
  void *pvVar2;
  undefined2 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    _Str = (wchar_t *)param_2[1];
    if (_Str != (wchar_t *)0x0) {
      _Count = wcslen(_Str);
      uVar1 = _Count + 1;
      if ((uint)param_1[2] < uVar1) {
        if ((void *)param_1[1] == (void *)0x0) {
          puVar3 = malloc(uVar1 * 2);
          param_1[1] = puVar3;
          *puVar3 = 0;
        }
        else {
          pvVar2 = realloc((void *)param_1[1],uVar1 * 2);
          param_1[1] = pvVar2;
        }
        param_1[2] = uVar1;
      }
      wcsncpy((wchar_t *)param_1[1],_Str,_Count);
      *(undefined2 *)(param_1[1] + _Count * 2) = 0;
    }
  }
  return;
}

