
undefined4 FUN_00555240(void)

{
  int iVar1;
  CEquip *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CEquip *pCVar5;
  
  iVar1 = FUN_0054baf0();
  if ((((iVar1 != 0) && (iVar1 != -0xc)) && (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x4c) & 0x503) == 0x503)) {
    pCVar2 = CEquipManager::FindFirst((CEquipManager *)(iVar1 + 0xe4),0x80000);
    if (pCVar2 != (CEquip *)0x0) {
      iVar1 = 0;
      if (0 < *(int *)(pCVar2 + 0x824)) {
        pCVar5 = pCVar2 + 0x24;
        do {
          if ((*(int *)pCVar5 != 0) && (iVar3 = *(int *)pCVar5 + -8, iVar3 != 0)) {
            uVar4 = FUN_0054baf0(iVar3);
            iVar3 = FUN_0045a490(uVar4);
            if (iVar3 == -1) {
              return 1;
            }
          }
          iVar1 = iVar1 + 1;
          pCVar5 = pCVar5 + 8;
        } while (iVar1 < *(int *)(pCVar2 + 0x824));
      }
    }
  }
  return 0;
}

