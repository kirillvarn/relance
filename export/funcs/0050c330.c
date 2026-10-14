
uint __thiscall FUN_0050c330(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_0054bc80();
  bVar2 = (*(byte *)(param_1 + 0x7c) ^ (byte)iVar1) & 1 ^ *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x7c) = bVar2;
  if (((bVar2 & 1) == 0) && (*(int *)(param_1 + 0x40) == -1)) {
    iVar1 = FUN_0054bc30();
    if (iVar1 != param_3) {
      iVar1 = FUN_0054bc40();
      if (iVar1 != param_3) goto LAB_0050c36d;
    }
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 1;
  }
LAB_0050c36d:
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(param_1 + 0x7c)) & 0xffffff01;
}

