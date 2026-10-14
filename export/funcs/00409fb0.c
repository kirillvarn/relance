
void __thiscall FUN_00409fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 8;
  if (iVar1 != *(int *)(param_1 + 0x48)) {
    do {
      FUN_00555860(param_2);
      iVar1 = iVar1 + 0x24;
    } while (iVar1 != *(int *)(param_1 + 0x48));
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != *(int *)(param_1 + 0x68)) {
    do {
      FUN_00555860(param_2);
      iVar1 = iVar1 + 0x24;
    } while (iVar1 != *(int *)(param_1 + 0x68));
  }
  return;
}

