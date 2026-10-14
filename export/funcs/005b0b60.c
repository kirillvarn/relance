
undefined4 FUN_005b0b60(WPARAM *param_1)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  IMEFocus *this;
  tagMSG local_1c;
  
  FUN_0041ef20();
  BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  if (BVar3 == 0) {
    return 1;
  }
  do {
    BVar3 = GetMessageA(&local_1c,(HWND)0x0,0,0);
    if (BVar3 == 0) {
      *param_1 = local_1c.wParam;
      return 0;
    }
    this = IMEFocus::GetSingleton();
    if (((this == (IMEFocus *)0x0) || (bVar1 = IMEFocus::IgnoreHotKey(this,&local_1c), !bVar1)) &&
       (cVar2 = FUN_00577850(local_1c.message,local_1c.wParam,local_1c.lParam), cVar2 == '\0')) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
    }
    BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  } while (BVar3 != 0);
  return 1;
}

