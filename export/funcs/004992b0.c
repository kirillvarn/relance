
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004992b0(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  float10 fVar7;
  int *piVar8;
  undefined4 uVar9;
  char cVar10;
  int **ppiVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piStack_154;
  undefined4 *puStack_150;
  int *piStack_14c;
  undefined1 *puStack_148;
  undefined4 *apuStack_144 [2];
  undefined4 local_11c;
  undefined4 *local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined1 local_10c [8];
  undefined4 *puStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_90 [8];
  undefined4 auStack_70 [5];
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [4];
  undefined4 local_30 [9];
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bca5b;
  local_c = ExceptionList;
  apuStack_144[1] = (undefined4 *)0x4992d6;
  ExceptionList = &local_c;
  fVar7 = (float10)FUN_0042d680();
  fVar7 = fVar7 + (float10)*(float *)(param_1 + 0xc78);
  fVar1 = (float10)_DAT_005d3d30;
  *(float *)(param_1 + 0xc78) = (float)fVar7;
  if (fVar1 < fVar7) {
    iVar2 = *(int *)(param_1 + 0xc74) + 1;
    *(float *)(param_1 + 0xc78) = (float)(fVar7 - (float10)_DAT_005d3d30);
    *(int *)(param_1 + 0xc74) = iVar2;
    if (0xf < iVar2) {
      *(undefined4 *)(param_1 + 0xc74) = 0;
    }
  }
  apuStack_144[1] = (undefined4 *)0x499322;
  FUN_00498bd0();
  if (*(int *)(param_1 + 0xd48) == 0) {
    ExceptionList = local_c;
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x3d4);
  puVar5 = local_90;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  auStack_70[1] = 0;
  auStack_70[3] = 0xbf0ccccc;
  auStack_70[2] = 0;
  puVar3 = (undefined4 *)(param_1 + 0x3d4);
  puVar5 = local_30;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_11c = 0;
  local_118 = (undefined4 *)0x0;
  local_114 = 0;
  if (DAT_0067209c == (int *)0x0) {
    apuStack_144[1] = (undefined4 *)0x4993b7;
    DAT_0067209c = (int *)FUN_005b73e0();
  }
  apuStack_144[1] = &local_11c;
  apuStack_144[0] = local_90;
  puStack_148 = local_10c;
  puStack_150 = (undefined4 *)0x4993d4;
  piStack_14c = DAT_0067209c;
  (**(code **)(*DAT_0067209c + 0x28))();
  puVar3 = auStack_40;
  puVar5 = auStack_70;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uStack_4c = local_11c;
  puStack_150 = auStack_70;
  piStack_154 = (int *)0x0;
  puStack_48 = local_118;
  uStack_44 = local_114;
  FUN_00422690();
  FUN_00421ed0(0xb50);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xde1);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  iVar2 = **(int **)Pipeline_exref;
  puStack_150 = (undefined4 *)0x0;
  piStack_154 = (int *)0x499472;
  puStack_150 = (undefined4 *)FUN_00425640();
  piStack_154 = (int *)0x0;
  (**(code **)(iVar2 + 0x108))(*(undefined4 *)Pipeline_exref);
  piVar12 = *(int **)Pipeline_exref;
  uVar15 = 0;
  piVar14 = (int *)0xb;
  uVar13 = 0;
  (**(code **)(*piVar12 + 0xf8))(piVar12,0,0xb,0);
  piVar8 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d2e5c;
  iVar2 = 1;
  do {
    (**(code **)(*piVar8 + 0xf8))(piVar8,0,iVar2,*(undefined4 *)(puVar4 + 4));
    iVar2 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar2 != 0);
  piVar8 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d2e94;
  iVar2 = 1;
  do {
    (**(code **)(*piVar8 + 0xf8))(piVar8,1,iVar2,*(undefined4 *)(puVar4 + 4));
    iVar2 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar2 != 0);
  piVar8 = *(int **)Pipeline_exref;
  puVar4 = &DAT_005d2e34;
  iVar2 = 0x8d;
  do {
    (**(code **)(*piVar8 + 0xf0))(piVar8,iVar2,*(undefined4 *)(puVar4 + 4));
    iVar2 = *(int *)(puVar4 + 8);
    puVar4 = puVar4 + 8;
  } while (iVar2 != 0);
  piStack_154 = *(int **)Pipeline_exref;
  ppiVar11 = &piStack_14c;
  cVar10 = '\0';
  puStack_150 = (undefined4 *)0x89;
  (**(code **)(*piStack_154 + 0xf4))(piStack_154);
  uVar9 = 0;
  (**(code **)(*piVar14 + 0xf0))(piVar14,uVar15,0);
  puStack_48 = (undefined4 *)0x0;
  if ((cVar10 != '\0') ||
     (iVar2 = (**(code **)(*DAT_006720ac + 0x28))(DAT_006720ac,DAT_006720c0), iVar2 != 0)) {
    if (DAT_006720c0 != 0) {
      (**(code **)(*DAT_006720ac + 0x10))(DAT_006720ac,&DAT_006720c0);
      DAT_006720c0 = 0;
    }
    iVar2 = (**(code **)(*DAT_006720ac + 0xc))
                      (DAT_006720ac,0x142,*(undefined4 *)(param_1 + 0xd48),&DAT_006720c0,0);
    if (iVar2 != 0) goto LAB_00499715;
    ppuVar6 = apuStack_144;
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar6 = (undefined4 *)0x0;
      ppuVar6 = ppuVar6 + 1;
    }
    uStack_110 = 0x18;
    uStack_fc = 0x18;
    apuStack_144[1] = *(undefined4 **)(param_1 + 0xd40);
    local_118 = apuStack_144[1] + 3;
    puStack_104 = apuStack_144[1] + 4;
    uStack_d8 = *(undefined4 *)(param_1 + 0xd48);
    *(undefined4 *)(param_1 + 0xd50) = 0;
    apuStack_144[0] = (undefined4 *)0x2;
    local_114 = 4;
    uStack_100 = 8;
    uStack_dc = 0x142;
    iVar2 = (**(code **)(*DAT_006720ac + 0x18))
                      (DAT_006720ac,DAT_006720c0,(undefined4 *)(param_1 + 0xd50),apuStack_144,0,
                       uStack_d8);
    if ((iVar2 != 0) ||
       (iVar2 = (**(code **)(*DAT_006720ac + 0x28))(DAT_006720ac,DAT_006720c0), iVar2 != 0))
    goto LAB_00499715;
  }
  piStack_154 = (int *)0x0;
  iVar2 = (**(code **)(*DAT_006720b0 + 0x18))
                    (DAT_006720b0,0xffffffff,&piStack_154,*(undefined4 *)(param_1 + 0xd44),
                     *(undefined4 *)(param_1 + 0xd4c));
  if (iVar2 != 0) {
    uStack_5c = 0xffffffff;
    (**(code **)(*piVar14 + 0xf0))(piVar14,uVar15,uVar9);
    ExceptionList = local_c;
    return;
  }
  iVar2 = (**(code **)(*DAT_006720b0 + 0x24))
                    (DAT_006720b0,0xffffffff,*(undefined4 *)(param_1 + 0xd50),0,0);
  if (iVar2 == 0) {
    uVar15 = *(undefined4 *)(param_1 + 0xd48);
    piVar14 = (int *)0x0;
    piVar8 = piStack_154;
    (**(code **)(*DAT_006720b4 + 0xc))
              (DAT_006720b4,4,0,uVar15,piStack_154,*(undefined4 *)(param_1 + 0xd4c));
    (**(code **)(**(int **)Pipeline_exref + 0x108))(*(int **)Pipeline_exref,0,0);
    piVar12 = *(int **)Pipeline_exref;
    puVar4 = &DAT_005d2e4c;
    iVar2 = 0x8d;
    do {
      (**(code **)(*piVar12 + 0xf0))(piVar12,iVar2,*(undefined4 *)(puVar4 + 4));
      iVar2 = *(int *)(puVar4 + 8);
      puVar4 = puVar4 + 8;
    } while (iVar2 != 0);
    auStack_70[1] = 0xffffffff;
    (**(code **)(*piVar14 + 0xf0))(piVar14,uVar15,piVar8);
    ExceptionList = local_c;
    return;
  }
LAB_00499715:
  puStack_48 = (undefined4 *)0xffffffff;
  (*(code *)(*ppiVar11)[0x3c])(ppiVar11,piVar12,uVar13);
  ExceptionList = local_c;
  return;
}

