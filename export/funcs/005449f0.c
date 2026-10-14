
IObjInspect * __fastcall FUN_005449f0(int *param_1)

{
  IObjInspect *pIVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  CEquip *pCVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  char cVar11;
  CShip *pCStack_1c;
  float local_18;
  float local_14;
  int iStack_10;
  IObjInspect *local_c;
  IObjInspect *local_8;
  
  local_8 = (IObjInspect *)0x0;
  local_18 = 1e+09;
  local_c = (IObjInspect *)0x0;
  local_14 = 1e+09;
  pCStack_1c = (CShip *)(**(code **)(*param_1 + 0x150))();
  if ((pCStack_1c == (CShip *)0x0) || ((*(uint *)(pCStack_1c + 0x4c) & 0x503) != 0x503)) {
    pCStack_1c = (CShip *)0x0;
  }
  pCVar5 = CEquipManager::FindFirst((CEquipManager *)(pCStack_1c + 0xe4),0x80000);
  if ((pCVar5 != (CEquip *)0x0) && (iStack_10 = 0, 0 < *(int *)(pCVar5 + 0x824))) {
    do {
      if ((*(int *)(pCVar5 + iStack_10 * 8 + 0x24) != 0) &&
         (pIVar1 = (IObjInspect *)(*(int *)(pCVar5 + iStack_10 * 8 + 0x24) + -8),
         pIVar1 != (IObjInspect *)0x0)) {
        cVar11 = '\0';
        bVar3 = CShip::is_enemy(pCStack_1c,pIVar1);
        if ((bVar3) && (cVar4 = (**(code **)(*(int *)pIVar1 + 0x38))(), cVar4 == '\0')) {
          iVar6 = (**(code **)(*(int *)pIVar1 + 0x150))();
          if ((iVar6 != 0) && (((byte)*(undefined4 *)(iVar6 + 0x4c) & 3) == 3)) {
            uVar7 = (**(code **)(*(int *)pIVar1 + 0x20))(0);
            iVar8 = FUN_005416c0(uVar7);
            if (iVar8 != 0) {
              cVar11 = *(char *)(iVar8 + 0xa8);
            }
            if (((*(uint *)(iVar6 + 0xe0) & 0x7f0000) == 0) && (cVar11 == '\0')) goto LAB_00544b56;
          }
          pfVar9 = (float *)(**(code **)*param_1)();
          pfVar10 = (float *)(*(code *)**(undefined4 **)pIVar1)();
          fVar2 = SQRT((pfVar10[1] - pfVar9[1]) * (pfVar10[1] - pfVar9[1]) +
                       (pfVar10[2] - pfVar9[2]) * (pfVar10[2] - pfVar9[2]) +
                       (*pfVar10 - *pfVar9) * (*pfVar10 - *pfVar9));
          if (fVar2 < local_18) {
            local_18 = fVar2;
            local_8 = pIVar1;
          }
          if ((cVar11 != '\0') && (fVar2 < local_14)) {
            local_14 = fVar2;
            local_c = pIVar1;
          }
        }
      }
LAB_00544b56:
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < *(int *)(pCVar5 + 0x824));
    if (local_c != (IObjInspect *)0x0) {
      return local_c;
    }
  }
  return local_8;
}

