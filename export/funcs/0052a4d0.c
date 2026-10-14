
void __thiscall FUN_0052a4d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  iVar1 = **(int **)(param_1 + 0x14);
  while (iVar1 != *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x24) = param_2;
    FUN_0052afa0();
  }
  return;
}

