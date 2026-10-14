
char FUN_0057b700(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSEXA *pWVar3;
  WNDCLASSEXA local_30;
  
  if (DAT_0067c484 == '\0') {
    pWVar3 = &local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXA *)&pWVar3->style;
    }
    local_30.cbSize = 0x30;
    local_30.style = 0x20;
    local_30.lpfnWndProc = (WNDPROC)&LAB_0057a9c0;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_0067eca4;
    local_30.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f05);
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = PTR_s_RichDisplayDebugWindow_005e4573_1_0061516c;
    local_30.hIconSm = (HICON)0x0;
    AVar1 = RegisterClassExA(&local_30);
    if (AVar1 != 0) {
      DAT_0067c484 = 1;
      return '\x01';
    }
  }
  return DAT_0067c484;
}

