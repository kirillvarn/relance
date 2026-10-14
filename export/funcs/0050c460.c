
uint __thiscall FUN_0050c460(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte extraout_AL;
  undefined4 uVar2;
  uint uVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  
  uVar2 = FUN_0054bc80();
  uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar2 == '\0' ^ *(byte *)(param_1 + 0x7c)) &
          0xffffff01;
  uVar4 = (undefined3)(uVar3 >> 8);
  bVar1 = (byte)uVar3 ^ *(byte *)(param_1 + 0x7c);
  *(byte *)(param_1 + 0x7c) = bVar1;
  if ((bVar1 & 1) != 0) {
    FUN_004f7b50(param_3);
    *(byte *)(param_1 + 0x7c) =
         (*(byte *)(param_1 + 0x7c) ^ extraout_AL) & 1 ^ *(byte *)(param_1 + 0x7c);
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,*(undefined1 *)(param_1 + 0x7c)) & 0xffffff01;
}

