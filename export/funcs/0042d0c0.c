
void __fastcall FUN_0042d0c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b8d56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = param_1[0xe];
  local_4 = 1;
  if (iVar1 == 5) {
LAB_0042d10f:
    pvVar5 = (LPVOID)param_1[0xf];
    if (pvVar5 != (LPVOID)0x0) {
      DVar4 = 0;
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,DVar4,pvVar5);
      param_1[0xf] = 0;
    }
  }
  else if (iVar1 == 6) {
    piVar2 = (int *)param_1[0xf];
    param_1[0xf] = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  else if (iVar1 == 7) goto LAB_0042d10f;
  param_1[0xf] = 0;
  iVar1 = param_1[9];
  local_4 = local_4 & 0xffffff00;
  if (iVar1 == 5) {
LAB_0042d15b:
    pvVar5 = (LPVOID)param_1[10];
    if (pvVar5 != (LPVOID)0x0) {
      DVar4 = 0;
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,DVar4,pvVar5);
      param_1[10] = 0;
    }
  }
  else if (iVar1 == 6) {
    piVar2 = (int *)param_1[10];
    param_1[10] = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  else if (iVar1 == 7) goto LAB_0042d15b;
  param_1[10] = 0;
  iVar1 = param_1[4];
  local_4 = 0xffffffff;
  if (iVar1 != 5) {
    if (iVar1 == 6) {
      piVar2 = (int *)param_1[5];
      param_1[5] = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      goto LAB_0042d19a;
    }
    if (iVar1 != 7) goto LAB_0042d19a;
  }
  pvVar5 = (LPVOID)param_1[5];
  if (pvVar5 != (LPVOID)0x0) {
    DVar4 = 0;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,DVar4,pvVar5);
    param_1[5] = 0;
  }
LAB_0042d19a:
  param_1[5] = 0;
  ExceptionList = local_c;
  return;
}

