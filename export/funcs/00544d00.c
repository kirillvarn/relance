
undefined4 __thiscall FUN_00544d00(uint param_1,undefined4 param_2)

{
  int iVar1;
  CEquip *pCVar2;
  uint local_4;
  
  if ((((param_1 == 0) || (param_1 == 0xfffffff4)) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)
      ) || ((*(uint *)(iVar1 + 0x4c) & 0x503) != 0x503)) {
    iVar1 = 0;
  }
  local_4 = param_1;
  pCVar2 = CEquipManager::FindFirst((CEquipManager *)(iVar1 + 0xe4),0x100000);
  if (pCVar2 != (CEquip *)0x0) {
    local_4 = (uint)*(ushort *)(pCVar2 + 8);
    (**(code **)(*(int *)(param_1 + 4) + 0x3c))(&local_4,param_2,DAT_00673344);
    return 1;
  }
  return 0;
}

