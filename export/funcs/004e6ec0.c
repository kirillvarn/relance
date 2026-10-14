
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e6ec0(int param_1)

{
  int iVar1;
  char cVar2;
  CEquip *pCVar3;
  uint *puVar4;
  CELauncher *pCVar5;
  CEGun *this;
  Gun *pGVar6;
  int iVar7;
  float10 fVar8;
  uint local_24;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  CEquipTraverser local_10 [16];
  
  iVar1 = *(int *)(param_1 + 0x398);
  if ((((iVar1 != 0) && (iVar1 != 8)) && (iVar1 != -4)) &&
     ((iVar1 = *(int *)(iVar1 + 8), iVar1 != 0 && ((*(uint *)(iVar1 + 0x4c) & 0x103) == 0x103)))) {
    FUN_00548eb0(*(undefined4 *)(iVar1 + 0xb0));
    CEquipTraverser::CEquipTraverser(local_10,0x1fe0);
    pCVar3 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
    local_24 = DAT_00679b98;
    while (DAT_00679b98 = local_24, pCVar3 != (CEquip *)0x0) {
      fVar8 = (float10)(**(code **)(*(int *)pCVar3 + 0x44))();
      if ((float10)_DAT_005c7474 < (float10)_DAT_005c75dc - fVar8) {
        puVar4 = (uint *)FUN_0045a1a0(auStack_18,(float)((float10)_DAT_005c75dc - fVar8));
        local_24 = *puVar4;
      }
      pCVar5 = CELauncher::cast(pCVar3);
      if (((pCVar5 != (CELauncher *)0x0) && (this = CEGun::cast(pCVar3), this != (CEGun *)0x0)) &&
         ((pGVar6 = CEGun::GunArch(this), pGVar6 != (Gun *)0x0 &&
          ((pGVar6[0xba] == (Gun)0x0 &&
           (cVar2 = (**(code **)(*(int *)pCVar3 + 4))(), local_24 = DAT_00679ba4, cVar2 == '\0')))))
         ) {
        local_24 = DAT_00679bb4;
      }
      if ((*(short *)(param_1 + 0x3b4) == *(short *)(pCVar3 + 8)) &&
         (cVar2 = FUN_0045a740(), cVar2 == '\0')) {
        puVar4 = (uint *)FUN_00561f20(auStack_14,local_24);
        local_24 = *puVar4;
      }
      iVar7 = (**(code **)(*(int *)pCVar3 + 0x84))();
      if (iVar7 != -1) {
        FUN_00405a00(iVar7,1,(((local_24 >> 0x18) << 8 | local_24 & 0xff) << 8 |
                             local_24 >> 8 & 0xff) << 8 | local_24 >> 0x10 & 0xff);
      }
      pCVar3 = CEquipManager::Traverse((CEquipManager *)(iVar1 + 0xe4),local_10);
      local_24 = DAT_00679b98;
    }
  }
  return;
}

