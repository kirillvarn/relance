
void FUN_004c6860(uint param_1)

{
  Equipment *pEVar1;
  undefined4 uVar2;
  
  pEVar1 = Archetype::GetEquipment(param_1);
  if (pEVar1 != (Equipment *)0x0) {
    uVar2 = (**(code **)(*(int *)pEVar1 + 0x10))();
    switch(uVar2) {
    case 6:
    case 10:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1c:
      FUN_005645c0(0x16);
      return;
    case 0xb:
    case 0xd:
    case 0xe:
      FUN_005645c0(0x15);
      break;
    case 0xc:
    case 0xf:
      FUN_005645c0(0x13);
      return;
    case 0x11:
    case 0x13:
    case 0x21:
      FUN_005645c0(0x12);
      return;
    case 0x12:
    case 0x1e:
    case 0x1f:
    case 0x20:
      FUN_005645c0(0x14);
      return;
    }
  }
  return;
}

