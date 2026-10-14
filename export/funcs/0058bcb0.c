
/* WARNING: Removing unreachable block (ram,0x0058bd45) */
/* WARNING: Removing unreachable block (ram,0x0058bd2e) */
/* WARNING: Removing unreachable block (ram,0x0058bd3c) */
/* WARNING: Removing unreachable block (ram,0x0058bd4b) */
/* WARNING: Removing unreachable block (ram,0x0058bd87) */

void __fastcall FUN_0058bcb0(int param_1)

{
  wchar_t *_Str;
  size_t _Count;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_005c4618;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x3a4) != '\0') {
    _Str = (wchar_t *)**(undefined4 **)(param_1 + 0x334);
    local_4 = 0;
    if (_Str != (wchar_t *)0x0) {
      ExceptionList = &local_c;
      _Count = wcslen(_Str);
      FUN_004142a0(_Count + 1);
      wcsncpy((wchar_t *)0x0,_Str,_Count);
      *(undefined2 *)(_Count * 2) = 0;
    }
    *(undefined1 *)(param_1 + 0x3a4) = 0;
  }
  ExceptionList = local_c;
  return;
}

