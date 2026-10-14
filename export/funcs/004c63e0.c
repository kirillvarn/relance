
void __thiscall FUN_004c63e0(int param_1,undefined4 *param_2,float *param_3)

{
  Ship *pSVar1;
  float fVar2;
  
  *param_2 = 0;
  *param_3 = 0.0;
  if (*(uint *)(param_1 + 0x18) != 0) {
    pSVar1 = Archetype::GetShip(*(uint *)(param_1 + 0x18));
    *param_2 = *(undefined4 *)(pSVar1 + 0x100);
    fVar2 = EquipDescList::get_cargo_space_occupied((EquipDescList *)(param_1 + 0x1c));
    *param_3 = fVar2;
  }
  return;
}

