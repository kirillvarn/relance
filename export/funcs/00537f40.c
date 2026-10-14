
int FUN_00537f40(int param_1,int param_2,float *param_3,float param_4,char param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_81c;
  int local_818;
  undefined1 local_814 [8];
  int local_80c;
  int local_808;
  int local_804;
  undefined4 *local_800 [256];
  int aiStack_400 [256];
  
  iVar13 = 0;
  iVar9 = ftol();
  local_80c = iVar9;
  iVar10 = ftol();
  local_808 = iVar10;
  iVar11 = ftol();
  if (DAT_00678990 != 0) {
    local_800[0] = &DAT_00678980;
  }
  local_81c = (uint)(DAT_00678990 != 0);
  iVar9 = iVar9 - DAT_00678994;
  iVar10 = iVar10 - DAT_00678998;
  local_804 = iVar11;
  if (iVar9 < iVar11) {
    if (iVar10 < iVar11) {
      iVar12 = FUN_00538200(local_800 + local_81c,DAT_00678984,local_814);
      local_81c = local_81c + iVar12;
    }
    if (-iVar10 < iVar11) {
      iVar12 = FUN_00538200(local_800 + local_81c,DAT_0067898c,local_814);
      local_81c = local_81c + iVar12;
    }
  }
  if (-iVar9 < iVar11) {
    if (iVar10 < iVar11) {
      iVar9 = FUN_00538200(local_800 + local_81c,DAT_00678980,local_814);
      local_81c = local_81c + iVar9;
    }
    if (-iVar10 < iVar11) {
      iVar9 = FUN_00538200(local_800 + local_81c,DAT_00678988,local_814);
      local_81c = local_81c + iVar9;
    }
  }
  local_818 = 0;
  if (0 < (int)local_81c) {
    do {
      for (puVar1 = (undefined4 *)local_800[local_818][4]; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar9 = 0;
        if (0 < iVar13) {
          do {
            if (*(int *)(aiStack_400[iVar9] + 4) == puVar1[1]) {
              if (iVar9 != -1) goto LAB_005380f8;
              break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar13);
        }
        iVar9 = 0;
        iVar11 = iVar13;
        iVar10 = iVar13;
        if (0 < iVar13) {
          do {
            iVar10 = (iVar11 + iVar9) / 2;
            if ((int)puVar1[4] < *(int *)(aiStack_400[iVar10] + 0x10)) {
              iVar9 = iVar10 + 1;
              iVar10 = iVar11;
            }
            iVar11 = iVar10;
          } while (iVar9 < iVar10);
        }
        puVar7 = puVar1;
        if (iVar13 < 0x100) {
          iVar13 = iVar13 + 1;
        }
        for (; iVar10 < iVar13; iVar10 = iVar10 + 1) {
          puVar2 = (undefined4 *)aiStack_400[iVar10];
          aiStack_400[iVar10] = (int)puVar7;
          puVar7 = puVar2;
        }
LAB_005380f8:
      }
      local_818 = local_818 + 1;
    } while (local_818 < (int)local_81c);
  }
  iVar10 = 0;
  iVar9 = 0;
  local_81c = 0;
  if (0 < iVar13) {
    do {
      local_81c = iVar10;
      if (param_2 <= iVar10) break;
      if (((param_5 != '\0') || ((*(byte *)(*(int *)(aiStack_400[iVar9] + 4) + 0xb4) & 1) == 0)) &&
         (iVar11 = aiStack_400[iVar9], fVar4 = *param_3 - (float)*(int *)(iVar11 + 8),
         fVar6 = param_3[2] - (float)*(int *)(iVar11 + 0xc),
         fVar5 = (float)*(int *)(iVar11 + 0x10) + param_4,
         fVar4 * fVar4 + fVar6 * fVar6 < fVar5 * fVar5)) {
        *(undefined4 *)(param_1 + iVar10 * 4) = *(undefined4 *)(iVar11 + 4);
        iVar10 = iVar10 + 1;
      }
      iVar9 = iVar9 + 1;
      local_81c = iVar10;
    } while (iVar9 < iVar13);
  }
  iVar13 = 0;
  iVar9 = 0;
  if (0 < (int)local_81c) {
    do {
      uVar3 = *(undefined4 *)(param_1 + iVar9 * 4);
      cVar8 = FUN_00410a40(param_3,param_4);
      if (cVar8 != '\0') {
        *(undefined4 *)(param_1 + iVar13 * 4) = uVar3;
        iVar13 = iVar13 + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_81c);
  }
  return iVar13;
}

