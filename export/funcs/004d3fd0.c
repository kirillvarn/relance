
uint FUN_004d3fd0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(param_1 + 0xe0);
  if ((*(uint *)(param_1 + 0x4c) & 0x503) == 0x503) {
    if (*(char *)(param_1 + 0x2bd) != '\0') {
      if (*(int *)(param_1 + 0x1b4) != 0) {
        iVar2 = FUN_0054baf0();
        if (iVar2 != 0) {
          if (((iVar2 == -0xc) || (iVar2 = *(int *)(iVar2 + 0x10), iVar2 == 0)) ||
             ((*(uint *)(iVar2 + 0x4c) & 0x503) != 0x503)) {
            iVar2 = 0;
          }
          if (*(int *)(iVar2 + 0x1b4) == *(int *)(param_1 + 0x1b4)) {
            return 0xf;
          }
        }
      }
      return 0xe;
    }
    if ((uVar1 & 0x420000) != 0) {
      return 8;
    }
    if ((((*(uint *)(param_1 + 0x4c) & 0x103) == 0x103) && (*(int *)(param_1 + 0x88) != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x88) + 0x80) != '\0')) {
      return 10;
    }
    if ((uVar1 & 0x100000) != 0) {
      return 9;
    }
    return -(uint)((uVar1 & 0x200000) != 0) & 5;
  }
  if ((char)uVar1 < '\0') {
    return 7;
  }
  if ((uVar1 & 3) != 0) {
    return 1;
  }
  if ((uVar1 & 0xc40) != 0) {
    return 6;
  }
  if ((uVar1 & 0x600de0) != 0) {
    return 2;
  }
  if ((uVar1 & 0x9010) != 0) {
    return 0xc;
  }
  if ((uVar1 & 0x2000) != 0) {
    return 0xd;
  }
  return (-(uint)((uVar1 & 0x10000000) != 0) & 0xc) - 1;
}

