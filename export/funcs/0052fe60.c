
void FUN_0052fe60(CObject *param_1,int param_2,int *param_3,ushort *param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  CObject *pCVar5;
  int iVar6;
  int *piVar7;
  CEquip *pCVar8;
  CEShield *pCVar9;
  
  *param_3 = 0;
  *param_4 = *(ushort *)SUBOBJ_ID_NONE_exref;
  pCVar5 = GetRoot(param_1);
  iVar6 = FUN_005419a0(pCVar5);
  *param_3 = iVar6;
  if (iVar6 == 0) {
    return;
  }
  if (((iVar6 == -0xc) || (piVar1 = *(int **)(iVar6 + 0x10), piVar1 == (int *)0x0)) ||
     ((piVar1[0x13] & 0x103U) != 0x103)) {
    *param_4 = *(ushort *)SUBOBJ_ID_ROOT_exref;
    return;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar6 = *(int *)(param_1 + 4);
LAB_0052fef0:
    if (iVar6 != -1) goto LAB_0052fef8;
  }
  else {
    for (piVar7 = *(int **)(param_1 + 0x68); piVar7 != *(int **)(param_1 + 0x6c);
        piVar7 = piVar7 + 3) {
      if (*piVar7 == param_2) {
        iVar6 = piVar7[1];
        goto LAB_0052fef0;
      }
    }
  }
  iVar6 = *(int *)(param_1 + 4);
LAB_0052fef8:
  uVar4 = (**(code **)(*piVar1 + 0xf4))(iVar6);
  *param_4 = uVar4;
  bVar2 = SubObjectID::IsShieldEquipID(uVar4);
  if (!bVar2) {
    pCVar8 = CEquipManager::FindFirst((CEquipManager *)(piVar1 + 0x39),0x100);
    pCVar9 = CEShield::cast(pCVar8);
    if ((pCVar9 != (CEShield *)0x0) &&
       (cVar3 = (**(code **)(*(int *)pCVar9 + 0xc))(), cVar3 != '\0')) {
      *param_4 = *(ushort *)(pCVar9 + 8);
      return;
    }
  }
  return;
}

