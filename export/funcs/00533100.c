
undefined4 __thiscall FUN_00533100(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  int iVar2;
  CEquip *pCVar3;
  
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0)) ||
     ((*(uint *)(iVar2 + 0x4c) & 0x103) != 0x103)) {
    iVar2 = 0;
  }
  pCVar3 = CEquipManager::FindByID((CEquipManager *)(iVar2 + 0xe4),param_2);
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0xb8);
  while( true ) {
    if (puVar1 == *(undefined4 **)(param_1 + 0xb8)) {
      return 0;
    }
    if (*(CEquip **)(puVar1[2] + 4) == pCVar3) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

