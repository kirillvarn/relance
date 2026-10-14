
void __thiscall FUN_00533be0(int param_1,undefined4 param_2)

{
  int iVar1;
  CEquip *pCVar2;
  CAttachedEquip *pCVar3;
  CArchGroup *this;
  CArchGrpTraverser local_18 [8];
  CEquipTraverser local_10 [16];
  
  CEquipTraverser::CEquipTraverser(local_10);
  while( true ) {
    if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) ||
       ((*(uint *)(iVar1 + 0x4c) & 0x103) != 0x103)) {
      iVar1 = 0;
    }
    pCVar2 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
    if (pCVar2 == (CEquip *)0x0) break;
    pCVar3 = CAttachedEquip::cast(pCVar2);
    if ((pCVar3 != (CAttachedEquip *)0x0) && (*(int *)(pCVar2 + 0x14) != 0x100)) {
      (**(code **)(*(int *)pCVar2 + 0x88))(2);
    }
    (**(code **)(*(int *)pCVar2 + 0x34))();
  }
  local_18[0] = (CArchGrpTraverser)0x1;
  while( true ) {
    if (((param_1 == 0) || (param_1 == -0xc)) ||
       ((iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0 ||
        ((*(uint *)(iVar1 + 0x4c) & 0x103) != 0x103)))) {
      iVar1 = 0;
    }
    this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_18);
    if (this == (CArchGroup *)0x0) break;
    if (*(int *)(this + 0x14) != 3) {
      CArchGroup::Kill(this,1);
    }
  }
  if (((param_1 == 0) || (param_1 == -0xc)) ||
     ((iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0 || ((*(uint *)(iVar1 + 0x4c) & 0x103) != 0x103))
     )) {
    iVar1 = 0;
  }
  CArchGroupManager::DestroyDeadGroups((CArchGroupManager *)(iVar1 + 0x144));
  FUN_0053a880(param_2);
  return;
}

