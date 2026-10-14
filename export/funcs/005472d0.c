
size_t FUN_005472d0(CShip *param_1,int *param_2)

{
  uint uVar1;
  short *psVar2;
  size_t sVar3;
  void *pvVar4;
  wchar_t *_Str;
  undefined2 *puVar5;
  
  sVar3 = wcslen(L"");
  uVar1 = sVar3 + 1;
  if ((uint)param_2[1] < uVar1) {
    if ((void *)*param_2 == (void *)0x0) {
      puVar5 = malloc(uVar1 * 2);
      *param_2 = (int)puVar5;
      *puVar5 = 0;
    }
    else {
      pvVar4 = realloc((void *)*param_2,uVar1 * 2);
      *param_2 = (int)pvVar4;
    }
    param_2[1] = uVar1;
  }
  wcsncpy((wchar_t *)*param_2,L"",sVar3);
  *(undefined2 *)(*param_2 + sVar3 * 2) = 0;
  if ((param_1 != (CShip *)0x0) && ((*(uint *)(param_1 + 0x4c) & 0x503) == 0x503)) {
    _Str = (wchar_t *)CShip::get_pilot_name(param_1);
    if (_Str == (wchar_t *)0x0) {
      psVar2 = (short *)*param_2;
      if (psVar2 == (short *)0x0) {
        return 0;
      }
      if (*psVar2 != 0) {
        *psVar2 = 0;
      }
    }
    else {
      sVar3 = wcslen(_Str);
      uVar1 = sVar3 + 1;
      if ((uint)param_2[1] < uVar1) {
        if ((void *)*param_2 == (void *)0x0) {
          puVar5 = malloc(uVar1 * 2);
          *param_2 = (int)puVar5;
          *puVar5 = 0;
        }
        else {
          pvVar4 = realloc((void *)*param_2,uVar1 * 2);
          *param_2 = (int)pvVar4;
        }
        param_2[1] = uVar1;
      }
      wcsncpy((wchar_t *)*param_2,_Str,sVar3);
      *(undefined2 *)(*param_2 + sVar3 * 2) = 0;
    }
  }
  if ((wchar_t *)*param_2 == (wchar_t *)0x0) {
    return 0;
  }
  sVar3 = wcslen((wchar_t *)*param_2);
  return sVar3;
}

