
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054e900(float *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  char cVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  float unaff_EBP;
  undefined *puVar18;
  int iVar19;
  ushort uVar20;
  float10 fVar21;
  float10 fVar22;
  float fStack_140;
  undefined4 uStack_13c;
  int *piStack_138;
  float fStack_134;
  float fStack_130;
  int *piStack_12c;
  float *pfStack_128;
  float **ppfStack_124;
  float *pfStack_120;
  float *pfStack_11c;
  float *pfStack_118;
  float *pfStack_114;
  float *pfStack_110;
  float *pfStack_10c;
  int *piStack_100;
  undefined4 uStack_f0;
  float *pfStack_ec;
  int *piStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float *pfStack_d4;
  int *piStack_d0;
  float fStack_cc;
  float *pfStack_c8;
  int *piStack_c4;
  float fStack_c0;
  double dStack_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_74;
  float fStack_70;
  double dStack_6c;
  undefined8 uStack_64;
  float fStack_5c;
  int *piStack_4c;
  undefined4 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  double dStack_34;
  
  piStack_100 = param_2;
  pfVar11 = (float *)(**(code **)(*param_2 + 0xc))();
  fStack_90 = *pfVar11;
  fStack_8c = pfVar11[1];
  fStack_88 = pfVar11[2];
  iVar12 = (**(code **)(*param_2 + 0x10))();
  fStack_74 = *(float *)(iVar12 + 0x20);
  pfStack_ec = (float *)-*(float *)(iVar12 + 8);
  piStack_e8 = (int *)-*(float *)(iVar12 + 0x14);
  fStack_e4 = -fStack_74;
  pfStack_10c = (float *)(fStack_90 + (float)piStack_e8 * param_1[1]);
  pfStack_110 = (float *)(fStack_94 + (float)pfStack_ec * param_1[1]);
  pfStack_114 = (float *)0x54e9a9;
  FUN_00422b80();
  pfVar11 = param_1 + 0xd;
  fStack_cc = (float)piStack_e8 * param_1[0xf] - fStack_e4 * param_1[0xe];
  fVar4 = fStack_e4 * *pfVar11 - (float)pfStack_ec * param_1[0xf];
  fVar7 = (float)pfStack_ec * param_1[0xe] - (float)piStack_e8 * *pfVar11;
  fVar5 = fVar4 * fVar4 + fVar7 * fVar7 + fStack_cc * fStack_cc;
  fVar13 = (float)(0x5f3759df - ((int)fVar5 >> 1));
  fVar13 = (_DAT_005ca220 - fVar13 * fVar13 * fVar5 * _DAT_005c75e0) * fVar13;
  fStack_cc = fStack_cc * fVar13;
  pfStack_c8 = (float *)(fVar4 * fVar13);
  piStack_c4 = (int *)(fVar7 * fVar13);
  fVar5 = (float)pfStack_c8 * fStack_e4 - (float)piStack_c4 * (float)piStack_e8;
  *pfVar11 = fVar5;
  fVar4 = (float)piStack_c4 * (float)pfStack_ec - fStack_e4 * fStack_cc;
  uStack_64 = (double)CONCAT44(fVar4,fVar5);
  param_1[0xe] = fVar4;
  fStack_5c = (float)piStack_e8 * fStack_cc - (float)pfStack_c8 * (float)pfStack_ec;
  param_1[0xf] = fStack_5c;
  piVar6 = (int *)(param_1[0xf] * param_1[0xf] + param_1[0xe] * param_1[0xe] + *pfVar11 * *pfVar11);
  pfVar16 = (float *)(0x5f3759df - ((int)piVar6 >> 1));
  fVar5 = (_DAT_005ca220 - (float)pfVar16 * (float)pfVar16 * (float)piVar6 * _DAT_005c75e0) *
          (float)pfVar16;
  *pfVar11 = fVar5 * *pfVar11;
  param_1[0xe] = fVar5 * param_1[0xe];
  param_1[0xf] = fVar5 * param_1[0xf];
  pfStack_10c = (float *)0x54eb19;
  iVar12 = FUN_005792b0();
  if (iVar12 == 0) {
    pfVar11 = param_1 + 0x13;
    fStack_a0 = *pfVar11;
    fStack_9c = param_1[0x14];
    fStack_98 = param_1[0x15];
    fStack_88 = *pfVar11;
    fStack_84 = param_1[0x14];
    fStack_80 = param_1[0x15];
    fStack_ac = *pfVar11;
    fStack_a8 = param_1[0x14];
    fStack_a4 = param_1[0x15];
    fStack_d8 = *pfVar11;
    pfStack_d4 = (float *)param_1[0x14];
    piStack_d0 = (int *)param_1[0x15];
    fStack_40 = *pfVar11;
    fStack_3c = param_1[0x14];
    fStack_38 = param_1[0x15];
  }
  else {
    pfStack_10c = &fStack_88;
    pfStack_110 = &fStack_ac;
    pfStack_114 = &fStack_d8;
    pfStack_118 = &fStack_40;
    pfStack_11c = &fStack_cc;
    ppfStack_124 = &pfStack_ec;
    pfStack_128 = &fStack_94;
    piStack_12c = (int *)0x54eb59;
    pfStack_120 = pfVar11;
    FUN_0054e130();
  }
  if (param_1[8] != 0.0) {
    fVar5 = *param_1 * *param_1;
    iVar12 = **(int **)Pipeline_exref;
    dStack_6c = (double)fVar5;
    uStack_f0._0_3_ = CONCAT12((char)param_2[0x2f],(undefined2)uStack_f0);
    pfStack_10c = (float *)param_2;
    fVar4 = param_1[0xb] * param_1[0xb];
    uStack_64 = (double)((float)_DAT_005c89b8 / fVar4);
    dStack_34 = (double)(fVar5 - fVar4);
    pfStack_110 = (float *)0x54ec38;
    pfStack_110 = (float *)(**(code **)(*param_2 + 0x40))();
    pfStack_114 = *(float **)Pipeline_exref;
    pfStack_118 = (float *)0x54ec45;
    (**(code **)(iVar12 + 0x7c))();
    pfStack_120 = *(float **)Pipeline_exref;
    pfStack_118 = (float *)0x1;
    pfStack_11c = (float *)0x16;
    ppfStack_124 = (float **)0x54ec5a;
    (**(code **)((int)*pfStack_120 + 0xf0))();
    ppfStack_124 = (float **)&fStack_88;
    fStack_88 = 0.0;
    piStack_12c = *(int **)Pipeline_exref;
    pfStack_128 = (float *)0x18;
    fStack_130 = 7.799015e-39;
    (**(code **)(*piStack_12c + 0xf4))();
    piStack_138 = *(int **)Pipeline_exref;
    fStack_130 = 1.79366e-43;
    fStack_134 = 3.36312e-44;
    uStack_13c = 0x54ec92;
    (**(code **)(*piStack_138 + 0xf0))();
    iVar12 = **(int **)Pipeline_exref;
    uStack_13c = 0;
    fStack_140 = 7.799074e-39;
    uStack_13c = FUN_00425640();
    fStack_140 = 0.0;
    (**(code **)(iVar12 + 0x108))(*(undefined4 *)Pipeline_exref);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xb,0);
    piVar2 = *(int **)Pipeline_exref;
    puVar18 = &DAT_005e09f0;
    iVar12 = 1;
    do {
      (**(code **)(*piVar2 + 0xf8))(piVar2,0,iVar12,*(undefined4 *)(puVar18 + 4));
      iVar12 = *(int *)(puVar18 + 8);
      puVar18 = puVar18 + 8;
    } while (iVar12 != 0);
    piVar2 = *(int **)Pipeline_exref;
    puVar18 = &DAT_005e0a28;
    iVar12 = 1;
    do {
      (**(code **)(*piVar2 + 0xf8))(piVar2,1,iVar12,*(undefined4 *)(puVar18 + 4));
      iVar12 = *(int *)(puVar18 + 8);
      puVar18 = puVar18 + 8;
    } while (iVar12 != 0);
    piVar2 = *(int **)Pipeline_exref;
    puVar18 = &DAT_005e09c8;
    iVar12 = 0x8d;
    do {
      (**(code **)(*piVar2 + 0xf0))(piVar2,iVar12,*(undefined4 *)(puVar18 + 4));
      iVar12 = *(int *)(puVar18 + 8);
      puVar18 = puVar18 + 8;
    } while (iVar12 != 0);
    piVar2 = *(int **)Pipeline_exref;
    puVar18 = &DAT_005e0978;
    iVar12 = 0x89;
    do {
      (**(code **)(*piVar2 + 0xf0))(piVar2,iVar12,*(undefined4 *)(puVar18 + 4));
      iVar12 = *(int *)(puVar18 + 8);
      puVar18 = puVar18 + 8;
    } while (iVar12 != 0);
    piVar2 = *(int **)VertexBuffer_exref;
    piVar3 = *(int **)Pipeline_exref;
    iVar12 = 0;
    if (DAT_006797dc != (int *)0x0) {
      (**(code **)(*DAT_006797dc + 8))(DAT_006797dc);
      DAT_006797dc = (int *)0x0;
    }
    if (DAT_006797e0 != (int *)0x0) {
      (**(code **)(*DAT_006797e0 + 8))(DAT_006797e0);
      DAT_006797e0 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      DAT_006797dc = piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    if (piVar2 != (int *)0x0) {
      DAT_006797e0 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    iVar19 = (int)param_1[5] * 3;
    DAT_00679828 = DAT_00679828 & 0xf8;
    _DAT_006797f4 = 0;
    DAT_006797d4 = 0;
    _DAT_0067982c = 0;
    _DAT_00679838 = 0xffffffff;
    _DAT_00679834 = 0;
    _DAT_00679830 = 0;
    DAT_006797d0 = 0x7fffffff;
    if (iVar19 != 0) {
      DAT_006797d0 = 4;
      iVar14 = (**(code **)(*DAT_006797e0 + 0x14))(DAT_006797e0,DAT_006797d8,iVar19,&DAT_006797e4);
      cVar10 = '\x01' - (iVar14 != 0);
      uStack_13c = CONCAT13(cVar10,(undefined3)uStack_13c);
      if (cVar10 != '\0') {
        _DAT_006797f4 = iVar19;
        FUN_0054f830(DAT_006797f0,DAT_006797e8);
        pfStack_128 = (float *)0x0;
        if (0 < (int)param_1[5]) {
          iVar19 = 0;
          do {
            uVar9 = uStack_48;
            if (uStack_13c._2_1_ == '\0') {
              pfVar11 = (float *)(iVar19 + (int)param_1[3]);
              fVar21 = (float10)*(float *)(iVar19 + (int)param_1[3]) - (float10)(float)pfStack_10c;
              fVar21 = ((float10)pfVar11[1] - (float10)unaff_EBP) *
                       ((float10)pfVar11[1] - (float10)unaff_EBP) +
                       ((float10)pfVar11[2] - (float10)(float)param_2) *
                       ((float10)pfVar11[2] - (float10)(float)param_2) + fVar21 * fVar21;
              if (fVar21 <= (float10)dStack_b8 + (float10)_DAT_005c9ce8) goto LAB_0054eff8;
              *(undefined1 *)(pfVar11 + 5) = 1;
              fVar5 = *param_1;
              pfVar11 = (float *)random_on_unit_sphere();
              fStack_70 = fVar5 * pfVar11[2];
              pfVar17 = (float *)((int)param_1[3] + iVar19);
              fStack_98 = fVar5 * *pfVar11 + (float)pfStack_10c;
              fStack_94 = fVar5 * pfVar11[1] + unaff_EBP;
              fStack_90 = fStack_70 + (float)param_2;
              *pfVar17 = fStack_98;
              pfVar17[1] = fStack_94;
              pfVar17[2] = fStack_90;
              *(undefined4 *)(iVar19 + 0x10 + (int)param_1[3]) = 0;
              if (((undefined4 *)param_1[6] == (undefined4 *)0x0) ||
                 (fVar21 = (float10)(*(code *)**(undefined4 **)param_1[6])((int)param_1[3] + iVar19)
                 , fVar21 != (float10)_DAT_005c7474)) {
                if (piStack_4c != (int *)0x0) {
                  fStack_140 = -1.0;
                  cVar10 = (**(code **)(*piStack_4c + 4))
                                     ((int)param_1[3] + iVar19,uVar9,&fStack_140);
                  if (cVar10 == '\0') {
                    if (fStack_140 <= _DAT_005c7474) {
                      if (param_1[7] < *(float *)((int)param_1[3] + 0x1c + iVar19)) {
                        *(undefined1 *)((int)param_1[3] + iVar19 + 0x14) = 0;
                      }
                    }
                    else if (fStack_140 < *(float *)(iVar19 + 0x1c + (int)param_1[3])) {
                      *(undefined1 *)(iVar19 + (int)param_1[3] + 0x14) = 0;
                    }
                  }
                  else {
                    *(undefined1 *)(iVar19 + 0x14 + (int)param_1[3]) = 0;
                  }
                }
              }
              else {
                *(undefined1 *)(iVar19 + 0x14 + (int)param_1[3]) = 0;
              }
            }
            else {
              pfVar11 = (float *)random_inside_sphere((float)&dStack_6c);
              fStack_a4 = (float)pfStack_10c + *pfVar11;
              pfVar17 = (float *)((int)param_1[3] + iVar19);
              fStack_a0 = unaff_EBP + pfVar11[1];
              fStack_9c = (float)param_2 + pfVar11[2];
              *pfVar17 = fStack_a4;
              pfVar17[1] = fStack_a0;
              pfVar17[2] = fStack_9c;
              if (((undefined4 *)param_1[6] == (undefined4 *)0x0) ||
                 (fVar21 = (float10)(*(code *)**(undefined4 **)param_1[6])((int)param_1[3] + iVar19)
                 , fVar21 != (float10)_DAT_005c7474)) {
                *(undefined1 *)(iVar19 + 0x14 + (int)param_1[3]) = 1;
                if (piStack_4c != (int *)0x0) {
                  piStack_100 = (int *)0xbf800000;
                  cVar10 = (**(code **)(*piStack_4c + 4))
                                     ((int)param_1[3] + iVar19,uVar9,&piStack_100);
                  if (cVar10 != '\0') {
                    *(undefined1 *)(iVar19 + 0x14 + (int)param_1[3]) = 0;
                    goto LAB_0054f36d;
                  }
                  if ((float)piStack_100 <= _DAT_005c7474) {
                    fVar4 = param_1[3];
                    fVar5 = *(float *)((int)fVar4 + 0x1c + iVar19);
                    uVar20 = (ushort)(fVar5 < param_1[7]) << 8 |
                             (ushort)(fVar5 == param_1[7]) << 0xe;
                  }
                  else {
                    fVar4 = param_1[3];
                    fVar5 = *(float *)(iVar19 + 0x1c + (int)fVar4);
                    uVar20 = (ushort)(fVar5 < (float)piStack_100) << 8 |
                             (ushort)(fVar5 == (float)piStack_100) << 0xe;
                  }
                  if (uVar20 == 0) {
                    *(undefined1 *)(iVar19 + (int)fVar4 + 0x14) = 0;
                  }
                }
                pfVar11 = (float *)(iVar19 + (int)param_1[3]);
                fVar21 = (float10)*(float *)(iVar19 + (int)param_1[3]) - (float10)(float)pfStack_10c
                ;
                fVar21 = ((float10)pfVar11[1] - (float10)unaff_EBP) *
                         ((float10)pfVar11[1] - (float10)unaff_EBP) +
                         ((float10)pfVar11[2] - (float10)(float)param_2) *
                         ((float10)pfVar11[2] - (float10)(float)param_2) + fVar21 * fVar21;
LAB_0054eff8:
                if (*(char *)(pfVar11 + 5) != '\0') {
                  piStack_12c = (int *)((pfVar11[1] - fStack_dc) * fStack_134 +
                                       (pfVar11[2] - fStack_d8) * fStack_130 +
                                       (*pfVar11 - fStack_e0) * (float)piStack_138);
                  if ((float)piStack_12c <= param_1[1]) {
                    if (fVar21 <= (float10)(double)CONCAT44(uStack_7c,fStack_80)) goto LAB_0054f236;
                    pfVar11[4] = (float)(((float10)dStack_b8 - fVar21) *
                                        (float10)(double)CONCAT44(fStack_ac,uStack_b0));
                  }
                  else {
                    fVar22 = (float10)_DAT_005c75dc -
                             ((float10)*param_1 -
                             ((float10)(float)piStack_12c - (float10)param_1[1])) /
                             (float10)*param_1;
                    if ((float10)_DAT_005c75dc < fVar22) {
                      fVar22 = (float10)_DAT_005c75dc;
                    }
                    fVar22 = (((float10)_DAT_005c75dc - (float10)param_1[0xc]) * fVar22 *
                              (float10)_DAT_005c75e0 + (float10)param_1[0xc]) * (float10)*param_1;
                    fVar22 = fVar22 * fVar22;
                    if (fVar21 <= (float10)dStack_b8 - fVar22) {
LAB_0054f236:
                      pfVar11[4] = 1.0;
                    }
                    else {
                      pfVar11[4] = (float)(((float10)dStack_b8 - fVar21) / fVar22);
                    }
                  }
                  pfVar11 = (float *)(iVar19 + 0x10 + (int)param_1[3]);
                  if (_DAT_005d1fe4 <= *(float *)(iVar19 + 0x10 + (int)param_1[3])) {
                    if ((float)piStack_12c < param_1[0x10]) {
                      if (param_1[0x11] <= (float)piStack_12c) {
                        *pfVar11 = (((float)piStack_12c - param_1[0x11]) /
                                   (param_1[0x10] - param_1[0x11])) * *pfVar11;
                      }
                      else {
                        *pfVar11 = 0.0;
                      }
                    }
                    fVar5 = param_1[3];
                    if (_DAT_005c75dc <= *(float *)((int)fVar5 + 0x10 + iVar19)) {
                      uVar15 = (uint)*(byte *)((int)fVar5 + 0x15) +
                               (uint)*(byte *)((int)fVar5 + iVar19 + 0x16) * 2;
                      if ((uVar15 < 4) || (uVar15 = uVar15 - 4, uVar15 < 4)) {
                        switch(uVar15) {
                        case 0:
                          goto switchD_0054f2ed_caseD_0;
                        case 1:
                          pfStack_c8 = pfVar16;
                          piStack_c4 = piVar6;
                          fStack_c0 = uStack_f0;
                          break;
                        case 2:
                          pfStack_c8 = pfStack_d4;
                          piStack_c4 = piStack_d0;
                          fStack_c0 = fStack_cc;
                          break;
                        case 3:
                          pfStack_c8 = pfStack_ec;
                          piStack_c4 = piStack_e8;
                          fStack_c0 = fStack_e4;
                        }
                      }
                      else {
switchD_0054f2ed_caseD_0:
                        pfStack_c8 = (float *)ppfStack_124;
                        piStack_c4 = (int *)pfStack_120;
                        fStack_c0 = (float)pfStack_11c;
                      }
                      FUN_0054f9f0((int)fVar5 + iVar19,&pfStack_118,param_1 + 0xd,&pfStack_c8,
                                   &fStack_8c);
                    }
                    else {
                      iVar12 = iVar12 + 1;
                    }
                  }
                }
              }
              else {
                *(undefined1 *)(iVar19 + 0x14 + (int)param_1[3]) = 0;
              }
            }
LAB_0054f36d:
            pfStack_128 = (float *)((int)pfStack_128 + 1);
            iVar19 = iVar19 + 0x20;
          } while ((int)pfStack_128 < (int)param_1[5]);
        }
        (**(code **)(*DAT_006797e0 + 0x18))(DAT_006797e0,&DAT_006797e4);
        puVar8 = DAT_0067983c;
        if (DAT_006797d4 != 0) {
          if ((DAT_00679828 & 2) != 0) {
            *DAT_0067983c = DAT_006797f8;
            puVar8[1] = DAT_006797fc;
            puVar8[2] = DAT_00679800;
            DAT_0067983c = (undefined4 *)((int)DAT_0067983c + DAT_00679840);
            *DAT_00679844 = DAT_00679804;
            DAT_00679844 = (undefined4 *)((int)DAT_00679844 + DAT_00679848);
            *DAT_0067984c = _DAT_00679808;
            DAT_0067984c[1] = _DAT_0067980c;
            FUN_00552b10(0);
            DAT_006797d4 = DAT_006797d4 + 1;
          }
          (**(code **)(*DAT_006797dc + 0x11c))
                    (DAT_006797dc,DAT_006797d0,DAT_006797e4,DAT_006797ec,DAT_006797d4,0);
        }
        if (0 < iVar12) {
          (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
          (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,5);
          piVar2 = *(int **)Pipeline_exref;
          puVar18 = &DAT_005e0998;
          iVar19 = 0x89;
          do {
            (**(code **)(*piVar2 + 0xf0))(piVar2,iVar19,*(undefined4 *)(puVar18 + 4));
            iVar19 = *(int *)(puVar18 + 8);
            puVar18 = puVar18 + 8;
          } while (iVar19 != 0);
          iVar19 = iVar12 * 3;
          FUN_0054f9c0();
          if (iVar19 != 0) {
            DAT_00679828 = DAT_00679828 & 0xf9 ^ DAT_00679828 & 1;
            DAT_006797d0 = 4;
            iVar14 = (**(code **)(*DAT_006797e0 + 0x14))
                               (DAT_006797e0,DAT_006797d8,iVar19,&DAT_006797e4);
            cVar10 = '\x01' - (iVar14 != 0);
            uStack_13c = CONCAT13(cVar10,(undefined3)uStack_13c);
            if (cVar10 != '\0') {
              _DAT_006797f4 = iVar19;
              FUN_0054f830(DAT_006797f0,DAT_006797e8);
              iVar19 = 0;
              pfStack_128 = (float *)0x0;
              if (0 < (int)param_1[5]) {
                iVar14 = 0;
                do {
                  fVar5 = param_1[3];
                  iVar1 = (int)fVar5 + iVar14;
                  if (((*(char *)((int)fVar5 + 0x14 + iVar14) != '\0') &&
                      (*(float *)(iVar1 + 0x10) < _DAT_005c75dc)) &&
                     (_DAT_005d1fe4 < *(float *)(iVar1 + 0x10))) {
                    pfStack_128 = (float *)((int)pfStack_128 + 1);
                    if (iVar12 < (int)pfStack_128) {
                      (**(code **)FDUMP_exref)
                                (0x100001,"%s(%d) : *** ERROR: %s",
                                 "E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceTerrainRenderComp.cpp"
                                 ,0x410,"asteroid billboard render count mistake");
                    }
                    else {
                      uVar15 = (uint)*(byte *)((int)fVar5 + 0x15) +
                               (uint)*(byte *)(iVar1 + 0x16) * 2;
                      if ((uVar15 < 4) || (uVar15 = uVar15 - 4, uVar15 < 4)) {
                        switch(uVar15) {
                        case 0:
                          goto switchD_0054f5dd_caseD_0;
                        case 1:
                          pfStack_c8 = pfVar16;
                          piStack_c4 = piVar6;
                          fStack_c0 = uStack_f0;
                          break;
                        case 2:
                          pfStack_c8 = pfStack_d4;
                          piStack_c4 = piStack_d0;
                          fStack_c0 = fStack_cc;
                          break;
                        case 3:
                          pfStack_c8 = pfStack_ec;
                          piStack_c4 = piStack_e8;
                          fStack_c0 = fStack_e4;
                        }
                      }
                      else {
switchD_0054f5dd_caseD_0:
                        pfStack_c8 = (float *)ppfStack_124;
                        piStack_c4 = (int *)pfStack_120;
                        fStack_c0 = (float)pfStack_11c;
                      }
                      FUN_0054f9f0(iVar1,&pfStack_118,param_1 + 0xd,&pfStack_c8,&fStack_8c);
                    }
                  }
                  iVar19 = iVar19 + 1;
                  iVar14 = iVar14 + 0x20;
                } while (iVar19 < (int)param_1[5]);
              }
              (**(code **)(*DAT_006797e0 + 0x18))(DAT_006797e0,&DAT_006797e4);
              puVar8 = DAT_0067983c;
              if (DAT_006797d4 != 0) {
                if ((DAT_00679828 & 2) != 0) {
                  *DAT_0067983c = DAT_006797f8;
                  puVar8[1] = DAT_006797fc;
                  puVar8[2] = DAT_00679800;
                  FUN_00552b10(0);
                  *DAT_00679844 = DAT_00679804;
                  FUN_00552b10(0);
                  *DAT_0067984c = _DAT_00679808;
                  DAT_0067984c[1] = _DAT_0067980c;
                  FUN_00552b10(0);
                  DAT_006797d4 = DAT_006797d4 + 1;
                }
                (**(code **)(*DAT_006797dc + 0x11c))
                          (DAT_006797dc,DAT_006797d0,DAT_006797e4,DAT_006797ec,DAT_006797d4,0);
              }
            }
          }
        }
      }
    }
    FUN_0054f960(0,0);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,1);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,2);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,pfStack_d4);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,0);
    piVar6 = *(int **)Pipeline_exref;
    puVar18 = &DAT_005e09e0;
    iVar12 = 0x8d;
    do {
      (**(code **)(*piVar6 + 0xf0))(piVar6,iVar12,*(undefined4 *)(puVar18 + 4));
      iVar12 = *(int *)(puVar18 + 8);
      puVar18 = puVar18 + 8;
    } while (iVar12 != 0);
    FUN_0054f800(*(undefined4 *)Pipeline_exref,&DAT_005e0958);
  }
  return;
}

