
CEquip * __thiscall FUN_004e7e20(int param_1,ushort param_2)

{
  int iVar1;
  CEquip *pCVar2;
  
  if ((((param_2 != *(ushort *)SUBOBJ_ID_NONE_exref) &&
       (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0)) && (iVar1 != 8)) &&
     (((iVar1 != -4 && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) &&
      ((*(uint *)(iVar1 + 0x4c) & 0x503) == 0x503)))) {
                    /* WARNING: Could not recover jumptable at 0x004e7e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pCVar2 = CEquipManager::FindByID((CEquipManager *)(iVar1 + 0xe4),param_2);
    return pCVar2;
  }
  return (CEquip *)0x0;
}

