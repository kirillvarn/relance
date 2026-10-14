
undefined1 __thiscall FUN_0057a810(int param_1,undefined4 param_2)

{
  LPVOID lpParam;
  undefined1 uVar1;
  ATOM AVar2;
  int iVar3;
  WNDCLASSEXA *pWVar4;
  WNDCLASSEXA local_30;
  
  uVar1 = FUN_004b5060(param_2,0);
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x400) = 1;
  *(undefined1 *)(param_1 + 0x401) = 1;
  *(undefined4 *)(param_1 + 0x330) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x334) = 0x3e99999a;
  FUN_00579e90();
  lpParam = *(LPVOID *)(param_1 + 0x32c);
  if (lpParam != (LPVOID)0x0) {
    if (*(HWND *)((int)lpParam + 8) != (HWND)0x0) {
      DestroyWindow(*(HWND *)((int)lpParam + 8));
      *(undefined4 *)((int)lpParam + 8) = 0;
    }
    if (DAT_0067c484 == '\0') {
      pWVar4 = &local_30;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pWVar4->cbSize = 0;
        pWVar4 = (WNDCLASSEXA *)&pWVar4->style;
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
      AVar2 = RegisterClassExA(&local_30);
      if (AVar2 == 0) {
        if (DAT_0067c484 == '\0') {
          return uVar1;
        }
      }
      else {
        DAT_0067c484 = '\x01';
      }
    }
    CreateWindowExA(0,PTR_s_RichDisplayDebugWindow_005e4573_1_0061516c,"Rich Text Display Window",
                    0xcf0000,100,100,0x100,0x120,DAT_0067eca0,(HMENU)0x0,DAT_0067eca4,lpParam);
    if (*(HWND *)((int)lpParam + 8) != (HWND)0x0) {
      ShowWindow(*(HWND *)((int)lpParam + 8),5);
      UpdateWindow(*(HWND *)((int)lpParam + 8));
    }
  }
  return uVar1;
}

