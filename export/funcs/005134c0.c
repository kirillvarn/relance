
uint __thiscall FUN_005134c0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0054bc30();
  if (iVar2 != param_3) {
    iVar2 = FUN_0054bc40();
    if (iVar2 != param_3) {
      iVar2 = FUN_0054bc50();
      if (iVar2 != param_3) {
        bVar1 = 0;
        goto LAB_005134ec;
      }
    }
  }
  bVar1 = 1;
LAB_005134ec:
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),*(byte *)(param_1 + 0x7c) ^ bVar1) & 0xffffff01;
  bVar1 = (byte)uVar3 ^ *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x7c) = bVar1;
  return CONCAT31((int3)(uVar3 >> 8),bVar1) & 0xffffff01;
}

