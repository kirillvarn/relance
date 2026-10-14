
void __fastcall FUN_0042cfd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  iVar1 = *param_1;
  if (iVar1 != 5) {
    if (iVar1 == 6) {
      piVar2 = (int *)param_1[1];
      param_1[1] = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        param_1[1] = 0;
        return;
      }
      goto LAB_0042d01e;
    }
    if (iVar1 != 7) {
      param_1[1] = 0;
      return;
    }
  }
  lpMem = (LPVOID)param_1[1];
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
    param_1[1] = 0;
  }
LAB_0042d01e:
  param_1[1] = 0;
  return;
}

