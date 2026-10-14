
void __thiscall FUN_00411d90(int param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb0) != -2) {
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    iVar2 = FUN_00419760(param_2);
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0xb0);
      if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: Invalid dynamic light type (%s)",
                   "E:\\FL\\Scratch\\Source\\Client\\cmn\\EngineLight.cpp",0x360,param_2);
      }
      *(int *)(param_1 + 0xbc) = iVar2;
      *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 2;
      return;
    }
    MessageBoxA((HWND)0x0,param_2,"Error: unknown graph name",0);
    return;
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  iVar2 = FUN_00419760(param_2);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0xb8) = iVar2;
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 2;
    return;
  }
  MessageBoxA((HWND)0x0,param_2,"Error: unknown graph name",0);
  return;
}

