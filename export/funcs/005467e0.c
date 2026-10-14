
undefined4 __thiscall FUN_005467e0(int param_1,ushort param_2,uint param_3,int param_4)

{
  int iVar1;
  CEquip *pCVar2;
  CECargo *this;
  CShip *this_00;
  float fVar3;
  undefined4 uStack_c;
  ushort uStack_8;
  uint uStack_4;
  
  if (param_4 != -1) {
    iVar1 = FUN_0054bb00();
    if (param_4 != iVar1) {
      if ((((param_1 == 4) || (param_1 == -8)) || (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) ||
         ((*(uint *)(iVar1 + 0x4c) & 0x503) != 0x503)) {
        iVar1 = 0;
      }
      pCVar2 = CEquipManager::FindByID((CEquipManager *)(iVar1 + 0xe4),param_2);
      this = CECargo::cast(pCVar2);
      if (this != (CECargo *)0x0) {
        CECargo::RemoveFromStack(this,param_3);
        if (((param_1 == 4) || (param_1 == -8)) ||
           ((this_00 = *(CShip **)(param_1 + 0xc), this_00 == (CShip *)0x0 ||
            ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)))) {
          this_00 = (CShip *)0x0;
        }
        fVar3 = CShip::open_bay(this_00);
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
        *(float *)(param_1 + 0xe0) =
             fVar3 + *(float *)JETTISON_CLEARANCE_TIME_exref + *(float *)(param_1 + 0xe0);
      }
      return 0;
    }
  }
  uStack_c = (**(code **)(*(int *)(param_1 + -4) + 0x20))();
  uStack_4 = param_3;
  uStack_8 = param_2;
  (**(code **)(*DAT_0067ecd0 + 0x20))(DAT_00673344,&uStack_c);
  return 0;
}

