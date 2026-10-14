
void __thiscall FUN_00411e90(int param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 0x24))();
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  iVar1 = FUN_00419760(param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xc0) = iVar1;
    *(undefined4 *)(param_1 + 0xc4) = param_3;
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 2;
    return;
  }
  MessageBoxA((HWND)0x0,param_2,"Error: unknown graph name",0);
  return;
}

