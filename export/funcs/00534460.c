
undefined1 __thiscall FUN_00534460(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  CEquip *pCVar5;
  CEquip *pCVar6;
  undefined4 unaff_EDI;
  undefined4 *puVar7;
  undefined1 local_29;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_2;
  local_29 = 0;
  if (*param_2 == 0x18) {
    local_10 = param_2[6];
    piVar1 = param_2 + 4;
    local_c = param_2[7];
    local_8 = param_2[8];
    if (*piVar1 != 0) {
      param_2 = (int *)(uint)*(ushort *)(param_2 + 4);
      puVar7 = &param_2;
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
    (**(code **)(*(int *)(param_1 + 4) + 0x34))(puVar7,*piVar1 != 0,&local_10,DAT_00673344);
    local_29 = 1;
  }
  else if (*param_2 == 0x19) {
    if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar4 = *(int *)(param_1 + 0x10), iVar4 == 0)) ||
       ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
      iVar4 = 0;
    }
    pCVar5 = CEquipManager::FindByID((CEquipManager *)(iVar4 + 0xe4),(ushort)param_2[4]);
    if ((pCVar5 != (CEquip *)0x0) && (cVar2 = (**(code **)(*(int *)pCVar5 + 8))(), cVar2 == '\0')) {
      uVar3 = (undefined1)((uint)unaff_EDI >> 0x18);
      switch(piVar1[5]) {
      case 0:
        uStack_28 = (uint)*(ushort *)(pCVar5 + 8);
        (**(code **)(*(int *)(param_1 + 4) + 0x4c))(&uStack_28,0,DAT_00673344);
        return uVar3;
      case 1:
        uStack_24 = (uint)*(ushort *)(pCVar5 + 8);
        (**(code **)(*(int *)(param_1 + 4) + 0x4c))(&uStack_24,1,DAT_00673344);
        return uVar3;
      case 2:
        uStack_20 = (uint)*(ushort *)(pCVar5 + 8);
        iVar4 = *(int *)(param_1 + 4);
        cVar2 = (**(code **)(*(int *)pCVar5 + 4))(DAT_00673344);
        (**(code **)(iVar4 + 0x4c))(&uStack_20,'\x01' - (cVar2 != '\0'));
        return uVar3;
      case 3:
        CEquipTraverser::CEquipTraverser((CEquipTraverser *)&local_10,*(int *)(pCVar5 + 0x14));
        while( true ) {
          if ((((param_1 == 0) || (param_1 == -0xc)) ||
              (iVar4 = *(int *)(param_1 + 0x10), iVar4 == 0)) ||
             ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)) {
            iVar4 = 0;
          }
          pCVar6 = CEquipManager::Traverse
                             ((CEquipManager *)(iVar4 + 0xe4),(CEquipTraverser *)&local_10);
          if (pCVar6 == (CEquip *)0x0) break;
          if (pCVar6 == pCVar5) {
            cVar2 = (**(code **)(*(int *)pCVar6 + 4))();
            if (cVar2 == '\0') {
              uStack_18 = (uint)*(ushort *)(pCVar6 + 8);
              (**(code **)(*(int *)(param_1 + 4) + 0x4c))(&uStack_18,1,DAT_00673344);
            }
          }
          else {
            cVar2 = (**(code **)(*(int *)pCVar6 + 4))();
            if (cVar2 != '\0') {
              uStack_1c = (uint)*(ushort *)(pCVar6 + 8);
              (**(code **)(*(int *)(param_1 + 4) + 0x4c))(&uStack_1c,0,DAT_00673344);
            }
          }
        }
        break;
      case 4:
        uVar3 = (**(code **)(*(int *)pCVar5 + 4))();
        param_2 = (int *)CONCAT31(param_2._1_3_,uVar3);
        CEquipTraverser::CEquipTraverser((CEquipTraverser *)&local_10,*(int *)(pCVar5 + 0x14));
        while( true ) {
          if (((param_1 == 0) || (param_1 == -0xc)) ||
             ((iVar4 = *(int *)(param_1 + 0x10), iVar4 == 0 ||
              ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103)))) {
            iVar4 = 0;
          }
          pCVar5 = CEquipManager::Traverse
                             ((CEquipManager *)(iVar4 + 0xe4),(CEquipTraverser *)&local_10);
          if (pCVar5 == (CEquip *)0x0) break;
          cVar2 = (**(code **)(*(int *)pCVar5 + 4))();
          if (cVar2 != (char)param_2) {
            uStack_14 = (uint)*(ushort *)(pCVar5 + 8);
            (**(code **)(*(int *)(param_1 + 4) + 0x4c))(&uStack_14,param_2,DAT_00673344);
          }
        }
      }
    }
  }
  return local_29;
}

