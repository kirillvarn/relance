
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005339e0(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  CEquip *this;
  int iVar5;
  int *piVar6;
  
  bVar4 = SinglePlayer();
  if (!bVar4) {
    puVar2 = *(undefined4 **)(param_2 + 4);
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      uVar1 = *(ushort *)(puVar3 + 2);
      if (uVar1 == *(ushort *)SUBOBJ_ID_ROOT_exref) {
        if (((param_1 == 0) || (param_1 == -0xc)) ||
           ((piVar6 = *(int **)(param_1 + 0x10), piVar6 == (int *)0x0 ||
            ((piVar6[0x13] & 0x103U) != 0x103)))) {
          piVar6 = (int *)0x0;
        }
        (**(code **)(*piVar6 + 0x98))(puVar3[3]);
      }
      else if (uVar1 == *(ushort *)SUBOBJ_ID_POWER_exref) {
        if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar5 = *(int *)(param_1 + 0x10), iVar5 == 0)
            ) || ((*(uint *)(iVar5 + 0x4c) & 0x103) != 0x103)) {
          iVar5 = 0;
        }
        *(undefined4 *)(iVar5 + 0x198) = puVar3[3];
      }
      else {
        bVar4 = SubObjectID::IsEquipID(uVar1);
        if (bVar4) {
          if (((param_1 == 0) || (param_1 == -0xc)) ||
             ((iVar5 = *(int *)(param_1 + 0x10), iVar5 == 0 ||
              ((*(uint *)(iVar5 + 0x4c) & 0x103) != 0x103)))) {
            iVar5 = 0;
          }
          this = CEquipManager::FindByID((CEquipManager *)(iVar5 + 0xe4),*(ushort *)(puVar3 + 2));
          if (this != (CEquip *)0x0) {
            if (*(int *)(param_2 + 0x10) == 0x13) {
              CEShield::ShieldBatteryBoost((CEShield *)this,(float)puVar3[3]);
            }
            else if (((*(int *)(this + 0x14) == 0x10000) && (1 < *(uint *)(this + 0x28))) &&
                    ((float)puVar3[3] == _DAT_005c7474)) {
              CECargo::RemoveFromStack((CECargo *)this,1);
            }
            else {
              (**(code **)(*(int *)this + 0x40))(puVar3[3]);
            }
          }
        }
        else {
          if ((((param_1 == 0) || (param_1 == -0xc)) ||
              (piVar6 = *(int **)(param_1 + 0x10), piVar6 == (int *)0x0)) ||
             ((piVar6[0x13] & 0x103U) != 0x103)) {
            piVar6 = (int *)0x0;
          }
          (**(code **)(*piVar6 + 0xe8))(*(undefined2 *)(puVar3 + 2),puVar3[3]);
        }
      }
    }
  }
  if (((param_1 == 0) || (param_1 == -0xc)) ||
     ((piVar6 = *(int **)(param_1 + 0x10), piVar6 == (int *)0x0 ||
      ((piVar6[0x13] & 0x103U) != 0x103)))) {
    piVar6 = (int *)0x0;
  }
  (**(code **)(*piVar6 + 0xfc))(param_2,1);
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar5 = *(int *)(param_1 + 0x10), iVar5 == 0)) ||
     ((*(uint *)(iVar5 + 0x4c) & 0x103) != 0x103)) {
    iVar5 = 0;
  }
  CEquipManager::CleanUp((CEquipManager *)(iVar5 + 0xe4));
  return;
}

