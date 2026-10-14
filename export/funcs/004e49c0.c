
void __thiscall FUN_004e49c0(int param_1,wchar_t *param_2)

{
  char cVar1;
  CArchGroup *this;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  CEquip *pCVar5;
  CAttachedEquip *pCVar6;
  wchar_t local_100 [128];
  
  *param_2 = L'\0';
  if (*(ushort *)(param_1 + 0x534) == *(ushort *)SUBOBJ_ID_NONE_exref) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x398);
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 == 8) {
    return;
  }
  if (iVar4 != -4) {
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x4c) & 0x103) != 0x103) {
      return;
    }
    this = CArchGroupManager::FindByID
                     ((CArchGroupManager *)(iVar4 + 0x144),*(ushort *)(param_1 + 0x534));
    if (this == (CArchGroup *)0x0) {
      pCVar5 = CEquipManager::FindByID((CEquipManager *)(iVar4 + 0xe4),*(ushort *)(param_1 + 0x534))
      ;
      pCVar6 = CAttachedEquip::cast(pCVar5);
      if (pCVar6 == (CAttachedEquip *)0x0) {
        return;
      }
      cVar1 = (**(code **)(*(int *)pCVar6 + 0x58))();
      if (cVar1 == '\0') {
        return;
      }
      iVar4 = FUN_004347e0(DAT_0067eca8,*(undefined4 *)(*(int *)(pCVar6 + 0xc) + 0x14),local_100,
                           0x80);
    }
    else {
      uVar2 = CArchGroup::GetCollisionGroupType(this);
      uVar3 = FUN_0045a7c0(uVar2);
      iVar4 = FUN_004347e0(DAT_0067eca8,uVar3,local_100,0x80);
    }
    if (iVar4 == 0) {
      local_100[0] = L'\0';
    }
    wcscpy(param_2,local_100);
    return;
  }
  return;
}

