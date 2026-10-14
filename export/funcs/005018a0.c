
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005018a0(float *param_1,uint param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int local_50;
  undefined1 local_4c;
  float *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  float *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  float *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501f80(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  uVar2 = param_2;
  local_3c = (undefined1)param_3;
  local_38 = (float *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0;
  local_50 = 0;
  uVar7 = param_2 + 1;
  uVar3 = FUN_005ad970();
  if (uVar3 < uVar7) {
    piVar12 = &local_50;
    iVar4 = FUN_005ad970(piVar12);
    FUN_00537260(0,uVar7 - iVar4,piVar12);
    pfVar10 = local_38;
  }
  else {
    uVar3 = FUN_005ad970();
    pfVar10 = (float *)0x0;
    if (uVar7 < uVar3) {
      FUN_005995c0(uVar7 * 4,0);
      pfVar10 = local_38;
    }
  }
  local_4c = (undefined1)param_3;
  local_48 = (float *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_2 = 0;
  uVar3 = FUN_005ad970();
  if (uVar3 < uVar7) {
    puVar13 = &param_2;
    iVar4 = FUN_005ad970(puVar13);
    FUN_00537260(0,uVar7 - iVar4,puVar13);
    pfVar11 = local_48;
  }
  else {
    uVar3 = FUN_005ad970();
    pfVar11 = (float *)0x0;
    if (uVar7 < uVar3) {
      FUN_005995c0(uVar7 * 4,0);
      pfVar11 = local_48;
    }
  }
  local_2c = (undefined1)param_3;
  local_28 = (float *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_2 = 0;
  uVar3 = FUN_005ad970();
  if (uVar3 < uVar7) {
    puVar13 = &param_2;
    iVar4 = FUN_005ad970(puVar13);
    FUN_00537260(0,uVar7 - iVar4,puVar13);
  }
  else {
    uVar3 = FUN_005ad970();
    if (uVar7 < uVar3) {
      FUN_005995c0(uVar7 * 4,0);
    }
  }
  *pfVar10 = 0.5;
  iVar4 = 1;
  if (1 < (int)uVar2) {
    do {
      iVar5 = iVar4 + 1;
      pfVar10[iVar4] = _DAT_005c75dc / (_DAT_005cfc9c - pfVar10[iVar4 + -1]);
      iVar4 = iVar5;
    } while (iVar5 < (int)uVar2);
  }
  pfVar10[uVar2] = _DAT_005c75dc / (_DAT_005d55b4 - pfVar10[uVar2 - 1]);
  *pfVar11 = (param_1[1] - *param_1) * *pfVar10 * _DAT_005d4f28;
  if (1 < (int)uVar2) {
    param_2 = uVar2 - 1;
    pfVar6 = param_1;
    pfVar8 = pfVar11 + 1;
    do {
      param_2 = param_2 + -1;
      *pfVar8 = ((pfVar6[2] - *pfVar6) * _DAT_005d4f28 -
                *(float *)((int)pfVar6 + ((int)pfVar11 - (int)param_1))) *
                *(float *)((int)pfVar10 + (-4 - (int)local_48) + (int)(pfVar8 + 1));
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    } while (param_2 != 0);
    param_2 = 0;
    pfVar11 = local_48;
  }
  pfVar11[uVar2] =
       ((param_1[uVar2] - param_1[uVar2 - 1]) * _DAT_005d4f28 - pfVar11[uVar2 - 1]) * pfVar10[uVar2]
  ;
  local_28[uVar2] = pfVar11[uVar2];
  if (-1 < (int)(uVar2 - 1)) {
    local_50 = (int)pfVar10 - (int)local_28;
    pfVar6 = local_28 + (uVar2 - 1);
    param_2 = uVar2;
    do {
      param_2 = param_2 - 1;
      *pfVar6 = *(float *)(local_50 + (int)pfVar6 + ((int)pfVar11 - (int)pfVar10)) -
                pfVar6[1] * *(float *)(local_50 + (int)pfVar6);
      pfVar6 = pfVar6 + -1;
    } while (param_2 != 0);
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 4;
  }
  if (uVar7 < uVar2) {
    param_2 = *(uint *)(param_3 + 8);
    puVar14 = local_1c;
    iVar4 = FUN_004cecd0(puVar14);
    FUN_00501c60(param_2,uVar2 - iVar4,puVar14);
  }
  else {
    uVar7 = FUN_004cecd0();
    if (uVar2 < uVar7) {
      FUN_00501f80(uVar2 * 0x10 + *(int *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
    }
  }
  if (0 < (int)uVar2) {
    param_2 = (int)param_1 - (int)local_28;
    iVar4 = 0;
    iVar5 = 0;
    pfVar6 = local_28;
    do {
      pfVar8 = pfVar6 + 1;
      *(float *)(iVar4 + *(int *)(param_3 + 4)) = param_1[iVar5];
      *(float *)(*(int *)(param_3 + 4) + 4 + iVar4) = *pfVar6;
      iVar9 = iVar5 + 1;
      *(float *)(iVar4 + 8 + *(int *)(param_3 + 4)) =
           ((*(float *)(param_2 + (int)pfVar8) - param_1[iVar5]) * _DAT_005d4f28 -
           (*pfVar6 + *pfVar6)) - *pfVar8;
      fVar1 = param_1[iVar5] - *(float *)((int)pfVar8 + param_2);
      *(float *)(iVar4 + 0xc + *(int *)(param_3 + 4)) = fVar1 + fVar1 + *pfVar6 + *pfVar8;
      iVar4 = iVar4 + 0x10;
      iVar5 = iVar9;
      pfVar10 = local_38;
      pfVar11 = local_48;
      pfVar6 = pfVar8;
    } while (iVar9 < (int)uVar2);
  }
  FUN_005b7e1d(local_28);
  FUN_005b7e1d(pfVar11);
  FUN_005b7e1d(pfVar10);
  ExceptionList = local_c;
  return;
}

