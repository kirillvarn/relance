
uint FUN_004c7be0(void)

{
  int iVar1;
  CEquip *pCVar2;
  CEEngine *pCVar3;
  uint uVar4;
  
  iVar1 = FUN_0054baf0();
  uVar4 = 0;
  if ((((iVar1 != 0) && (uVar4 = 0, iVar1 != -0xc)) && (uVar4 = *(uint *)(iVar1 + 0x10), uVar4 != 0)
      ) && ((*(uint *)(uVar4 + 0x4c) & 0x503) == 0x503)) {
    pCVar2 = CEquipManager::FindFirst((CEquipManager *)(uVar4 + 0xe4),0x20000);
    pCVar3 = CEEngine::cast(pCVar2);
    uVar4 = 0;
    if (pCVar3 != (CEEngine *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004c7c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(int *)pCVar3 + 4))();
      return uVar4;
    }
  }
  return uVar4 & 0xffffff00;
}

