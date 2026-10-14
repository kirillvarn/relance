
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004e79f0(int param_1,int param_2,int param_3,undefined2 *param_4,undefined4 *param_5)

{
  CEquipManager *this;
  float fVar1;
  char cVar2;
  float *pfVar3;
  undefined4 uVar4;
  CEquip *pCVar5;
  undefined4 uVar6;
  CELauncher *pCVar7;
  undefined4 uVar8;
  CArchGroup *this_00;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  float *pfVar16;
  float fVar17;
  int *piStack_10c;
  undefined1 auStack_f4 [8];
  float fStack_ec;
  float local_e8;
  int *local_e4;
  float *pfStack_e0;
  float fStack_dc;
  float local_d8;
  CEquipTraverser aCStack_d4 [12];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 auStack_ac [35];
  undefined2 *puStack_20;
  undefined4 *puStack_1c;
  
  *param_4 = 0;
  *param_5 = 0;
  if ((((*(char *)(param_1 + 0x4b0) != '\0') && (iVar11 = *(int *)(param_1 + 0x398), iVar11 != 0))
      && (iVar11 != 8)) &&
     (((iVar11 != -4 && (local_e8 = *(float *)(iVar11 + 8), local_e8 != 0.0)) &&
      ((*(uint *)((int)local_e8 + 0x4c) & 0x103) == 0x103)))) {
    piStack_10c = (int *)(float)param_3;
    piVar14 = (int *)(param_1 + 0x3b8);
    fVar1 = (float)param_2;
    pfVar16 = &local_d8;
    piVar15 = piVar14;
    fVar17 = fVar1;
    local_e4 = piStack_10c;
    (**(code **)(*(int *)(param_1 + 0x3b8) + 0x38))(piVar14,pfVar16,fVar1);
    pfVar3 = (float *)(**(code **)(*piVar14 + 0xc))(piVar14);
    local_d8 = (float)local_e4 + pfVar3[2];
    fStack_dc = local_e8 + pfVar3[1];
    pfStack_e0 = (float *)(fStack_ec + *pfVar3);
    fStack_c8 = (_DAT_0067dc9c / _DAT_0067dc70) * ((float)piStack_10c - _DAT_0067dc60);
    fStack_c4 = (_DAT_0067dc9c / _DAT_0067dc74) * (fVar1 - _DAT_0067dc64);
    fStack_c0 = -_DAT_0067dc9c;
    puVar12 = &DAT_0067dbfc;
    puVar13 = auStack_ac;
    for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    if (DAT_00674b1c == (int *)0x0) {
      DAT_00674b1c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00674b1c + 0x2c))(DAT_00674b1c,&stack0xfffffef8,auStack_ac,&fStack_c8);
    local_e4 = piVar15;
    pfStack_e0 = pfVar16;
    fStack_dc = fVar17;
    cVar2 = (**(code **)(*(int *)(param_1 + 0x38) + 0x10))(&local_e4);
    if (cVar2 != '\0') {
      FUN_00422ba0(1);
      uVar4 = (**(code **)(*piVar14 + 0xc))(piVar14,auStack_f4);
      FUN_00422bc0(uVar4,piVar14);
      uVar4 = 0;
      CEquipTraverser::CEquipTraverser(aCStack_d4,0x1ee0);
      this = (CEquipManager *)(pfVar16 + 0x39);
      pCVar5 = CEquipManager::Traverse(this,aCStack_d4);
      while (pCVar5 != (CEquip *)0x0) {
        cVar2 = (**(code **)(*(int *)pCVar5 + 0x58))();
        if (cVar2 != '\0') {
          uVar8 = DAT_006127b8;
          uVar6 = (**(code **)(*(int *)pCVar5 + 0x84))(DAT_006127b8);
          cVar2 = FUN_00422e30(uVar6,uVar8);
          if (cVar2 != '\0') {
            *puStack_20 = *(undefined2 *)(pCVar5 + 8);
            uVar4 = *(undefined4 *)(*(int *)(pCVar5 + 0xc) + 0x14);
            pCVar7 = CELauncher::cast(pCVar5);
            if (pCVar7 == (CELauncher *)0x0) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)(*(int *)pCVar5 + 0xa0))();
            }
            *puStack_1c = uVar8;
          }
        }
        pCVar5 = CEquipManager::Traverse(this,aCStack_d4);
      }
      uVar10 = (uint)piStack_10c >> 8;
      piStack_10c = (int *)CONCAT31((int3)uVar10,1);
      this_00 = CArchGroupManager::Traverse
                          ((CArchGroupManager *)(pfVar16 + 0x51),(CArchGrpTraverser *)&piStack_10c);
      while (this_00 != (CArchGroup *)0x0) {
        lVar9 = CArchGroup::GetRootIndex(this_00);
        if (lVar9 != -1) {
          uVar8 = DAT_006127b8;
          lVar9 = CArchGroup::GetRootIndex(this_00);
          cVar2 = FUN_00422e30(lVar9,uVar8);
          if (cVar2 != '\0') {
            *puStack_20 = *(undefined2 *)(*(int *)(this_00 + 4) + 4);
            uVar10 = CArchGroup::GetCollisionGroupType(this_00);
            uVar4 = FUN_0045a7c0(uVar10);
            *puStack_1c = 1;
          }
        }
        this_00 = CArchGroupManager::Traverse
                            ((CArchGroupManager *)(pfVar16 + 0x51),(CArchGrpTraverser *)&piStack_10c
                            );
      }
      return uVar4;
    }
  }
  return 0;
}

