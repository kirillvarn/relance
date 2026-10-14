
void __thiscall FUN_0058a790(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_004177b0(param_2);
  if ((iVar2 != 0) && (iVar1 = *(int *)(param_1 + 0x334), *(int *)(iVar1 + 0x1c) != iVar2)) {
    *(int *)(iVar1 + 0x1c) = iVar2;
    for (uVar3 = 0;
        (iVar2 = *(int *)(iVar1 + 0x10), iVar2 != 0 &&
        (uVar3 < (uint)(*(int *)(iVar1 + 0x14) - iVar2 >> 3))); uVar3 = uVar3 + 1) {
      (**(code **)(**(int **)(iVar2 + uVar3 * 8) + 8))(*(undefined4 *)(iVar1 + 0x1c));
    }
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  return;
}

