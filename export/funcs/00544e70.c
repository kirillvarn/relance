
void __thiscall FUN_00544e70(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  CEquip *pCVar4;
  CELauncher *pCVar5;
  CEquip *pCVar6;
  CEquipManager *pCVar7;
  CEquipTraverser local_10 [16];
  
  if ((((param_1 != 0) && (param_1 != -0xc)) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x4c) & 0x503) == 0x503)) {
    if (*param_2 == 0x1a) {
      *param_2 = 0x19;
      CEquipTraverser::CEquipTraverser(local_10,0x1fe0);
      pCVar7 = (CEquipManager *)(iVar1 + 0xe4);
      pCVar4 = CEquipManager::Traverse(pCVar7,local_10);
      while ((pCVar4 != (CEquip *)0x0 &&
             ((pCVar5 = CELauncher::cast(pCVar4), pCVar5 == (CELauncher *)0x0 ||
              (cVar2 = (**(code **)(*(int *)pCVar4 + 4))(), cVar2 == '\0'))))) {
        pCVar4 = CEquipManager::Traverse(pCVar7,local_10);
      }
      pCVar6 = CEquipManager::Traverse(pCVar7,local_10);
      if (pCVar6 == (CEquip *)0x0) {
        pCVar6 = CEquipManager::Traverse(pCVar7,local_10);
      }
      if ((pCVar6 == pCVar4) || (pCVar6 == (CEquip *)0x0)) {
        uVar3 = *(ushort *)SUBOBJ_ID_NONE_exref;
      }
      else {
        uVar3 = *(ushort *)(pCVar6 + 8);
      }
      param_2[5] = 3;
      param_2[4] = (uint)uVar3;
    }
    else if (*param_2 == 0x1b) {
      *param_2 = 0x19;
      CEquipTraverser::CEquipTraverser(local_10,0x1fe0);
      pCVar7 = (CEquipManager *)(iVar1 + 0xe4);
      pCVar4 = CEquipManager::ReverseTraverse(pCVar7,local_10);
      while ((pCVar4 != (CEquip *)0x0 &&
             ((pCVar5 = CELauncher::cast(pCVar4), pCVar5 == (CELauncher *)0x0 ||
              (cVar2 = (**(code **)(*(int *)pCVar4 + 4))(), cVar2 == '\0'))))) {
        pCVar4 = CEquipManager::ReverseTraverse(pCVar7,local_10);
      }
      pCVar6 = CEquipManager::ReverseTraverse(pCVar7,local_10);
      if (pCVar6 == (CEquip *)0x0) {
        pCVar6 = CEquipManager::ReverseTraverse(pCVar7,local_10);
      }
      if ((pCVar6 != pCVar4) && (pCVar6 != (CEquip *)0x0)) {
        uVar3 = *(ushort *)(pCVar6 + 8);
        param_2[5] = 3;
        param_2[4] = (uint)uVar3;
        return;
      }
      uVar3 = *(ushort *)SUBOBJ_ID_NONE_exref;
      param_2[5] = 3;
      param_2[4] = (uint)uVar3;
      return;
    }
  }
  return;
}

