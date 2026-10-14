
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047e460(uint param_1)

{
  Equipment *pEVar1;
  int iVar2;
  uint uVar3;
  GoodInfo *pGVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  pEVar1 = Archetype::GetEquipment(param_1);
  if ((pEVar1 != (Equipment *)0x0) && (*(int *)(pEVar1 + 0x14) != 0)) {
    if ((DAT_0066873c != 0) && (iVar2 = FUN_0043a510(DAT_0066873c), iVar2 != 0)) {
      uVar3 = Arch2Good(param_1);
      fVar6 = (float10)FUN_00438060(uVar3);
      if (fVar6 == (float10)_DAT_005c7474) {
        return 5;
      }
    }
    uVar3 = Arch2Good(param_1);
    pGVar4 = GoodList::find_by_id(uVar3);
    if (pGVar4 != (GoodInfo *)0x0) {
      uVar5 = (**(code **)(*(int *)pEVar1 + 0x18))();
      switch(uVar5) {
      case 2:
        return 3;
      case 3:
        return 1;
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
        return 0;
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
        return 2;
      default:
        return 4;
      }
    }
  }
  return 5;
}

