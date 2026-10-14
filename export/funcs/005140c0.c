
undefined4 FUN_005140c0(int param_1)

{
  int iVar1;
  CEquip *pCVar2;
  
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) ||
     ((*(uint *)(iVar1 + 0x4c) & 0x303) != 0x303)) {
    iVar1 = 0;
  }
  pCVar2 = CEquipManager::FindFirst((CEquipManager *)(iVar1 + 0xe4),0x800000);
  if (pCVar2 == (CEquip *)0x0) {
    return 0;
  }
  if (*(int *)(pCVar2 + 0xc) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(pCVar2 + 0xc) + 4);
}

