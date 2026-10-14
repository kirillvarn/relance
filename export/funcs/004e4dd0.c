
undefined4 __thiscall FUN_004e4dd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  CArchGroup *this;
  long lVar6;
  CEquip *pCVar7;
  undefined4 uVar8;
  undefined2 local_30 [2];
  undefined4 local_2c;
  undefined2 local_28 [2];
  undefined4 local_24;
  CArchGrpTraverser local_20 [8];
  int local_18 [2];
  CEquipTraverser local_10 [16];
  
  iVar3 = param_2;
  uVar8 = *(undefined4 *)(param_2 + 4);
  puVar5 = (undefined4 *)FUN_0053e430(&param_2);
  FUN_004e5760(local_30,*puVar5,uVar8);
  if (((((*(int *)(param_1 + 0x398) != 0) && (*(int *)(param_1 + 0x398) != 8)) &&
       (iVar1 = *(int *)(param_1 + 0x398), iVar1 != 0)) && ((iVar1 != 8 && (iVar1 != -4)))) &&
     ((iVar1 = *(int *)(iVar1 + 8), iVar1 != 0 && ((*(uint *)(iVar1 + 0x4c) & 0x103) == 0x103)))) {
    local_20[0] = (CArchGrpTraverser)0x1;
    param_2 = iVar1;
    this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_20);
    iVar2 = iVar1;
    while (this != (CArchGroup *)0x0) {
      local_30[0] = *(undefined2 *)(*(int *)(this + 4) + 4);
      local_2c = 0;
      FUN_004e5860(local_28,local_30);
      FUN_0046d660(local_28,&local_24);
      iVar2 = local_18[0];
      lVar6 = CArchGroup::GetRootIndex(this);
      *(long *)(iVar2 + 0x10) = lVar6;
      this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_20);
      iVar2 = param_2;
    }
    CEquipTraverser::CEquipTraverser(local_10,0x1ee0);
    pCVar7 = CEquipManager::Traverse((CEquipManager *)(iVar2 + 0xe4),local_10);
    while (pCVar7 != (CEquip *)0x0) {
      cVar4 = (**(code **)(*(int *)pCVar7 + 0x58))();
      if ((cVar4 != '\0') && (*(int *)(*(int *)(pCVar7 + 0xc) + 0x14) != 0)) {
        local_28[0] = *(undefined2 *)(pCVar7 + 8);
        local_24 = 0;
        FUN_004e5860(local_18,local_28);
        iVar1 = local_18[0];
        uVar8 = (**(code **)(*(int *)pCVar7 + 0x84))();
        *(undefined4 *)(iVar1 + 0x10) = uVar8;
      }
      pCVar7 = CEquipManager::Traverse((CEquipManager *)(iVar2 + 0xe4),local_10);
    }
  }
  return *(undefined4 *)(iVar3 + 0x10);
}

