
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00550d40(undefined4 *param_1,int *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float unaff_EBP;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  NebulaExclusionZone *apNStack_6c [3];
  float fStack_60;
  float fStack_54;
  undefined1 auStack_44 [8];
  Vector aVStack_3c [44];
  int *piStack_10;
  float fStack_c;
  float fStack_8;
  NebulaExclusionZoneMgr *pNStack_4;
  
  if (*(char *)(param_1 + 0x3b) != '\0') {
    fVar17 = (float)param_1[3];
    local_9c = fVar17;
    iVar6 = ftol();
    param_1[4] = iVar6;
    if (iVar6 < 0) {
      param_1[4] = 0;
    }
    else if ((int)fVar17 < iVar6) {
      param_1[4] = fVar17;
    }
    if (param_4 <= (float)param_1[0x41]) {
      if (param_4 < _DAT_005c7474 == (param_4 == _DAT_005c7474)) {
        param_1[0x38] = param_4 / (float)param_1[0x41];
      }
      else {
        param_1[0x38] = 0;
      }
    }
    else {
      param_1[0x38] = 0x3f800000;
    }
    local_84 = 0.0;
    local_80 = 0.0;
    param_1[0x2e] = (float)param_1[0x2f] + (float)param_1[0x40];
    local_9c = (float)param_1[0x40] * (float)param_1[0x40] * _DAT_005e0e04;
    local_7c = -((float)param_1[0x2f] + (float)param_1[0x40]);
    uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
    if (DAT_00679860 == (int *)0x0) {
      DAT_00679860 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00679860 + 0x28))(DAT_00679860,&local_7c,uVar7,&fStack_88);
    param_1[0x3d] = fStack_8c;
    param_1[0x3e] = fStack_88;
    piVar11 = (int *)*param_1;
    param_1[0x3f] = local_84;
    iVar14 = 0;
    iVar6 = 0;
    if (0 < (int)param_1[3]) {
      do {
        if ((float)param_1[0x38] < _DAT_005c7474 != ((float)param_1[0x38] == _DAT_005c7474)) {
          *(undefined1 *)(*piVar11 + 0x50) = 0;
          *(undefined1 *)(*piVar11 + 0x51) = 1;
        }
        pfVar10 = (float *)*piVar11;
        if (*(char *)(pfVar10 + 0x14) != '\0') {
          local_9c = pfVar10[2];
          if (((float)param_1[0x3d] - *pfVar10) * ((float)param_1[0x3d] - *pfVar10) +
              ((float)param_1[0x3e] - pfVar10[1]) * ((float)param_1[0x3e] - pfVar10[1]) +
              ((float)param_1[0x3f] - local_9c) * ((float)param_1[0x3f] - local_9c) <= unaff_EBP) {
            iVar6 = iVar6 + 1;
          }
          else {
            *(undefined1 *)(pfVar10 + 0x14) = 0;
            *(undefined1 *)(*piVar11 + 0x51) = 1;
          }
        }
        iVar14 = iVar14 + 1;
        piVar11 = piVar11 + 1;
      } while (iVar14 < (int)param_1[3]);
    }
    fVar17 = (float)param_1[0x32] * (float)param_1[0x32];
    do {
      iVar13 = 0;
      iVar14 = 1;
      piVar11 = (int *)*param_1;
      if ((int)param_1[3] < 2) break;
      do {
        piVar12 = piVar11 + 1;
        iVar2 = *piVar11;
        fVar18 = *(float *)(iVar2 + 0x54);
        fVar1 = *(float *)(*piVar12 + 0x54);
        if (DAT_006140b0 == 0) {
          if (fVar1 < fVar18) goto LAB_00550f68;
        }
        else if (fVar18 < fVar1) {
LAB_00550f68:
          *piVar11 = *piVar12;
          iVar13 = iVar13 + 1;
          *piVar12 = iVar2;
        }
        iVar14 = iVar14 + 1;
        piVar11 = piVar12;
      } while (iVar14 < (int)param_1[3]);
      param_2 = piStack_10;
    } while (0 < iVar13);
    piVar11 = (int *)*param_1;
    fVar18 = 0.0;
    if (0 < (int)param_1[3]) {
      do {
        if ((*(char *)(*piVar11 + 0x50) == '\0') && (iVar6 < (int)param_1[4])) {
          fVar1 = (float)param_1[0x40];
          pfVar8 = (float *)random_on_unit_sphere();
          pfVar10 = (float *)*piVar11;
          fStack_54 = fVar1 * pfVar8[2];
          fStack_8c = fVar1 * *pfVar8 + (float)param_1[0x3d];
          fStack_88 = fVar1 * pfVar8[1] + (float)param_1[0x3e];
          local_84 = fStack_54 + (float)param_1[0x3f];
          *pfVar10 = fStack_8c;
          pfVar10[1] = fStack_88;
          pfVar10[2] = local_84;
          puVar9 = (undefined4 *)random_inside_sphere((float)auStack_44);
          iVar14 = *piVar11;
          *(undefined4 *)(iVar14 + 0x44) = *puVar9;
          *(undefined4 *)(iVar14 + 0x48) = puVar9[1];
          *(undefined4 *)(iVar14 + 0x4c) = puVar9[2];
          if (((float)param_1[0x43] <= fStack_8) ||
             (((undefined4 *)param_1[0x31] != (undefined4 *)0x0 &&
              (fVar15 = (float10)(*(code *)**(undefined4 **)param_1[0x31])(*piVar11),
              (float10)_DAT_005c8ba8 < fVar15)))) {
            iVar6 = iVar6 + 1;
            *(undefined1 *)(*piVar11 + 0x50) = 1;
            *(undefined1 *)(*piVar11 + 0x51) = 0;
            if (pNStack_4 != (NebulaExclusionZoneMgr *)0x0) {
              local_80 = -1.0;
              bVar5 = Exclusion::NebulaExclusionZoneMgr::is_in_exclusion_zone
                                (pNStack_4,(Vector *)*piVar11,apNStack_6c,&local_80,true);
              param_2 = piStack_10;
              if ((bVar5) && (_DAT_005e0e00 < local_80)) {
                *(undefined1 *)(*piVar11 + 0x51) = 1;
              }
            }
          }
        }
        iVar14 = *piVar11;
        if ((*(char *)(iVar14 + 0x50) != '\0') && (*(char *)(iVar14 + 0x51) == '\0')) {
          if (_DAT_005c7474 < (float)param_1[0x28]) {
            bVar5 = *(float *)(iVar14 + 0x38) < _DAT_005c7474;
            *(float *)(iVar14 + 0x38) = fStack_c + *(float *)(iVar14 + 0x38);
            if (bVar5) {
              puVar9 = (undefined4 *)*piVar11;
              if (_DAT_005c7474 <= (float)puVar9[0xe]) {
                puVar9[8] = *puVar9;
                puVar9[9] = puVar9[1];
                puVar9[10] = puVar9[2];
                pfVar10 = (float *)(**(code **)(*param_2 + 0xc))(param_2);
                iVar14 = *piVar11;
                fStack_74 = *(float *)(iVar14 + 0x28) - pfVar10[2];
                fStack_78 = *(float *)(iVar14 + 0x24) - pfVar10[1];
                local_7c = *(float *)(iVar14 + 0x20) - *pfVar10;
                LookMatrix(aVStack_3c);
                iVar14 = rand();
                fVar15 = (float10)iVar14 * (float10)_DAT_005caeec * (float10)_DAT_005c97f8;
                fVar16 = (float10)fcos(fVar15);
                fVar18 = (float)fVar16;
                fsin(fVar15);
                if (DAT_00679860 == (int *)0x0) {
                  DAT_00679860 = (int *)FUN_005b73e0();
                }
                (**(code **)(*DAT_00679860 + 0x2c))
                          (DAT_00679860,&local_9c,aVStack_3c,&stack0xffffff58);
                iVar14 = *piVar11;
                local_9c = fStack_90;
                *(undefined4 *)(iVar14 + 0x2c) = uStack_98;
                *(undefined4 *)(iVar14 + 0x30) = uStack_94;
                *(float *)(iVar14 + 0x34) = fStack_90;
                iVar14 = *piVar11;
                pfVar10 = (float *)(iVar14 + 0x2c);
                fVar1 = _DAT_005d8464 /
                        SQRT(*(float *)(iVar14 + 0x34) * *(float *)(iVar14 + 0x34) +
                             *(float *)(iVar14 + 0x30) * *(float *)(iVar14 + 0x30) +
                             *pfVar10 * *pfVar10);
                *pfVar10 = fVar1 * *pfVar10;
                *(float *)(iVar14 + 0x30) = fVar1 * *(float *)(iVar14 + 0x30);
                *(float *)(iVar14 + 0x34) = fVar1 * *(float *)(iVar14 + 0x34);
                iVar14 = rand();
                *(float *)(*piVar11 + 0x40) = (float)iVar14 * _DAT_005caeec;
              }
            }
            else {
              if (_DAT_005c7474 < (float)param_1[0x32]) {
                pfVar10 = (float *)(**(code **)(*param_2 + 0xc))(param_2);
                iVar14 = *piVar11;
                fVar1 = *(float *)(iVar14 + 0x20) - *pfVar10;
                fVar4 = *(float *)(iVar14 + 0x24) - pfVar10[1];
                fVar3 = *(float *)(iVar14 + 0x28) - pfVar10[2];
                fVar1 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
                if (fVar1 < fVar17) {
                  fVar17 = fVar1;
                }
              }
              if ((float)param_1[0x28] < *(float *)(*piVar11 + 0x38)) {
                iVar14 = rand();
                *(float *)(*piVar11 + 0x38) =
                     ((float)_DAT_005e0df8 - (float)iVar14 * _DAT_005caeec * (float)_DAT_005db0b8) *
                     (float)param_1[0x27];
              }
            }
            if (_DAT_005c7474 <= *(float *)(*piVar11 + 0x38)) {
              iVar14 = rand();
              local_7c = (float)iVar14 * _DAT_005caeec;
              iVar14 = rand();
              *(float *)(*piVar11 + 0x3c) = (float)iVar14 * local_7c * _DAT_005caeec;
            }
          }
          pfVar10 = (float *)*piVar11;
          fStack_60 = fStack_c * pfVar10[0x13];
          *pfVar10 = fStack_c * pfVar10[0x11] + *pfVar10;
          pfVar10[1] = fStack_c * pfVar10[0x12] + pfVar10[1];
          pfVar10[2] = fStack_60 + pfVar10[2];
        }
        fVar18 = (float)((int)fVar18 + 1);
        piVar11 = piVar11 + 1;
      } while ((int)fVar18 < (int)param_1[3]);
    }
    param_1[5] = iVar6;
  }
  return;
}

