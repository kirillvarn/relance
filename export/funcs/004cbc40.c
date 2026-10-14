
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004cbc40(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST0;
  float local_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  undefined4 auStack_54 [9];
  undefined4 auStack_30 [9];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar6 = FUN_004cecd0();
  if ((((char)param_1[2] == '\0') || ((*param_1 != 0 && (*param_1 != 0x9c)))) && (iVar6 != 0)) {
    iVar6 = param_1[0xd];
    local_90 = 0.0;
    cVar4 = FUN_0054bc90();
    if ((cVar4 == '\0') && ((char)param_1[8] == '\x01')) {
      piVar7 = (int *)FUN_0040f130();
      iVar11 = *param_1;
      if ((iVar11 != 0) && ((iVar11 != 0x9c && (piVar7 != (int *)0x0)))) {
        local_6c = *(undefined4 *)(iVar11 + -0x70);
        local_68 = *(undefined4 *)(iVar11 + -0x6c);
        local_64 = *(undefined4 *)(iVar11 + -0x68);
        puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x10))(piVar7);
        puVar12 = auStack_30;
        for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
        uStack_74 = uStack_8;
        uStack_78 = uStack_c;
        puVar8 = auStack_30;
        puVar12 = auStack_54;
        for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
        uStack_70 = uStack_4;
        FUN_00423b60(&fStack_84,&local_6c,&uStack_78);
        pfVar9 = (float *)FUN_004cbf60(auStack_60);
        fVar1 = pfVar9[2];
        fVar2 = pfVar9[1];
        fVar3 = *pfVar9;
        uVar10 = FUN_004cbf80(auStack_60);
        fVar14 = (float10)FUN_004cbf40(&fStack_84,uVar10);
        uVar10 = FUN_004cbfa0(auStack_60);
        fVar15 = (float10)FUN_004cbf40(&fStack_84,uVar10);
        FUN_004cc060(fStack_84 * fVar3 + fStack_80 * fVar2 + fStack_7c * fVar1,(float)-fVar14,
                     (float)fVar15);
        local_90 = (float)extraout_ST0;
      }
    }
    if (*(int **)(iVar6 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar6 + 0xc) + 0x84))(local_90);
      (**(code **)(**(int **)(iVar6 + 0xc) + 0x80))((float)param_1[7] + (float)param_1[6]);
    }
    if ((*(int **)(iVar6 + 0xc) == (int *)0x0) ||
       (cVar4 = (**(code **)(**(int **)(iVar6 + 0xc) + 0x74))(), cVar4 == '\0')) {
      if ((_DAT_005c7474 < (float)param_1[4]) &&
         (fVar1 = (float)param_1[4], param_1[4] = (int)(fVar1 - param_2),
         fVar1 - param_2 < _DAT_005c7474)) goto LAB_004cbe44;
    }
    else {
      iVar6 = param_1[0xd] + 0x10;
      param_1[0xd] = iVar6;
      if (iVar6 == param_1[0xb]) goto LAB_004cbe44;
      FUN_004cbfc0(iVar6);
    }
  }
  else {
LAB_004cbe44:
    FUN_004cbb40();
  }
  bVar5 = false;
  if (((char)param_1[0xe] != '\0') && (*(char *)((int)param_1 + 0x85) == '\0')) {
    bVar5 = true;
  }
  if (((char)param_1[2] == '\0') || ((*param_1 != 0 && (*param_1 != 0x9c)))) {
    bVar5 = true;
  }
  else {
    bVar13 = !bVar5;
    if (!bVar13) goto LAB_004cbebf;
    if ((float)_DAT_005c8ba8 < (float)param_1[0x6e]) {
      param_1[0x6e] = (int)((float)param_1[0x6e] - param_2);
    }
    if ((float)param_1[0x6e] <= (float)_DAT_005c8ba8) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  bVar13 = !bVar5;
LAB_004cbebf:
  if (param_1[0x70] == 1) {
    if (!bVar5) {
      param_1[0x70] = 0;
      bVar5 = SinglePlayer();
      if (bVar5) {
        (**(code **)(*DAT_0067ecd0 + 0xfc))(param_1[0x71],param_1[0x72],param_1[0x73],0);
      }
    }
  }
  else if (bVar5) {
    param_1[0x70] = 1;
    return bVar13;
  }
  return bVar13;
}

