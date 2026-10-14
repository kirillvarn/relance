
uint FUN_004cc880(int param_1)

{
  int iVar1;
  uint uVar2;
  uint in_EAX;
  
  if (DAT_006748f8 != 0) {
    iVar1 = *(int *)(DAT_006748f8 + 0x284);
    if (((iVar1 != 0) && (iVar1 + -0x9c != 0)) && (*(int *)(iVar1 + 0x14) == param_1)) {
      return CONCAT31((int3)((uint)(iVar1 + -0x9c) >> 8),1);
    }
    uVar2 = *(uint *)(DAT_006748f8 + 0xb4);
    in_EAX = uVar2;
    if (((uVar2 != 0) && (in_EAX = uVar2 - 0x9c, in_EAX != 0)) &&
       (*(int *)(uVar2 + 0x14) == param_1)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

