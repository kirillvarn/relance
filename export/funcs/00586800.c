
uint __thiscall FUN_00586800(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x550);
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(*(int *)(param_1 + 0x554) - uVar1) >> 2;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    puVar2 = *(undefined4 **)(param_1 + 0x550);
    do {
      switch(*puVar2) {
      case 4:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
        uVar1 = 0;
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
        uVar1 = 1;
        break;
      default:
        uVar1 = 2;
      }
      if (uVar1 == param_2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < iVar3);
  }
  return uVar1 & 0xffffff00;
}

