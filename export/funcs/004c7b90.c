
CEEngine FUN_004c7b90(void)

{
  int iVar1;
  CEquip *pCVar2;
  CEEngine *pCVar3;
  
  iVar1 = FUN_0054baf0();
  if ((((iVar1 != 0) && (iVar1 != -0xc)) && (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x4c) & 0x503) == 0x503)) {
    pCVar2 = CEquipManager::FindFirst((CEquipManager *)(iVar1 + 0xe4),0x20000);
    pCVar3 = CEEngine::cast(pCVar2);
    if (pCVar3 != (CEEngine *)0x0) {
      return pCVar3[0x54];
    }
  }
  return (CEEngine)0x0;
}

