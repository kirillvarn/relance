
undefined4 __thiscall FUN_00544c30(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  CEquip *pCVar4;
  
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar3 = *(int *)(param_1 + 0x10), iVar3 == 0)) ||
     ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503)) {
    iVar3 = 0;
  }
  pCVar4 = CEquipManager::FindFirst((CEquipManager *)(iVar3 + 0xe4),0x100000);
  piVar1 = param_2;
  if (pCVar4 == (CEquip *)0x0) {
    return 0;
  }
  if ((param_2 == (int *)0x0) || (cVar2 = (**(code **)(*(int *)pCVar4 + 4))(), cVar2 != '\0')) {
    param_2 = (int *)(uint)*(ushort *)(pCVar4 + 8);
    (**(code **)(*(int *)(param_1 + 4) + 0x4c))(&param_2,0,DAT_00673344);
    return 1;
  }
  iVar3 = (**(code **)(*piVar1 + 0x150))();
  if (iVar3 == 0) {
    return 1;
  }
  if ((*(uint *)(iVar3 + 0x4c) & 0x803) != 0x803) {
    return 1;
  }
  param_2 = (int *)(uint)*(ushort *)(pCVar4 + 8);
  (**(code **)(*(int *)(param_1 + 4) + 0x40))(&param_2,piVar1,DAT_00673344);
  return 1;
}

