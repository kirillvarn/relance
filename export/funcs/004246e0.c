
void FUN_004246e0(LPCSTR param_1,int param_2,LPCSTR param_3)

{
  HMODULE hInstance;
  int nHeight;
  BOOL BVar1;
  int nWidth;
  int Y;
  int X;
  tagRECT local_10;
  
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  nWidth = *(int *)(param_2 + 8);
  if (nWidth == 0) {
    nWidth = 0x280;
  }
  nHeight = *(int *)(param_2 + 0xc);
  if (nHeight == 0) {
    nHeight = 0x1e0;
  }
  if (*(char *)(param_2 + 0x25) == '\0') {
    Y = -0x80000000;
    X = -0x80000000;
    local_10.left = 0;
    local_10.top = 0;
    local_10.right = nWidth;
    local_10.bottom = nHeight;
    BVar1 = AdjustWindowRect(&local_10,0x2ca0000,0);
    if (BVar1 != 0) {
      nWidth = local_10.right - local_10.left;
    }
    nHeight = local_10.bottom - local_10.top;
  }
  else {
    Y = 0;
    X = 0;
  }
  DAT_006679f4 = CreateWindowExA(0,param_1,param_3,0x2ca0000,X,Y,nWidth,nHeight,(HWND)0x0,(HMENU)0x0
                                 ,hInstance,(LPVOID)0x0);
  return;
}

