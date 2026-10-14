
void __thiscall FUN_0042d030(int param_1,char *param_2)

{
  char cVar1;
  HANDLE pvVar2;
  char *pcVar3;
  uint uVar4;
  DWORD DVar5;
  LPVOID lpMem;
  
  lpMem = *(LPVOID *)(param_1 + 4);
  if (lpMem != (LPVOID)0x0) {
    DVar5 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar5,lpMem);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    DVar5 = 0;
    pvVar2 = GetProcessHeap();
    pcVar3 = HeapAlloc(pvVar2,DVar5,uVar4);
    *(char **)(param_1 + 4) = pcVar3;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

