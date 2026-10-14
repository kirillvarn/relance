
undefined4 FUN_004d4d50(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  uVar2 = 0x4a7;
  if ((uVar1 & 1) != 0) {
    return 0x4a0;
  }
  if ((uVar1 & 2) != 0) {
    return 0x4a1;
  }
  if ((uVar1 & 4) != 0) {
    return 0x4a2;
  }
  if ((uVar1 & 0x8010) != 0) {
    return 0x4a3;
  }
  if ((uVar1 & 0x40) != 0) {
    return 0x4a4;
  }
  if ((char)uVar1 < '\0') {
    return 0x4a5;
  }
  if ((uVar1 & 0x100) != 0) {
    uVar2 = 0x4a6;
  }
  return uVar2;
}

