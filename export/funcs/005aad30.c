
undefined4 __thiscall FUN_005aad30(int param_1,wchar_t *param_2)

{
  code *_Str1;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 0x1b8);
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    _Str1 = *(code **)(puVar2[2] + 0x208);
    if (*(code **)(puVar2[2] + 0x208) == (code *)0x0) {
      _Str1 = _C_exref;
    }
    iVar1 = wcscmp((wchar_t *)_Str1,param_2);
  } while (iVar1 != 0);
  return puVar2[2];
}

