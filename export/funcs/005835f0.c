
int FUN_005835f0(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  Equipment *pEVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  pEVar1 = Archetype::GetEquipment(param_1);
  if (pEVar1 == (Equipment *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)pEVar1 + 0x18))();
  if (iVar2 == 0) {
    return 1;
  }
  if (((iVar2 != 4) && (iVar2 != 0xd)) && (iVar2 != 10)) {
    if (((iVar2 == 5) || (iVar2 == 6)) || ((iVar2 == 7 || (iVar2 == 8)))) {
      iVar3 = (**(code **)(*(int *)pEVar1 + 0x10))();
      if (iVar3 == 0xe) {
        *param_3 = pEVar1;
      }
    }
    return iVar2;
  }
  *param_2 = pEVar1;
  return 4;
}

