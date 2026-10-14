
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f4f50(int *param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CSimple *this;
  float *pfVar4;
  int iVar5;
  CEquip *pCVar6;
  int iVar7;
  float *pfVar8;
  CShip *this_00;
  uint uVar9;
  int *piVar10;
  float fVar11;
  undefined4 uVar12;
  int iStack_18;
  int *piStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar3 = (int *)FUN_0054baf0();
  if ((piVar3 == (int *)0x0) || (cVar1 = (**(code **)(*piVar3 + 0x158))(), cVar1 != '\0')) {
LAB_004f52de:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = (int)DAT_005d97f0;
    DAT_00674c08 = 0;
    return;
  }
  piVar10 = piVar3 + 3;
  if ((piVar10 == (int *)0x0) ||
     ((this = (CSimple *)piVar3[4], this == (CSimple *)0x0 ||
      (((byte)*(undefined4 *)(this + 0x4c) & 3) != 3)))) {
    this = (CSimple *)0x0;
  }
  piStack_14 = piVar10;
  fVar11 = CSimple::get_hit_pts(this);
  if (fVar11 == _DAT_005c7474) goto LAB_004f52de;
  pfVar4 = (float *)(**(code **)*piVar3)();
  bVar2 = false;
  if (((piVar10 == (int *)0x0) || (iVar5 = piVar3[4], iVar5 == 0)) ||
     ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)) {
    iVar5 = 0;
  }
  pCVar6 = CEquipManager::FindFirst((CEquipManager *)(iVar5 + 0xe4),0x80000);
  if ((pCVar6 == (CEquip *)0x0) || (iVar5 = 0, piVar10 = piStack_14, *(int *)(pCVar6 + 0x824) < 1))
  {
LAB_004f50e8:
    *param_1 = 0;
  }
  else {
    do {
      if ((*(int *)(pCVar6 + iVar5 * 8 + 0x24) != 0) &&
         (piVar3 = (int *)(*(int *)(pCVar6 + iVar5 * 8 + 0x24) + -8), piVar3 != (int *)0x0)) {
        iStack_18 = 0;
        iVar7 = (**(code **)(*piVar3 + 0x88))(&iStack_18);
        if ((iVar7 == 0) && (iStack_18 == 0x800)) {
          pfVar8 = (float *)(**(code **)*piVar3)();
          FUN_00422b80(*pfVar8 - *pfVar4,pfVar8[1] - pfVar4[1],pfVar8[2] - pfVar4[2]);
          if (fStack_10 * fStack_10 + fStack_c * fStack_c + fStack_8 * fStack_8 < _DAT_005d97f8) {
            bVar2 = true;
            iVar7 = (**(code **)(*piVar3 + 0x20))();
            if (*param_1 != iVar7) {
              *param_1 = iVar7;
              FUN_00489e80(DAT_00674bf4,0);
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(pCVar6 + 0x824));
    piVar10 = piStack_14;
    if (!bVar2) goto LAB_004f50e8;
  }
  if (((piVar10 == (int *)0x0) || (this_00 = (CShip *)piVar10[1], this_00 == (CShip *)0x0)) ||
     ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)) {
    this_00 = (CShip *)0x0;
  }
  bVar2 = CShip::is_using_tradelane(this_00);
  if (bVar2) {
    return;
  }
  fVar11 = (float)param_1[2];
  param_1[2] = (int)(param_2 + fVar11);
  if (param_2 + fVar11 < DAT_005d97f0) {
    return;
  }
  piVar3 = (int *)(**(code **)(*(int *)PTR_DAT_00613ed0 + 8))();
  fStack_10 = *pfVar4;
  fStack_c = pfVar4[1];
  fStack_8 = pfVar4[2];
  uStack_4 = DAT_005d97f4;
  uVar9 = (**(code **)(*piVar3 + 0x20))(&fStack_10);
  if (uVar9 != param_1[1]) {
    if ((uVar9 & 0x40000) == 0) {
      DAT_00674c08 = 0;
    }
    else if (((piVar10 != (int *)0x0) && (iVar5 = piVar10[1], iVar5 != 0)) &&
            (((*(uint *)(iVar5 + 0x4c) & 0x503) == 0x503 && (*(int *)(iVar5 + 0x218) == 0)))) {
      DAT_00674c08 = 1;
    }
    if (((uVar9 & 0x40000) == 0) || ((param_1[1] & 0x40000U) != 0)) {
      if (((uVar9 & 0x1000) == 0) || ((param_1[1] & 0x1000U) != 0)) {
        if (((uVar9 & 0x4000) == 0) || ((param_1[1] & 0x4000U) != 0)) {
          if (((uVar9 & 0x100000) == 0) || ((param_1[1] & 0x100000U) != 0)) {
            if (((uVar9 & 0x80000) == 0) || ((param_1[1] & 0x80000U) != 0)) goto LAB_004f52ca;
            FUN_00489e80(DAT_00674be0,0);
            uVar12 = DAT_00674bd8;
          }
          else {
            FUN_00489e80(DAT_00674be0,0);
            uVar12 = DAT_00674bdc;
          }
        }
        else {
          FUN_00489e80(DAT_00674bf0,0);
          uVar12 = DAT_00674be4;
        }
      }
      else {
        FUN_00489e80(DAT_00674bf0,0);
        uVar12 = DAT_00674be8;
      }
    }
    else {
      if ((((piVar10 == (int *)0x0) || (iVar5 = piVar10[1], iVar5 == 0)) ||
          ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)) || (*(int *)(iVar5 + 0x218) != 0))
      goto LAB_004f52ca;
      FUN_00489e80(DAT_00674bf0,0);
      uVar12 = DAT_00674bec;
    }
    FUN_00489e80(uVar12,0);
  }
LAB_004f52ca:
  param_1[1] = uVar9;
  param_1[2] = 0;
  return;
}

