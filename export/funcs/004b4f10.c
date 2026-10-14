
void __fastcall FUN_004b4f10(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x70) = 10;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0xbf028f5c;
  *(undefined4 *)(param_1 + 0x188) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x178) = 0;
  iVar1 = FUN_004177b0("Rollover");
  if (*(int *)(param_1 + 0x98) != iVar1) {
    *(int *)(param_1 + 0x98) = iVar1;
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x8c), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x90) - iVar1 >> 3))); uVar2 = uVar2 + 1) {
      (**(code **)(**(int **)(iVar1 + uVar2 * 8) + 8))(*(undefined4 *)(param_1 + 0x98));
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 4;
  if (*(char *)(param_1 + 0xac) != '\x01') {
    *(undefined1 *)(param_1 + 0xac) = 1;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}

