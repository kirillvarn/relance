
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050e6f0(float *param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float *pfVar12;
  float fVar13;
  float **ppfVar14;
  int iStack_70;
  float *pfStack_6c;
  float fStack_68;
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_38;
  float fStack_2c;
  float fStack_20;
  undefined1 local_1c [28];
  
  if (param_1[0xb8] == 0.0) {
    fVar11 = 0.0;
    FUN_004205c0(param_1 + 0xb0);
    cVar2 = FUN_00420690(local_1c);
    if (cVar2 == '\0') {
      piVar4 = (int *)FUN_004206c0(&local_50,local_1c);
      DAT_006750b4 = *piVar4;
    }
    if ((DAT_006750b4 == DAT_006750a4) || (fVar11 = (float)(DAT_006750b4 + 0x28), fVar11 == 0.0)) {
      puVar5 = (undefined4 *)FUN_00411c50(0x10000,2);
      (**(code **)FDUMP_exref)
                (*puVar5,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                 "cmn\\ShapeDB.h",0xf2,param_1 + 0xb0);
    }
    param_1[0xb8] = fVar11;
    *(undefined1 *)(param_1 + 0xb9) = 0;
    pfStack_6c = (float *)FUN_005b7010(0);
    if (param_1[0xb8] != 0.0) {
      iVar7 = **(int **)Pipeline_exref;
      ppfVar14 = &pfStack_6c;
      uVar6 = FUN_00425640(0);
      iVar7 = (**(code **)(iVar7 + 200))(*(undefined4 *)Pipeline_exref,uVar6,ppfVar14);
      if (iVar7 == 0) {
        if (((int)pfStack_6c < 10) || (0xe < (int)pfStack_6c)) {
          iVar7 = FUN_005b7030(pfStack_6c);
          uVar3 = *(undefined1 *)(iVar7 + 0x48);
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(param_1 + 0xb9) = uVar3;
      }
    }
    if (param_1[0xb8] == 0.0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0xb9) == '\0') {
    uVar6 = 2;
  }
  else {
    uVar6 = 5;
  }
  FUN_004220c0(uVar6,2);
  if (DAT_0067519c != '\0') {
    FUN_00421ed0(0xbe2);
  }
  fVar11 = param_1[0xab] * *(float *)(param_3 + 0x88);
  fStack_4c = *(float *)(param_3 + 0x7c);
  fStack_48 = *(float *)(param_3 + 0x80);
  uStack_44 = *(undefined4 *)(param_3 + 0x84);
  if ((int)param_1[0xac] < 3) {
    uVar6 = FUN_00425640(0);
    FUN_004220a0(uVar6);
    FUN_00421670(6);
    FUN_00421bd0(param_1[0xa2],param_1[0xa3],param_1[0xa4],_DAT_00613458 * param_1[4] * param_4);
    FUN_00421ca0(param_1[2],param_1[3]);
    FUN_00421cc0(fVar11 * *param_1 + fStack_4c,fVar11 * param_1[1] + fStack_48,0);
    iVar7 = 1;
    if (1 < DAT_0061345c) {
      pfVar12 = param_1 + 9;
      do {
        FUN_00421bd0(param_1[0xa8],param_1[0xa9],param_1[0xaa],_DAT_00613458 * pfVar12[1] * param_4)
        ;
        FUN_00421ca0(pfVar12[-1],*pfVar12);
        FUN_00421cc0(fVar11 * pfVar12[-3] + fStack_4c,fVar11 * pfVar12[-2] + fStack_48,0);
        iVar7 = iVar7 + 1;
        pfVar12 = pfVar12 + 6;
      } while (iVar7 < DAT_0061345c);
    }
    FUN_00421bd0(param_1[0xa8],param_1[0xa9],param_1[0xaa],_DAT_00613458 * param_1[10] * param_4);
    FUN_00421ca0(param_1[8],param_1[9]);
    FUN_00421cc0(fVar11 * param_1[6] + fStack_4c,fVar11 * param_1[7] + fStack_48,0);
  }
  else {
    uVar6 = FUN_00425640(0);
    FUN_004220a0(uVar6);
    FUN_00421670(4);
    if (DAT_006751a0 < DAT_00613460) {
      pfStack_6c = param_1 + DAT_006751a0 + 0x96;
      local_50 = DAT_006751a0 + 1;
      pfVar12 = param_1 + DAT_006751a0 * 6 + 0x51;
      local_54 = -0x234 - (int)param_1;
      iStack_60 = -0x24c - (int)param_1;
      iStack_5c = -300 - (int)param_1;
      iStack_58 = -0x114 - (int)param_1;
      do {
        iVar7 = iStack_5c + (int)pfVar12;
        iStack_70 = iVar7;
        if (0xb < local_50) {
          iStack_70 = iStack_60 + (int)pfVar12;
        }
        if (0xc < local_50) {
          iVar7 = iStack_60 + (int)pfVar12;
        }
        local_50 = local_50 + 1;
        iVar10 = iStack_58;
        if (0xc < local_50) {
          iVar10 = local_54;
        }
        iVar10 = iVar10 + (int)pfVar12;
        fVar1 = *(float *)((int)param_1 + iVar7 + 0x10);
        fStack_64 = *(float *)(iVar10 + 0x10 + (int)param_1);
        iVar8 = 0;
        fStack_68 = *(float *)(iStack_70 + 0x148 + (int)param_1);
        if (pfVar12[1] <= _DAT_005c8b70) {
          if (pfVar12[1] < _DAT_005d1494) {
            iVar8 = -1;
          }
        }
        else {
          iVar8 = 1;
        }
        iVar9 = 0;
        if (fStack_68 <= _DAT_005c8b70) {
          if (fStack_68 < _DAT_005d1494) {
            iVar9 = -1;
          }
        }
        else {
          iVar9 = 1;
        }
        if (iVar8 == iVar9) {
          iVar8 = 0;
          if (fVar1 <= _DAT_005c8b70) {
            if (fVar1 < _DAT_005d1494) {
              iVar8 = -1;
            }
          }
          else {
            iVar8 = 1;
          }
          iVar9 = 0;
          if (fStack_64 <= _DAT_005c8b70) {
            if (fStack_64 < _DAT_005d1494) {
              iVar9 = -1;
            }
          }
          else {
            iVar9 = 1;
          }
          if (iVar8 == iVar9) {
LAB_0050ebeb:
            if (*pfStack_6c != 0.0) goto LAB_0050ede0;
          }
          else if (iVar8 == 1) {
            *pfStack_6c = 0.0;
          }
          else {
            if (iVar8 == -1) goto LAB_0050edd6;
            if (iVar9 == 1) {
              *pfStack_6c = 1.4013e-45;
              goto LAB_0050ede0;
            }
            if (iVar9 != -1) goto LAB_0050ebeb;
            *pfStack_6c = 0.0;
          }
LAB_0050ebf8:
          fStack_38 = param_1[0xa7];
          FUN_00421bd0(param_1[0xa5],param_1[0xa6],fStack_38,
                       _DAT_00613458 * *(float *)(iStack_70 + 0x148 + (int)param_1) * param_4);
          FUN_00421ca0(*(undefined4 *)(iStack_70 + 0x140 + (int)param_1),
                       *(undefined4 *)(iStack_70 + 0x144 + (int)param_1));
          FUN_00421cc0(fVar11 * *(float *)(iStack_70 + 0x138 + (int)param_1) + fStack_4c,
                       fVar11 * *(float *)(iStack_70 + 0x13c + (int)param_1) + fStack_48,0);
          FUN_00421bd0(param_1[0xa5],param_1[0xa6],param_1[0xa7],
                       _DAT_00613458 * param_4 * pfVar12[1]);
          FUN_00421ca0(pfVar12[-1],*pfVar12);
          FUN_00421cc0(fVar11 * pfVar12[-3] + fStack_4c,fVar11 * pfVar12[-2] + fStack_48,0);
          FUN_00421bd0(param_1[0xa8],param_1[0xa9],param_1[0xaa],
                       _DAT_00613458 * *(float *)((int)param_1 + iVar7 + 0x10) * param_4);
          FUN_00421ca0(*(undefined4 *)((int)param_1 + iVar7 + 8),
                       *(undefined4 *)((int)param_1 + iVar7 + 0xc));
          FUN_00421cc0(fVar11 * *(float *)((int)param_1 + iVar7) + fStack_4c,
                       fVar11 * *(float *)((int)param_1 + iVar7 + 4) + fStack_48,0);
          fStack_2c = param_1[0xa7];
          FUN_00421bd0(param_1[0xa5],param_1[0xa6],fStack_2c,
                       _DAT_00613458 * *(float *)(iStack_70 + 0x148 + (int)param_1) * param_4);
          FUN_00421ca0(*(undefined4 *)(iStack_70 + 0x140 + (int)param_1),
                       *(undefined4 *)(iStack_70 + 0x144 + (int)param_1));
          fVar13 = fVar11 * *(float *)(iStack_70 + 0x13c + (int)param_1) + fStack_48;
          fVar1 = *(float *)(iStack_70 + 0x138 + (int)param_1);
        }
        else {
          if (iVar8 == 1) {
            *pfStack_6c = 0.0;
            goto LAB_0050ebf8;
          }
          if (iVar8 == -1) {
            *pfStack_6c = 1.4013e-45;
          }
          else {
            if (iVar9 != 1) {
              if (iVar9 != -1) goto LAB_0050ebeb;
              *pfStack_6c = 0.0;
              goto LAB_0050ebf8;
            }
LAB_0050edd6:
            *pfStack_6c = 1.4013e-45;
          }
LAB_0050ede0:
          fStack_20 = param_1[0xa7];
          FUN_00421bd0(param_1[0xa5],param_1[0xa6],fStack_20,
                       _DAT_00613458 * *(float *)(iStack_70 + 0x148 + (int)param_1) * param_4);
          FUN_00421ca0(*(undefined4 *)(iStack_70 + 0x140 + (int)param_1),
                       *(undefined4 *)(iStack_70 + 0x144 + (int)param_1));
          FUN_00421cc0(fVar11 * *(float *)(iStack_70 + 0x138 + (int)param_1) + fStack_4c,
                       fVar11 * *(float *)(iStack_70 + 0x13c + (int)param_1) + fStack_48,0);
          FUN_00421bd0(param_1[0xa5],param_1[0xa6],param_1[0xa7],
                       _DAT_00613458 * param_4 * pfVar12[1]);
          FUN_00421ca0(pfVar12[-1],*pfVar12);
          FUN_00421cc0(fVar11 * pfVar12[-3] + fStack_4c,fVar11 * pfVar12[-2] + fStack_48,0);
          FUN_00421bd0(param_1[0xa8],param_1[0xa9],param_1[0xaa],
                       _DAT_00613458 * *(float *)(iVar10 + 0x10 + (int)param_1) * param_4);
          FUN_00421ca0(*(undefined4 *)(iVar10 + 8 + (int)param_1),
                       *(undefined4 *)(iVar10 + 0xc + (int)param_1));
          FUN_00421cc0(fVar11 * *(float *)(iVar10 + (int)param_1) + fStack_4c,
                       fVar11 * *(float *)(iVar10 + 4 + (int)param_1) + fStack_48,0);
          FUN_00421bd0(param_1[0xa5],param_1[0xa6],param_1[0xa7],
                       _DAT_00613458 * param_4 * pfVar12[1]);
          FUN_00421ca0(pfVar12[-1],*pfVar12);
          fVar13 = fVar11 * pfVar12[-2] + fStack_48;
          fVar1 = pfVar12[-3];
        }
        FUN_00421cc0(fVar11 * fVar1 + fStack_4c,fVar13,0);
        FUN_00421bd0(param_1[0xa8],param_1[0xa9],param_1[0xaa],
                     _DAT_00613458 * *(float *)((int)param_1 + iVar7 + 0x10) * param_4);
        FUN_00421ca0(*(undefined4 *)((int)param_1 + iVar7 + 8),
                     *(undefined4 *)((int)param_1 + iVar7 + 0xc));
        FUN_00421cc0(fVar11 * *(float *)((int)param_1 + iVar7) + fStack_4c,
                     fVar11 * *(float *)((int)param_1 + iVar7 + 4) + fStack_48,0);
        FUN_00421bd0(param_1[0xa8],param_1[0xa9],param_1[0xaa],
                     _DAT_00613458 * *(float *)(iVar10 + 0x10 + (int)param_1) * param_4);
        FUN_00421ca0(*(undefined4 *)(iVar10 + 8 + (int)param_1),
                     *(undefined4 *)(iVar10 + 0xc + (int)param_1));
        FUN_00421cc0(fVar11 * *(float *)(iVar10 + (int)param_1) + fStack_4c,
                     fVar11 * *(float *)(iVar10 + 4 + (int)param_1) + fStack_48,0);
        pfStack_6c = pfStack_6c + 1;
        pfVar12 = pfVar12 + 6;
      } while (local_50 + -1 < DAT_00613460);
    }
    FUN_00421690();
    if (DAT_00613464 == 0) goto LAB_0050f206;
    uVar6 = FUN_00425640(0);
    FUN_004220a0(uVar6);
    FUN_00421670(6);
    FUN_00421bd0(param_1[0xa2],param_1[0xa3],param_1[0xa4],_DAT_00613458 * param_1[4] * param_4);
    FUN_00421ca0(param_1[2],param_1[3]);
    FUN_00421cc0(fVar11 * *param_1 + fStack_4c,fVar11 * param_1[1] + fStack_48,0);
    iVar7 = 0;
    if (0 < DAT_00613468) {
      pfVar12 = param_1 + 0x51;
      do {
        FUN_00421bd0(param_1[0xa5],param_1[0xa6],param_1[0xa7],_DAT_00613458 * pfVar12[1] * param_4)
        ;
        FUN_00421ca0(pfVar12[-1],*pfVar12);
        FUN_00421cc0(fVar11 * pfVar12[-3] + fStack_4c,fVar11 * pfVar12[-2] + fStack_48,0);
        iVar7 = iVar7 + 1;
        pfVar12 = pfVar12 + 6;
      } while (iVar7 < DAT_00613468);
    }
    FUN_0050f230(fStack_4c,fStack_48,uStack_44,fVar11,param_1[0xa5],param_1[0xa6],param_1[0xa7],
                 *(undefined1 *)(param_1 + 0xb9),param_4);
  }
  FUN_00421690();
LAB_0050f206:
  if (DAT_0067519c != '\0') {
    FUN_00421dd0(0xbe2);
  }
  return;
}

