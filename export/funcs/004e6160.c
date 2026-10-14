
void __fastcall FUN_004e6160(int param_1)

{
  int iVar1;
  CArchGroup *this;
  long lVar2;
  CEquip *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CArchGrpTraverser local_18 [8];
  CEquipTraverser local_10 [16];
  
  iVar1 = *(int *)(param_1 + 0x398);
  if ((((iVar1 != 0) && (iVar1 != 8)) && (iVar1 != -4)) &&
     ((iVar1 = *(int *)(iVar1 + 8), iVar1 != 0 && ((*(uint *)(iVar1 + 0x4c) & 0x103) == 0x103)))) {
    local_18[0] = (CArchGrpTraverser)0x1;
    this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_18);
    while (this != (CArchGroup *)0x0) {
      uVar5 = 0;
      lVar2 = CArchGroup::GetRootIndex(this);
      FUN_00405930(lVar2,uVar5);
      this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_18);
    }
    CEquipTraverser::CEquipTraverser(local_10,0x1fe0);
    pCVar3 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
    while (pCVar3 != (CEquip *)0x0) {
      iVar4 = (**(code **)(*(int *)pCVar3 + 0x84))();
      if (iVar4 != -1) {
        FUN_00405930(iVar4,1);
      }
      pCVar3 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
    }
  }
  return;
}

