
void __thiscall FUN_005386d0(int *param_1,float param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  
  piVar7 = param_3;
  iVar9 = *param_1;
  if ((iVar9 != 0) && (iVar11 = param_1[3], -1 < iVar11)) {
    iVar6 = param_1[1];
    fVar5 = param_2 + (float)param_1[4];
    iVar1 = iVar6 * 0x10 + iVar9;
    param_1[4] = (int)fVar5;
    if (fVar5 < *(float *)(iVar1 + -0x10)) {
      if (iVar11 < iVar6) {
        pfVar12 = (float *)(iVar11 * 0x10 + iVar9);
        do {
          if (*pfVar12 < fVar5) {
            param_1[3] = iVar11;
          }
          iVar11 = iVar11 + 1;
          pfVar12 = pfVar12 + 4;
        } while (iVar11 < iVar6);
      }
    }
    else {
      param_1[3] = -1;
    }
    iVar11 = param_1[3];
    if (iVar11 == -1) {
      if (*(int *)(iVar1 + -4) == -1) {
        if (param_3[0x35] == 0) {
          return;
        }
        iVar9 = param_3[0x37];
        if (iVar9 != 0) {
          iVar11 = param_3[0x35];
          puVar10 = (undefined4 *)FUN_005afe60();
          puVar10[1] = *(undefined4 *)(iVar9 + 0x40);
          *puVar10 = 0;
          puVar10[2] = iVar11;
          if (*(undefined4 **)(iVar9 + 0x40) == (undefined4 *)0x0) {
            *(undefined4 **)(iVar9 + 0x3c) = puVar10;
          }
          else {
            **(undefined4 **)(iVar9 + 0x40) = puVar10;
          }
          *(undefined4 **)(iVar9 + 0x40) = puVar10;
          piVar7[0x35] = 0;
          piVar7[0x37] = 0;
        }
        (**(code **)(*piVar7 + 8))();
        iVar9 = piVar7[0x34];
        piVar7[0x34] = iVar9 + -1;
        if (0 < iVar9 + -1) {
          return;
        }
        (**(code **)*piVar7)(1);
        return;
      }
      FUN_004115b0(iVar1 + -0xc);
      fVar5 = *(float *)(param_1[1] * 0x10 + -8 + *param_1);
    }
    else {
      fVar2 = *(float *)(iVar11 * 0x10 + iVar9);
      pfVar12 = (float *)(iVar11 * 0x10 + iVar9);
      fVar3 = *(float *)((iVar11 + 1) * 0x10 + iVar9);
      fVar4 = *pfVar12;
      param_2 = (float)CONCAT13(param_2._3_1_,*(undefined3 *)(pfVar12 + 1));
      uVar8 = ftol();
      param_2 = (float)CONCAT31(param_2._1_3_,uVar8);
      uVar8 = ftol();
      param_2._0_2_ = CONCAT11(uVar8,param_2._0_1_);
      uVar8 = ftol();
      param_2._0_3_ = CONCAT12(uVar8,param_2._0_2_);
      FUN_004115b0(&param_2);
      iVar9 = param_1[3] * 0x10 + *param_1;
      fVar5 = (*(float *)(param_1[3] * 0x10 + 0x18 + *param_1) - *(float *)(iVar9 + 8)) *
              ((fVar5 - fVar2) / (fVar3 - fVar4)) + *(float *)(iVar9 + 8);
    }
    FUN_00411300(fVar5 * (float)param_1[5]);
  }
  return;
}

