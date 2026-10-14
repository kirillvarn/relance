
void __thiscall FUN_004ea670(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1c) != param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x14) - iVar1 >> 3))); uVar2 = uVar2 + 1) {
      (**(code **)(**(int **)(iVar1 + uVar2 * 8) + 8))(*(undefined4 *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

