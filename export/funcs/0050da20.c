
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050da20(float *param_1,int *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  char cVar7;
  int *piVar8;
  float fVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined4 unaff_retaddr;
  float fVar16;
  float fStack_8c;
  uint uStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float *pfStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float local_50;
  float fStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  float fStack_c;
  int *piStack_4;
  
  local_50 = param_4 / param_1[0xba];
  param_4 = param_4 / param_1[0xbb];
  piVar8 = (int *)(**(code **)(*param_2 + 0x14))(param_2);
  iStack_14 = (piVar8[2] - *piVar8) + 1;
  fStack_34 = (float)param_2[0x1f];
  iStack_30 = param_2[0x20];
  fStack_2c = (float)param_2[0x21];
  fStack_60 = (float)param_2[0x22];
  pfVar10 = param_1 + 0x53;
  iVar12 = 0xc;
  do {
    *(undefined1 *)(pfVar10 + -0x4e) = 0;
    *(undefined1 *)pfVar10 = 0;
    pfVar10 = pfVar10 + 6;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  if ((float)(int)param_1[0xbe] <= fStack_60) {
    if ((float)(int)param_1[0xbf] <= fStack_60) {
      if ((float)(int)param_1[0xc0] <= fStack_60) {
        if ((float)(int)param_1[0xc1] <= fStack_60) {
          if ((float)(int)param_1[0xc2] <= fStack_60) {
            param_1[0xac] = 7.00649e-45;
          }
          else {
            param_1[0xac] = 5.60519e-45;
          }
        }
        else {
          param_1[0xac] = 4.2039e-45;
        }
      }
      else {
        param_1[0xac] = 2.8026e-45;
      }
    }
    else {
      param_1[0xac] = 1.4013e-45;
    }
  }
  else {
    param_1[0xac] = 0.0;
  }
  if ((int)param_1[0xac] < (int)param_1[0xae]) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)((int)param_1[0xac] - (int)param_1[0xae]);
  }
  param_1[0xac] = fVar9;
  if ((int)param_1[0xad] < (int)fVar9) {
    param_1[0xac] = param_1[0xad];
  }
  fStack_60 = fStack_60 * param_1[0xab];
  if (fStack_60 < _DAT_005d440c) {
    fStack_60 = 50.0;
  }
  pfVar10 = (float *)(**(code **)(*param_2 + 0xc))(param_2);
  fStack_54 = *pfVar10;
  local_50 = pfVar10[1];
  fStack_4c = pfVar10[2];
  pfVar10 = (float *)(*(code *)**(undefined4 **)param_2[1])();
  fVar3 = _DAT_005c7474;
  fVar9 = *pfVar10;
  fVar16 = pfVar10[1];
  fStack_8c = pfVar10[2];
  fVar4 = SQRT((fVar16 - local_50) * (fVar16 - local_50) +
               (fStack_8c - fStack_4c) * (fStack_8c - fStack_4c) +
               (fVar9 - fStack_54) * (fVar9 - fStack_54));
  fVar2 = fStack_84 * *param_1 + fStack_38;
  fVar1 = fStack_84 * param_1[1] + fStack_34;
  fVar5 = -fStack_64;
  if ((((fVar2 <= fVar5) || ((float)iStack_18 + fStack_64 <= fVar2)) || (fVar1 <= fVar5)) ||
     ((float)(int)pfStack_6c + fStack_64 <= fVar1)) {
    *(undefined1 *)(param_1 + 5) = 1;
    if (fVar3 <= param_1[4]) {
      if ((param_1[4] <= _DAT_005c7474) ||
         (fVar2 = param_1[4], param_1[4] = fVar2 - fStack_60, _DAT_005c7474 <= fVar2 - fStack_60))
      goto LAB_0050de4c;
    }
    else {
      fVar2 = param_1[4];
      param_1[4] = param_4 + fVar2;
      if (param_4 + fVar2 <= _DAT_005c7474) goto LAB_0050de4c;
    }
    param_1[4] = 0.0;
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,&stack0xffffff6c,fVar2,fVar1);
    fVar2 = _DAT_005c75dc / SQRT(fStack_8c * fStack_8c + fVar16 * fVar16 + fVar9 * fVar9);
    fVar9 = fVar9 * fVar2;
    fVar16 = fVar16 * fVar2;
    fStack_8c = fStack_8c * fVar2;
    fStack_c = fStack_8c * fVar4;
    fStack_44 = fVar9 * fVar4 + fStack_54;
    fStack_40 = fVar16 * fVar4 + local_50;
    fStack_3c = fStack_c + fStack_4c;
    fStack_24 = fStack_44;
    fStack_20 = fStack_40;
    fStack_1c = fStack_3c;
    cVar7 = FUN_0050c750(param_2,&fStack_54,&fStack_24,param_2);
    fVar2 = _DAT_005c75dc;
    if (cVar7 == '\0') {
      fVar2 = 0.0;
    }
    fVar2 = _DAT_005c75dc - fVar2;
    *(undefined1 *)(param_1 + 5) = 1;
    if (fVar2 <= param_1[4]) {
      if ((fVar2 < param_1[4]) &&
         (fVar1 = param_1[4], param_1[4] = fVar1 - fStack_60, fVar1 - fStack_60 < fVar2)) {
        param_1[4] = fVar2;
      }
    }
    else {
      fVar1 = param_1[4];
      param_1[4] = param_4 + fVar1;
      if (fVar2 < param_4 + fVar1) {
        param_1[4] = fVar2;
      }
    }
  }
