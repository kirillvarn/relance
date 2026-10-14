
void __thiscall FUN_00534190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  CEquip *pCVar5;
  
  bVar3 = SubObjectID::IsShieldEquipID((ushort)param_3);
  if (bVar3) {
    if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar4 = *(int *)(param_1 + 0x10), iVar4 == 0)) ||
       ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
      iVar4 = 0;
    }
    pCVar5 = CEquipManager::FindByID((CEquipManager *)(iVar4 + 0xe4),(ushort)param_3);
    for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0xb8);
        puVar1 != *(undefined4 **)(param_1 + 0xb8); puVar1 = (undefined4 *)*puVar1) {
      if (*(CEquip **)(puVar1[2] + 4) == pCVar5) {
        piVar2 = (int *)puVar1[2];
        if ((piVar2 != (int *)0x0) && (*(int *)(piVar2[1] + 0x14) == 0x100)) {
          (**(code **)(*piVar2 + 0x18))(param_2,param_4);
          return;
        }
        break;
      }
    }
  }
  FUN_00539d80(param_2,param_3,param_4);
  return;
}

