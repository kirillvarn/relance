
void FUN_00424870(HWND param_1,char param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  HWND pHVar2;
  undefined4 uVar3;
  HMENU pHVar4;
  DWORD dwStyle;
  int unaff_EDI;
  DWORD dwExStyle;
  HWND pHStack_2c;
  int iVar5;
  tagRECT *lpRect;
  int iVar6;
  tagRECT local_10;
  
  DAT_00610850 = param_3;
  DAT_00610854 = param_4;
  DAT_006679f0 = param_2;
  if (param_2 != '\0') {
    lpRect = &local_10;
    pHVar2 = GetDesktopWindow();
    pHStack_2c = (HWND)0x4248aa;
    GetWindowRect(pHVar2,lpRect);
    if (param_3 < (uint)local_10.right) {
      param_3 = local_10.right;
    }
    if (param_4 < (uint)local_10.bottom) {
      param_4 = local_10.bottom;
    }
    pHStack_2c = param_1;
    (*(code *)PTR_FUN_00616434)();
    SetWindowPos(param_1,(HWND)0x0,0,0,0,0,0x27);
    SetWindowPos(param_1,(HWND)0xffffffff,0,0,param_3,param_4,0x100);
    ShowWindow(param_1,1);
    return;
  }
  iVar6 = 0x2ca0000;
  iVar5 = -0x10;
  pHStack_2c = param_1;
  (*(code *)PTR_FUN_00616434)();
  SetWindowPos(param_1,(HWND)0x0,0,0,0,0,0x27);
  puVar1 = PTR_FUN_0061642c;
  local_10.left = param_4;
  uVar3 = (*(code *)PTR_FUN_0061642c)(param_1,0xffffffec);
  pHVar4 = GetMenu(param_1);
  dwExStyle = 0xfffffff0;
  pHVar2 = param_1;
  dwStyle = (*(code *)puVar1)(param_1,0xfffffff0,pHVar4 != (HMENU)0x0,uVar3);
  AdjustWindowRectEx((LPRECT)&pHStack_2c,dwStyle,(BOOL)pHVar2,dwExStyle);
  SetWindowPos(param_1,(HWND)0xfffffffe,0,0,iVar6 - (int)pHStack_2c,unaff_EDI - iVar5,0x102);
  ShowWindow(param_1,(uint)(DAT_006679f9 == '\0'));
  InvalidateRect((HWND)0x0,(RECT *)0x0,1);
  return;
}