LAB_0050de4c:
  if (param_1[4] < _DAT_005c7474) {
    param_1[4] = 0.0;
  }
  if (_DAT_005c75dc < param_1[4]) {
    param_1[4] = 1.0;
  }
  uStack_88 = 0xe;
  uStack_7c = 0xe;
  switch(param_1[0xac]) {
  case 1.4013e-45:
    uStack_88 = 4;
    break;
  case 2.8026e-45:
    uStack_88 = 2;
    break;
  case 4.2039e-45:
    uStack_88 = 2;
    uStack_7c = uStack_88;
    break;
  case 5.60519e-45:
    uStack_88 = 1;
    uStack_7c = 2;
    break;
  case 7.00649e-45:
    uStack_88 = 1;
    uStack_7c = uStack_88;
  }
  if (2 < (int)param_1[0xac]) {
    fStack_2c = (float)(uStack_7c * 0x18);
    iStack_48 = 0;
    fVar2 = (param_1[4] + (float)_DAT_005c89b8) * (float)_DAT_005c75e8;
    pfVar10 = param_1 + 0x52;
    do {
      fVar1 = fStack_84 * pfVar10[-4] * param_1[0xbd] + fStack_38;
      fVar3 = fStack_84 * pfVar10[-3] * param_1[0xbd] + fStack_34;
      if ((((fVar1 <= fVar5) || ((float)iStack_18 + fStack_64 <= fVar1)) || (fVar3 <= fVar5)) ||
         ((float)(int)pfStack_6c + fStack_64 <= fVar3)) {
        *(undefined1 *)(pfVar10 + 1) = 1;
        fVar1 = fVar2 * _DAT_005c7474;
        if (fVar1 <= *pfVar10) {
          if ((fVar1 < *pfVar10) &&
             (fVar3 = *pfVar10, *pfVar10 = fVar3 - fStack_60, fVar3 - fStack_60 < fVar1)) {
            *pfVar10 = fVar1;
          }
        }
        else {
          fVar3 = *pfVar10;
          *pfVar10 = param_4 + fVar3;
          if (fVar1 < param_4 + fVar3) {
            *pfVar10 = fVar1;
          }
        }
        if (_DAT_005c7474 <= *pfVar10) {
          if (_DAT_005c75dc < *pfVar10) {
            *pfVar10 = 1.0;
          }
        }
        else {
          *pfVar10 = 0.0;
        }
      }
      else {
        fStack_28 = 0.0;
        (**(code **)(*param_2 + 0x38))(param_2,&stack0xffffff6c,fVar1,fVar3);
        fVar1 = _DAT_005c75dc / SQRT(fStack_8c * fStack_8c + fVar16 * fVar16 + fVar9 * fVar9);
        fVar9 = fVar9 * fVar1;
        fVar16 = fVar16 * fVar1;
        fStack_8c = fStack_8c * fVar1;
        fStack_c = fStack_8c * fVar4;
        fStack_44 = fVar9 * fVar4 + fStack_54;
        fStack_40 = fVar16 * fVar4 + local_50;
        fStack_3c = fStack_c + fStack_4c;
        fStack_24 = fStack_44;
        fStack_20 = fStack_40;
        fStack_1c = fStack_3c;
        cVar7 = FUN_0050c750(unaff_retaddr,&fStack_54,&fStack_24,param_2);
        fVar1 = fStack_28;
        if (cVar7 != '\0') {
          fVar1 = _DAT_005c75dc;
        }
        fVar1 = _DAT_005c75dc - fVar1;
        *(undefined1 *)(pfVar10 + 1) = 1;
        fVar1 = fVar1 * fVar2;
        if (fVar1 <= *pfVar10) {
          if ((fVar1 < *pfVar10) &&
             (fVar3 = *pfVar10, *pfVar10 = fVar3 - fStack_60, fVar3 - fStack_60 < fVar1)) {
            *pfVar10 = fVar1;
          }
        }
        else {
          fVar3 = *pfVar10;
          *pfVar10 = param_4 + fVar3;
          if (fVar1 < param_4 + fVar3) {
            *pfVar10 = fVar1;
          }
        }
        param_2 = piStack_4;
        if (_DAT_005c7474 <= *pfVar10) {
          if (_DAT_005c75dc < *pfVar10) {
            *pfVar10 = 1.0;
          }
        }
        else {
          *pfVar10 = 0.0;
        }
      }
      iStack_48 = iStack_48 + uStack_7c;
      pfVar10 = (float *)((int)pfVar10 + (int)fStack_2c);
    } while (iStack_48 < 0xc);
  }
  if (0 < (int)param_1[0xac]) {
    fStack_28 = (float)(uStack_88 * 0x18);
    iStack_48 = 1;
    fStack_80 = (param_1[4] + (float)_DAT_005c89b8) * (float)_DAT_005c75e8;
    pfVar10 = param_1 + 10;
    do {
      fVar2 = fStack_84 * pfVar10[-4] + fStack_38;
      fVar1 = fStack_84 * pfVar10[-3] + fStack_34;
      if (2 < (int)param_1[0xac]) {
        fStack_80 = (pfVar10[0x48] + (float)_DAT_005c89b8) * (float)_DAT_005c75e8;
      }
      if ((((fVar2 <= fVar5) || ((float)iStack_18 + fStack_64 <= fVar2)) || (fVar1 <= fVar5)) ||
         ((float)(int)pfStack_6c + fStack_64 <= fVar1)) {
        *(undefined1 *)(pfVar10 + 1) = 1;
        fVar2 = fStack_80 * _DAT_005c7474;
        if (fVar2 <= *pfVar10) {
          if ((fVar2 < *pfVar10) &&
             (fVar1 = *pfVar10, *pfVar10 = fVar1 - fStack_60, fVar1 - fStack_60 < fVar2)) {
            *pfVar10 = fVar2;
          }
        }
        else {
          fVar1 = *pfVar10;
          *pfVar10 = param_4 + fVar1;
          if (fVar2 < param_4 + fVar1) {
            *pfVar10 = fVar2;
          }
        }
        if (_DAT_005c7474 <= *pfVar10) {
          if (_DAT_005c75dc < *pfVar10) {
            *pfVar10 = 1.0;
          }
        }
        else {
          *pfVar10 = 0.0;
        }
      }
      else {
        fStack_2c = 0.0;
        (**(code **)(*param_2 + 0x38))(param_2,&stack0xffffff6c,fVar2,fVar1);
        fVar2 = _DAT_005c75dc / SQRT(fStack_8c * fStack_8c + fVar16 * fVar16 + fVar9 * fVar9);
        fVar9 = fVar9 * fVar2;
        fVar16 = fVar16 * fVar2;
        fStack_8c = fStack_8c * fVar2;
        fStack_c = fStack_8c * fVar4;
        fStack_44 = fVar9 * fVar4 + fStack_54;
        fStack_40 = fVar16 * fVar4 + local_50;
        fStack_3c = fStack_c + fStack_4c;
        fStack_24 = fStack_44;
        fStack_20 = fStack_40;
        fStack_1c = fStack_3c;
        cVar7 = FUN_0050c750(unaff_retaddr,&fStack_54,&fStack_24,param_2);
        fVar2 = fStack_2c;
        if (cVar7 != '\0') {
          fVar2 = _DAT_005c75dc;
        }
        fVar2 = _DAT_005c75dc - fVar2;
        *(undefined1 *)(pfVar10 + 1) = 1;
        fVar2 = fVar2 * fStack_80;
        if (fVar2 <= *pfVar10) {
          if ((fVar2 < *pfVar10) &&
             (fVar1 = *pfVar10, *pfVar10 = fVar1 - fStack_60, fVar1 - fStack_60 < fVar2)) {
            *pfVar10 = fVar2;
          }
        }
        else {
          fVar1 = *pfVar10;
          *pfVar10 = param_4 + fVar1;
          if (fVar2 < param_4 + fVar1) {
            *pfVar10 = fVar2;
          }
        }
        param_2 = piStack_4;
        if (_DAT_005c7474 <= *pfVar10) {
          if (_DAT_005c75dc < *pfVar10) {
            *pfVar10 = 1.0;
          }
        }
        else {
          *pfVar10 = 0.0;
        }
      }
      iStack_48 = iStack_48 + uStack_88;
      pfVar10 = (float *)((int)pfVar10 + (int)fStack_28);
    } while (iStack_48 < 0xd);
  }
  fVar9 = param_1[0xac];
  if (fVar9 == 0.0) {
    fVar9 = param_1[4];
    param_1 = param_1 + 10;
    iVar12 = 0xc;
    do {
      *param_1 = fVar9;
      param_1 = param_1 + 6;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  else if ((0 < (int)fVar9) && ((int)fVar9 < 5)) {
    if (1 < uStack_88) {
      do {
        uVar11 = ftol();
        pfStack_6c = param_1 + uVar11 * 6 + 10;
        iVar12 = 1;
        iVar13 = (uStack_88 * 3 + 3) * 8;
        pfVar10 = param_1 + 10;
        do {
          iVar12 = uStack_88 + iVar12;
          iVar14 = iVar13;
          if (0xc < iVar12) {
            iVar14 = iVar13 + -0x120;
          }
          if (*pfVar10 <= *(float *)((int)param_1 + iVar14 + 0x10)) {
            fVar9 = *pfVar10 * (float)_DAT_005cf0f8;
            dVar6 = _DAT_005c9858;
          }
          else {
            fVar9 = *pfVar10 * (float)_DAT_005c9858;
            dVar6 = _DAT_005cf0f8;
          }
          iVar13 = iVar13 + uStack_88 * 0x18;
          *pfStack_6c = fVar9 + *(float *)((int)param_1 + iVar14 + 0x10) * (float)dVar6;
          pfStack_6c = pfStack_6c + uStack_88 * 6;
          pfVar10 = pfVar10 + uStack_88 * 6;
        } while (iVar12 < 0xd);
        uStack_88 = uVar11;
      } while (1 < (int)uVar11);
    }
    fVar9 = param_1[0xac];
    bVar15 = false;
    if (fVar9 == 2.8026e-45) {
      iVar12 = 0;
      pfVar10 = param_1 + 0x52;
      do {
        iVar13 = -0x130 - (int)param_1;
        if (0xc < iVar12 + 1) {
          iVar13 = -0x250 - (int)param_1;
        }
        iVar12 = iVar12 + 2;
        *pfVar10 = (*(float *)((int)pfVar10 + iVar13 + 0x10 + (int)param_1) + param_1[4]) *
                   (float)_DAT_005c75e8;
        pfVar10 = pfVar10 + 0xc;
      } while (iVar12 < 0xc);
      fVar9 = param_1[0xac];
      bVar15 = fVar9 == 2.8026e-45;
    }
    if ((!bVar15 && 1 < (int)fVar9) && (1 < uStack_7c)) {
      do {
        uVar11 = ftol();
        iVar13 = 0;
        pfStack_6c = param_1 + uVar11 * 6 + 0x52;
        pfVar10 = param_1 + 0x52;
        iVar12 = uStack_7c * 0x18;
        do {
          iVar13 = uStack_7c + iVar13;
          iVar14 = iVar12;
          if (0xb < iVar13) {
            iVar14 = iVar12 + -0x120;
          }
          if (*pfVar10 <= *(float *)(iVar14 + 0x148 + (int)param_1)) {
            fVar9 = *pfVar10 * (float)_DAT_005cf0f8;
            dVar6 = _DAT_005c9858;
          }
          else {
            fVar9 = *pfVar10 * (float)_DAT_005c9858;
            dVar6 = _DAT_005cf0f8;
          }
          iVar12 = iVar12 + uStack_7c * 0x18;
          *pfStack_6c = fVar9 + *(float *)(iVar14 + 0x148 + (int)param_1) * (float)dVar6;
          pfStack_6c = pfStack_6c + uStack_7c * 6;
          pfVar10 = pfVar10 + uStack_7c * 6;
        } while (iVar13 < 0xc);
        uStack_7c = uVar11;
      } while (1 < (int)uVar11);
      return;
    }
  }
  return;
}

