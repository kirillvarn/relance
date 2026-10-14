
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4b50(int param_1,float *param_2,float *param_3,undefined1 *param_4)

{
  char cVar1;
  CEquip *pCVar2;
  CEShield *pCVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 fVar5;
  CEquipTraverser local_10 [16];
  
  *param_2 = 0.0;
  *param_3 = 0.0;
  if (*(float *)(param_1 + 0xb0) != DAT_00674950) {
    CEquipTraverser::CEquipTraverser(local_10,0x100);
    pCVar2 = CEquipManager::Traverse((CEquipManager *)(param_1 + 0xe4),local_10);
    while (pCVar2 != (CEquip *)0x0) {
      pCVar3 = CEShield::cast(pCVar2);
      if (pCVar3 != (CEShield *)0x0) {
        (**(code **)(*(int *)pCVar3 + 0x38))();
        iVar4 = ftol();
        fVar5 = extraout_ST0 - (float10)iVar4;
        if (fVar5 < (float10)_DAT_005c7474) {
          fVar5 = (float10)_DAT_005c7474;
        }
        *param_2 = (float)(fVar5 + (float10)*param_2);
        cVar1 = (**(code **)(*(int *)pCVar3 + 4))();
        if ((cVar1 != '\0') && (param_4 != (undefined1 *)0x0)) {
          *param_4 = 1;
        }
        cVar1 = (**(code **)(*(int *)pCVar3 + 0xc))();
        if (cVar1 != '\0') {
          fVar5 = (float10)(**(code **)(*(int *)pCVar3 + 0x3c))();
          fVar5 = fVar5 - (float10)iVar4;
          if (fVar5 < (float10)_DAT_005c7474) {
            fVar5 = (float10)_DAT_005c7474;
          }
          *param_3 = (float)(fVar5 + (float10)*param_3);
        }
      }
      pCVar2 = CEquipManager::Traverse((CEquipManager *)(param_1 + 0xe4),local_10);
    }
  }
  return;
}

