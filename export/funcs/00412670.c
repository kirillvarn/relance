
void __fastcall FUN_00412670(undefined4 *param_1)

{
  undefined4 *puVar1;
  HDC hdc;
  HDC pHVar2;
  HBITMAP hbm;
  HGDIOBJ pvVar3;
  int iVar4;
  
  param_1[5] = 0x100;
  param_1[6] = 0x100;
  puVar1 = malloc(0x20028);
  param_1[3] = puVar1;
  param_1[2] = puVar1 + 10;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)param_1[3] = 0x28;
  *(undefined2 *)(param_1[3] + 0xe) = 0x10;
  *(undefined2 *)(param_1[3] + 0xc) = 1;
  *(undefined4 *)(param_1[3] + 0x10) = 0;
  *(undefined4 *)(param_1[3] + 0x14) = 0x20000;
  *(undefined4 *)(param_1[3] + 4) = param_1[5];
  *(undefined4 *)(param_1[3] + 8) = -param_1[6];
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreateCompatibleDC(hdc);
  param_1[4] = pHVar2;
  hbm = CreateCompatibleBitmap(hdc,param_1[5],param_1[6]);
  *param_1 = hbm;
  GetDIBits((HDC)param_1[4],hbm,0,1,(LPVOID)0x0,(LPBITMAPINFO)param_1[3],0);
  ReleaseDC((HWND)0x0,hdc);
  pvVar3 = SelectObject((HDC)param_1[4],(HGDIOBJ)*param_1);
  param_1[1] = pvVar3;
  SetTextAlign((HDC)param_1[4],0);
  SetBkColor((HDC)param_1[4],0);
  SetBkMode((HDC)param_1[4],1);
  SetTextColor((HDC)param_1[4],0xffffff);
  return;
}

