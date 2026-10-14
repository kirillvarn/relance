
int FUN_004061a0(uint param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = param_1 >> 8 & 0xf;
  if (uVar3 != 0) {
    bVar2 = 0x10;
    do {
      switch(param_1 >> (bVar2 & 0x1f) & 3) {
      case 0:
        iVar1 = iVar1 + 8;
        break;
      case 1:
        iVar1 = iVar1 + 0xc;
        break;
      case 2:
        iVar1 = iVar1 + 0x10;
        break;
      case 3:
        iVar1 = iVar1 + 4;
      }
      bVar2 = bVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar1;
}

