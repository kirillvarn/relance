
void __fastcall FUN_004bd770(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x70) = 10;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x159) = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xec) = 0x40800000;
  *(undefined4 *)(param_1 + 0xf0) = 0xc2280000;
  iVar1 = FUN_004177b0("ToolTip");
  if (*(int *)(param_1 + 0x98) != iVar1) {
    *(int *)(param_1 + 0x98) = iVar1;
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x8c), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x90) - iVar1 >> 3))); uVar2 = uVar2 + 1) {
      (**(code **)(**(int **)(iVar1 + uVar2 * 8) + 8))(*(undefined4 *)(param_1 + 0x98));
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(char *)(param_1 + 0xac) != '\x01') {
    *(undefined1 *)(param_1 + 0xac) = 1;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}

