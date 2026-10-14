
void FUN_004252d0(int param_1,undefined4 param_2)

{
  EquipDesc *pEVar1;
  bool bVar2;
  Equipment *pEVar3;
  EquipDesc *this;
  
  pEVar1 = *(EquipDesc **)(param_1 + 8);
  for (this = *(EquipDesc **)(param_1 + 4); this != pEVar1; this = this + 0x20) {
    pEVar3 = Archetype::GetEquipment(*(uint *)(this + 4));
    if (((pEVar3 != (Equipment *)0x0) && (bVar2 = EquipDesc::is_internal(this), !bVar2)) &&
       (this[0xc] != (EquipDesc)0x0)) {
      (**(code **)(**(int **)(pEVar3 + 4) + 0x20))(param_2);
    }
  }
  return;
}

