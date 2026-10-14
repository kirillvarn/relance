
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004038f0(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float10 fVar17;
  int *piVar18;
  float fVar19;
  float *pfStack_50;
  float fStack_4c;
  int *piStack_48;
  int *piStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 *puStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 *puStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  piStack_44 = param_1;
  piStack_48 = (int *)0x4038ff;
  fStack_4c = (float)(**(code **)(*param_1 + 0x40))();
  if (DAT_00616494 == (int *)0x0) {
    piStack_48 = (int *)0x40390f;
    DAT_00616494 = (int *)FUN_005b73e0();
  }
  piStack_48 = param_1;
  pfStack_50 = &fStack_14;
  (**(code **)(*DAT_00616494 + 0x28))(DAT_00616494);
  fStack_2c = (float)puStack_1c - (float)_DAT_005c75f8 * (float)puStack_1c;
  fStack_34 = fStack_24;
  fStack_30 = fStack_20;
  fVar16 = (float10)(**(code **)(*param_1 + 0x20))(param_1);
  if ((float10)fStack_30 - fVar16 < (float10)_DAT_005c7474) {
    fStack_14 = _DAT_005c7500 / fStack_30;
    piVar3 = param_1;
    fVar16 = (float10)(**(code **)(*param_1 + 0x2c))(param_1);
    fStack_14 = (float)fVar16;
    piVar18 = param_1;
    fVar16 = (float10)(**(code **)(*param_1 + 0x20))();
    piVar10 = param_1;
    fVar16 = (float10)(**(code **)(*param_1 + 0x30))
                                (param_1,piVar18,piVar3,(float)(fVar16 * (float10)fStack_18));
    puStack_1c = (undefined4 *)(float)fVar16;
    fVar17 = (float10)(**(code **)(*param_1 + 0x20))();
    fVar16 = (float10)fStack_20;
    fStack_20 = fStack_14 * (float)piVar18 * fStack_24;
    fStack_14 = (float)piVar18 * fStack_24 * fStack_10;
    fVar19 = ABS((float)(fVar17 * fVar16) * fStack_24 * fStack_10);
    if ((fStack_20 < _DAT_005c75dc) && (fStack_14 < _DAT_005c75dc)) {
      return 0;
    }
    piVar3 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
    fStack_14 = fStack_4c * (float)piVar10 * (float)puStack_28 +
                (float)(piVar3[2] - *piVar3) * _DAT_005c75e0 + (float)*piVar3;
    fVar12 = (float)piStack_48 * fVar19 * (float)puStack_28 +
             (float)(piVar3[3] - piVar3[1]) * _DAT_005c75e0 + (float)piVar3[1];
    fVar16 = (float10)(**(code **)(*param_1 + 0x20))(param_1);
    fVar19 = (float)((float10)_DAT_005c75dc - fVar16 * (float10)fStack_2c);
    iVar4 = FUN_00402f40();
    if (_DAT_005c75dc < (float)puStack_28) {
      iVar9 = iVar4;
      uVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      if (1 < uVar7 + uVar5 + uVar6) {
        fVar1 = fStack_18 - (float)puStack_28;
        fStack_38 = fStack_18 + (float)puStack_28;
        fVar11 = (float)(((uVar5 | 0xffffff00) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff);
        pfStack_50 = *(float **)(iVar4 + 0x20);
        fStack_4c = *(float *)(iVar4 + 0x24);
        fVar2 = (float)param_1 - fVar12;
        piStack_48 = *(int **)(iVar4 + 0x28);
        piStack_44 = *(int **)(iVar4 + 0x2c);
        fStack_34 = (float)param_1 + fVar12;
        iVar8 = FUN_00404670(&stack0xffffffc0,&fStack_38,&pfStack_50,&piStack_48,(float)*piVar3,
                             (float)piVar3[2],(float)puStack_28 + (float)puStack_28);
        if (iVar8 != 0) {
          iVar8 = FUN_00404670(&stack0xffffffc4,&fStack_34,&fStack_4c,&piStack_44,(float)piVar3[1],
                               (float)piVar3[3],fVar12 + fVar12);
          if (iVar8 != 0) {
            iVar8 = *(int *)(iVar4 + 0x18);
            fVar12 = *(float *)(iVar8 + 0xc);
            piVar10 = (int *)(iVar8 + 8);
            *(int *)(iVar8 + 0xc) = (int)fVar12 + 1;
            fStack_24 = fVar12;
            if (*(int *)(iVar8 + 0x10) < (int)fVar12 + 1) {
              *(int *)(iVar8 + 0x10) = (int)fVar12 + 0x21;
              puStack_28 = operator_new(((int)fVar12 + 0x21) * 0x2c);
              if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
                puVar14 = (undefined4 *)*piVar10;
                puVar15 = puStack_28;
                for (uVar5 = (uint)((int)fVar12 * 0x2c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                for (iVar8 = 0; fVar12 = fStack_24, iVar4 = iVar9, iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
                  puVar14 = (undefined4 *)((int)puVar14 + 1);
                  puVar15 = (undefined4 *)((int)puVar15 + 1);
                }
              }
              FUN_005b7e1d(*piVar10);
              *piVar10 = (int)puStack_28;
            }
            pfVar13 = (float *)((int)fVar12 * 0x2c + *piVar10);
            *pfVar13 = fVar1;
            pfVar13[1] = fVar2;
            pfVar13[2] = fStack_38;
            pfVar13[3] = fStack_34;
            pfVar13[4] = fVar19;
            pfVar13[5] = fStack_2c;
            pfVar13[6] = (float)pfStack_50;
            pfVar13[7] = fStack_4c;
            pfVar13[8] = (float)piStack_48;
            pfVar13[9] = (float)piStack_44;
            pfVar13[10] = fVar11;
          }
        }
      }
    }
    if (_DAT_005c75dc < (float)puStack_1c) {
      uVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      if (1 < uVar7 + uVar6 + uVar5) {
        fVar12 = fStack_18 - (float)puStack_1c;
        fStack_38 = fStack_18 + (float)puStack_1c;
        fStack_24 = (float)(((uVar5 | 0xffffff00) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff);
        pfStack_50 = *(float **)(iVar4 + 0x20);
        fStack_4c = *(float *)(iVar4 + 0x24);
        fVar1 = (float)param_1 - (float)piVar18;
        piStack_48 = *(int **)(iVar4 + 0x28);
        piStack_44 = *(int **)(iVar4 + 0x2c);
        fStack_34 = (float)param_1 + (float)piVar18;
        iVar9 = FUN_00404670(&stack0xffffffc0,&fStack_38,&pfStack_50,&piStack_48,(float)*piVar3,
                             (float)piVar3[2],(float)puStack_1c + (float)puStack_1c);
        if (iVar9 != 0) {
          iVar9 = FUN_00404670(&stack0xffffffc4,&fStack_34,&fStack_4c,&piStack_44,(float)piVar3[1],
                               (float)piVar3[3],(float)piVar18 + (float)piVar18);
          if (iVar9 != 0) {
            iVar4 = *(int *)(iVar4 + 0x18);
            iVar9 = *(int *)(iVar4 + 0xc);
            piVar10 = (int *)(iVar4 + 8);
            *(int *)(iVar4 + 0xc) = iVar9 + 1;
            if (*(int *)(iVar4 + 0x10) < iVar9 + 1) {
              *(int *)(iVar4 + 0x10) = iVar9 + 0x21;
              puStack_1c = operator_new((iVar9 + 0x21) * 0x2c);
              if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
                puVar14 = (undefined4 *)*piVar10;
                puVar15 = puStack_1c;
                for (uVar5 = (uint)(iVar9 * 0x2c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
                  puVar14 = (undefined4 *)((int)puVar14 + 1);
                  puVar15 = (undefined4 *)((int)puVar15 + 1);
                }
              }
              FUN_005b7e1d(*piVar10);
              *piVar10 = (int)puStack_1c;
            }
            pfVar13 = (float *)(iVar9 * 0x2c + *piVar10);
            *pfVar13 = fVar12;
            pfVar13[1] = fVar1;
            pfVar13[2] = fStack_38;
            pfVar13[3] = fStack_34;
            pfVar13[4] = fVar19;
            pfVar13[5] = fStack_2c;
            pfVar13[6] = (float)pfStack_50;
            pfVar13[7] = fStack_4c;
            pfVar13[8] = (float)piStack_48;
            pfVar13[9] = (float)piStack_44;
            pfVar13[10] = fStack_24;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}

