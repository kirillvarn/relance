
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f0900(int param_1,int *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float fVar7;
  undefined4 uVar8;
  CSimple *this;
  undefined1 uVar9;
  float unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  float *pfVar13;
  float10 fVar14;
  undefined1 *puVar15;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fVar16;
  undefined1 *puVar17;
  byte bStack_111;
  float fStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  char cStack_e9;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d4;
  float fStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int aiStack_ac [2];
  float fStack_a4;
  undefined1 auStack_9c [4];
  float afStack_98 [2];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  Vector aVStack_78 [16];
  float afStack_68 [8];
  Vector aVStack_48 [20];
  int iStack_34;
  int *piStack_24;
  undefined4 uStack_20;
  char cStack_1c;
  
  if ((*param_3 & 0x7f0000) != 0) {
    iVar4 = (**(code **)(*param_2 + 0x150))();
    if (iVar4 == 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x4c) & 0x503) != 0x503) {
      return;
    }
    iStack_e8 = *(int *)(iVar4 + 0x104);
    uStack_134 = 7.258374e-39;
    iVar4 = Reputation::Vibe::GetAffiliation(&iStack_e8,&uStack_d4,false);
    if (iVar4 != 0) {
      return;
    }
  }
  uVar1 = *param_3;
  fStack_104 = (float)(CONCAT13((byte)(uVar1 >> 0x1c),fStack_104._0_3_) & 0x1ffffff);
  uStack_e4 = (float)(CONCAT13((char)(uVar1 >> 6),CONCAT12((char)(uVar1 >> 5),(undefined2)uStack_e4)
                              ) & 0x101ffff);
  uStack_10c = CONCAT13(*(undefined1 *)((int)param_3 + 0x2e),(undefined3)uStack_10c);
  (**(code **)(*param_2 + 0x20))();
  cStack_e9 = FUN_004cc880();
  if (((char)param_3[0xb] != '\0') || (bVar2 = false, (char)param_3[0xc] != '\0')) {
    bVar2 = true;
  }
  bStack_111 = (byte)(*param_3 >> 9) & 1;
  fStack_d0 = 0.0;
  iVar4 = FUN_0054baf0();
  if (iVar4 != 0) {
    iVar4 = *param_2;
    FUN_0054baf0();
    (**(code **)(iVar4 + 0x68))();
  }
  if (param_4 == '\0') {
    if (((!bVar2) && (uStack_10c._3_1_ == '\0')) &&
       (fStack_d0 < DAT_005d8ed8 == (fStack_d0 == DAT_005d8ed8))) {
      return;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return;
    }
    if (uStack_e4._2_1_ != '\0') {
      return;
    }
    if (uStack_e4._3_1_ != '\0') {
      return;
    }
    if ((char)param_3[0xc] != '\0') {
      return;
    }
    if (*(char *)((int)param_3 + 0x31) != '\0') {
      return;
    }
  }
  else {
    (**(code **)(*param_2 + 0x20))();
    cVar3 = FUN_004d4220();
    if (cVar3 != '\0') {
      bStack_111 = 1;
    }
    *(undefined4 *)(param_1 + 0x934) = 0;
  }
  iStack_e8 = ftol();
  uVar9 = (undefined1)iStack_e8;
  uStack_fc = (float)CONCAT13(uVar9,0x7a3e0c);
  FUN_00421dd0();
  uStack_134 = 7.259071e-39;
  FUN_004220c0();
  FUN_004101e0();
  FUN_0054baf0();
  if (bStack_111 == 0) {
    puVar5 = (undefined4 *)FUN_004eeea0();
  }
  else {
    puVar5 = &DAT_00679b80;
  }
  uStack_100 = (float)*puVar5;
  if (cStack_e9 != '\0') {
    uStack_100 = (float)DAT_00679ba4;
  }
  uStack_100 = (float)CONCAT13(uVar9,(undefined3)uStack_100);
  piVar6 = (int *)FUN_0040f130();
  puVar17 = auStack_90;
  (**(code **)(*param_2 + 0x14))();
  fVar7 = (float)(**(code **)(*piVar6 + 0x10))();
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  uStack_138 = &uStack_100;
  uStack_13c = DAT_00674b6c;
  uStack_134 = fVar7;
  (**(code **)(*DAT_00674b6c + 0x3c))();
  uStack_e4 = fStack_110;
  uStack_e0 = uStack_10c;
  uStack_dc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0x43340000;
  fVar7 = (float)RotateMatrix(aVStack_48);
  uVar8 = LookMatrix(aVStack_78);
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  puVar15 = auStack_9c;
  piVar10 = DAT_00674b6c;
  (**(code **)(*DAT_00674b6c + 0x20))(DAT_00674b6c,puVar15,uVar8);
  cVar3 = (char)((uint)piVar10 >> 0x10);
  piVar10 = aiStack_ac;
  piVar12 = &iStack_e8;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar12 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar12 = piVar12 + 1;
  }
  if (ABS(unaff_ESI) <= ABS(unaff_EBP) * _DAT_0067dc98) {
    fVar14 = (float10)fptan((float10)_DAT_0067dc94 * (float10)_DAT_005c77f4);
    fVar14 = -(float10)DAT_005d8f10 * fVar14 * (float10)_DAT_005d9660;
    if (unaff_EBP <= _DAT_005c7474) {
      fVar14 = -fVar14;
    }
    fStack_104 = (float)fVar14;
    fVar14 = (float10)fStack_104 / ((float10)unaff_EBP / (float10)unaff_ESI);
  }
  else {
    fVar14 = (float10)fptan((float10)_DAT_0067dc90 * (float10)_DAT_005c77f4);
    fVar14 = -(float10)DAT_005d8f10 * fVar14 * (float10)_DAT_005d9664;
    if (unaff_ESI <= _DAT_005c7474) {
      fVar14 = -fVar14;
    }
    fStack_104 = (float)(((float10)unaff_EBP / (float10)unaff_ESI) * fVar14);
  }
  fStack_c4 = (float)fVar14;
  fStack_c0 = fStack_104;
  fStack_bc = DAT_005d8f10;
  fVar16 = 0.0;
  if (uStack_13c._3_1_ == '\0') {
    fStack_108 = fStack_a4;
    fStack_104 = afStack_98[0];
    fVar14 = (float10)FUN_0053eb10(fStack_a4,afStack_98[0]);
    fVar16 = (float)fVar14;
  }
  if (cStack_1c == '\0') {
    if ((char)((uint)piVar6 >> 0x18) != '\0') {
      if ((*(int *)(param_1 + 0x7bc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
        puVar5 = (undefined4 *)((fVar16 + _DAT_005c8a5c) - (float)_DAT_005d9658);
        uStack_138 = puVar5;
        FUN_00559900(*(int *)(param_1 + 2000),&fStack_c4,&stack0xfffffedc,0x3d4ccccd,0,puVar5);
        FUN_00559900(*(undefined4 *)(param_1 + 0x7bc),&fStack_c4,&stack0xfffffed8,0x3d4ccccd,0,
                     puVar5);
      }
LAB_004f0df0:
      if (uStack_134._3_1_ != '\0') {
LAB_004f0df8:
        if ((*(int *)(param_1 + 0x7c8) != 0) && (*(int *)(param_1 + 0x7d8) != 0)) {
          puVar5 = (undefined4 *)((fVar16 + _DAT_005c8a5c) - (float)_DAT_005d9658);
          uStack_138 = puVar5;
          FUN_00559900(*(int *)(param_1 + 0x7d8),&fStack_c4,&stack0xfffffedc,0x3d4ccccd,0,puVar5);
          FUN_00559900(*(undefined4 *)(param_1 + 0x7c8),&fStack_c4,&stack0xfffffed8,0x3d4ccccd,0,
                       puVar5);
        }
      }
      goto LAB_004f0e63;
    }
    if (uStack_13c._3_1_ != '\0') goto LAB_004f0df0;
    if (uStack_134._3_1_ != '\0') goto LAB_004f0df8;
    if ((*(int *)(param_1 + 0x7c0) != 0) && (*(int *)(param_1 + 0x7cc) != 0)) {
      puVar5 = (undefined4 *)((fVar16 + _DAT_005c8a5c) - (float)_DAT_005d9658);
      uStack_138 = puVar5;
      FUN_00559900(*(int *)(param_1 + 0x7cc),&fStack_c4,&stack0xfffffedc,0x3d4ccccd,0,puVar5);
      FUN_00559900(*(undefined4 *)(param_1 + 0x7c0),&fStack_c4,&stack0xfffffed8,0x3d4ccccd,0,puVar5)
      ;
    }
  }
  else {
LAB_004f0e63:
    if (uStack_13c._3_1_ != '\0') {
      if ((*(int *)(param_1 + 0x7b8) != 0) && (iVar4 = *(int *)(param_1 + 0x7d4), iVar4 != 0)) {
        if (cStack_1c == '\0') {
          FUN_00559900(iVar4,&fStack_c4,&stack0xfffffedc,0x3d4ccccd,0,0);
          uVar8 = 0x3d4ccccd;
        }
        else {
          FUN_00559900(iVar4,&fStack_c4,&stack0xfffffedc,0x3dcccccd,0,0);
          uVar8 = 0x3dcccccd;
        }
        FUN_00559900(*(undefined4 *)(param_1 + 0x7b8),&fStack_c4,&stack0xfffffed8,uVar8,0,0);
        cVar3 = (**(code **)(DAT_0067dbf8 + 0x34))
                          (&DAT_0067dbf8,&stack0xfffffee0,&stack0xfffffee4,&stack0xfffffee8,
                           &fStack_c4);
        if ((cVar3 != '\0') &&
           (SQRT((unaff_ESI - (float)DAT_00616840) * (unaff_ESI - (float)DAT_00616840) +
                 (unaff_EBP - (float)DAT_00616844) * (unaff_EBP - (float)DAT_00616844) +
                 (unaff_EBX - unaff_EBX) * (unaff_EBX - unaff_EBX)) <=
            (((_DAT_005c7500 / DAT_005d8f10) * _DAT_005d9650) / _DAT_0067dc9c) * _DAT_0067dc9c *
            _DAT_0067dc70)) {
          DAT_00674b78 = uStack_20;
          DAT_00674b74 = 0;
        }
      }
      if (cStack_1c != '\0') {
        return;
      }
      goto LAB_004f10a9;
    }
    if (cStack_1c != '\0') {
      if ((((*(int *)(param_1 + 0x7a4) != 0) && (*(int *)(param_1 + 0x7a8) != 0)) &&
          (*(int *)(param_1 + 0x7c8) != 0)) && (*(int *)(param_1 + 0x7ac) != 0)) {
        if (uStack_13c._2_1_ != '\0') {
          uStack_138._0_3_ = SUB43(puVar17,0);
          uStack_138 = (undefined4 *)CONCAT13(fStack_110._0_1_,(undefined3)uStack_138);
          FUN_00559900(*(int *)(param_1 + 0x7ac),&fStack_c4,&uStack_138,0x3dcccccd,0,
                       (fVar16 + _DAT_005c8a5c) - (float)_DAT_005d9658);
        }
        puVar5 = (undefined4 *)((fVar16 + _DAT_005c8a5c) - (float)_DAT_005d9658);
        uStack_138 = puVar5;
        if (uStack_134._3_1_ == '\0') {
          FUN_00559900(*(undefined4 *)(param_1 + 0x7a4),&fStack_c4,&stack0xfffffedc,0x3dcccccd,0,
                       puVar5);
          uVar8 = *(undefined4 *)(param_1 + 0x7a8);
        }
        else {
          FUN_00559900(*(undefined4 *)(param_1 + 0x7c8),&fStack_c4,&stack0xfffffedc,0x3dcccccd,0,
                       puVar5);
          uVar8 = *(undefined4 *)(param_1 + 0x7c8);
        }
        FUN_00559900(uVar8,&fStack_c4,&stack0xfffffed8,0x3dcccccd,0,puVar5);
      }
      iVar4 = (**(code **)(*piStack_24 + 0x150))();
      if ((((iVar4 == 0) || (((byte)*(uint *)(iVar4 + 0x4c) & 3) != 3)) ||
          (((*(uint *)(iVar4 + 0x4c) & 0x303) == 0x303 &&
           ((*(int *)(iVar4 + 0x88) != 0 && (*(char *)(*(int *)(iVar4 + 0x88) + 0x94) == '\0'))))))
         || ((*(byte *)(iVar4 + 0xe0) & 3) != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uStack_13c._0_3_ = (uint3)(ushort)uStack_13c;
      this = (CSimple *)(**(code **)(*piStack_24 + 0x150))();
      if ((this == (CSimple *)0x0) || (((byte)*(undefined4 *)(this + 0x4c) & 3) != 3)) {
        this = (CSimple *)0x0;
      }
      uStack_138 = (undefined4 *)0x0;
      if (((this != (CSimple *)0x0) &&
          (CSimple::get_relative_health(this), (*(uint *)(this + 0x4c) & 0x103) == 0x103)) &&
         (FUN_004d4b50(this,&fStack_110,&uStack_fc,(int)&uStack_13c + 2), _DAT_005c7474 < fStack_110
         )) {
        uStack_138 = (undefined4 *)(uStack_fc / fStack_110);
      }
      if (DAT_00674b6c == (int *)0x0) {
        DAT_00674b6c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00674b6c + 0x1c))(DAT_00674b6c,auStack_88,&iStack_e8,&DAT_0067dbfc);
      pfVar11 = afStack_98;
      pfVar13 = afStack_68;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar13 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        pfVar13 = pfVar13 + 1;
      }
      FUN_00422690(0,afStack_68);
      FUN_00421670(8);
      FUN_00421a70(0,0,0);
      if (bVar2) {
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x608),0,*(undefined4 *)(param_1 + 0x60c));
        FUN_00421cc0(*(float *)(param_1 + 0x608) + *(float *)(param_1 + 0x610),0,
                     *(undefined4 *)(param_1 + 0x60c));
        FUN_00421cc0(*(float *)(param_1 + 0x608) + *(float *)(param_1 + 0x610),0,
                     *(undefined4 *)(param_1 + 0x614));
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x608),0,*(undefined4 *)(param_1 + 0x614));
      }
      if (cVar3 != '\0') {
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x618),0,*(undefined4 *)(param_1 + 0x61c));
        FUN_00421cc0(*(float *)(param_1 + 0x618) + *(float *)(param_1 + 0x620),0,
                     *(undefined4 *)(param_1 + 0x61c));
        FUN_00421cc0(*(float *)(param_1 + 0x618) + *(float *)(param_1 + 0x620),0,
                     *(undefined4 *)(param_1 + 0x624));
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x618),0,*(undefined4 *)(param_1 + 0x624));
      }
      if ((bVar2) && (_DAT_005c7474 < fVar7)) {
        FUN_00421a70(DAT_00679ba8,DAT_00679ba8 >> 8 & 0xff,DAT_00679ba8 >> 0x10 & 0xff);
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x608),0,*(undefined4 *)(param_1 + 0x60c));
        FUN_00421cc0(fVar7 * *(float *)(param_1 + 0x610) + *(float *)(param_1 + 0x608),0,
                     *(undefined4 *)(param_1 + 0x60c));
        FUN_00421cc0(fVar7 * *(float *)(param_1 + 0x610) + *(float *)(param_1 + 0x608),0,
                     *(undefined4 *)(param_1 + 0x614));
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x608),0,*(undefined4 *)(param_1 + 0x614));
      }
      if ((cVar3 != '\0') && (_DAT_005c7474 < (float)puVar15)) {
        FUN_00421a70(DAT_00679b98,DAT_00679b98 >> 8 & 0xff,DAT_00679b98 >> 0x10 & 0xff);
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x618),0,*(undefined4 *)(param_1 + 0x61c));
        FUN_00421cc0((float)puVar15 * *(float *)(param_1 + 0x620) + *(float *)(param_1 + 0x618),0,
                     *(undefined4 *)(param_1 + 0x61c));
        FUN_00421cc0((float)puVar15 * *(float *)(param_1 + 0x620) + *(float *)(param_1 + 0x618),0,
                     *(undefined4 *)(param_1 + 0x624));
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x618),0,*(undefined4 *)(param_1 + 0x624));
      }
      FUN_00421690();
      if (bVar2) {
        FUN_00421670(7);
        FUN_00421a70((int)((DAT_00679ba8 & 0xff) * 3) >> 2,
                     (int)((DAT_00679ba8 >> 8 & 0xff) * 3) >> 2,
                     (int)((DAT_00679ba8 >> 0x10 & 0xff) * 3) >> 2);
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x608),0,*(undefined4 *)(param_1 + 0x60c));
        FUN_00421cc0(*(float *)(param_1 + 0x608) + *(float *)(param_1 + 0x610),0,
                     *(undefined4 *)(param_1 + 0x60c));
        FUN_00421cc0(*(float *)(param_1 + 0x608) + *(float *)(param_1 + 0x610),0,
                     *(undefined4 *)(param_1 + 0x614));
        FUN_00421cc0(*(undefined4 *)(param_1 + 0x608),0,*(undefined4 *)(param_1 + 0x614));
        FUN_00421690();
      }
      if (cVar3 == '\0') {
        return;
      }
      FUN_00421670(7);
      FUN_00421a70((int)((DAT_00679b98 & 0xff) * 3) >> 2,(int)((DAT_00679b98 >> 8 & 0xff) * 3) >> 2,
                   (int)((DAT_00679b98 >> 0x10 & 0xff) * 3) >> 2);
      FUN_00421cc0(*(undefined4 *)(param_1 + 0x618),0,*(undefined4 *)(param_1 + 0x61c));
      FUN_00421cc0(*(float *)(param_1 + 0x618) + *(float *)(param_1 + 0x620),0,
                   *(undefined4 *)(param_1 + 0x61c));
      FUN_00421cc0(*(float *)(param_1 + 0x618) + *(float *)(param_1 + 0x620),0,
                   *(undefined4 *)(param_1 + 0x624));
      FUN_00421cc0(*(undefined4 *)(param_1 + 0x618),0,*(undefined4 *)(param_1 + 0x624));
      FUN_00421690();
      return;
    }
  }
  if ((uStack_13c._2_1_ != '\0') && (*(int *)(param_1 + 0x7c4) != 0)) {
    uStack_138._0_3_ = SUB43(puVar17,0);
    uStack_138 = (undefined4 *)CONCAT13(fStack_110._0_1_,(undefined3)uStack_138);
    FUN_00559900(*(int *)(param_1 + 0x7c4),&fStack_c4,&uStack_138,0x3d4ccccd,0,
                 (fVar16 + _DAT_005c8a5c) - (float)_DAT_005d9658);
  }
LAB_004f10a9:
  fStack_108 = fStack_c4;
  fStack_104 = fStack_c0;
  uStack_100 = fStack_bc;
  cVar3 = (**(code **)(DAT_0067dbf8 + 0x34))
                    (&DAT_0067dbf8,&stack0xfffffee0,&stack0xfffffee4,&stack0xfffffee8,&fStack_108);
  if ((cVar3 != '\0') &&
     (SQRT((uStack_134 - (float)DAT_00616840) * (uStack_134 - (float)DAT_00616840) +
           (fVar16 - (float)DAT_00616844) * (fVar16 - (float)DAT_00616844) +
           ((float)piVar6 - (float)piVar6) * ((float)piVar6 - (float)piVar6)) <=
      (((_DAT_005c7500 / DAT_005d8f10) * _DAT_005d011c) / _DAT_0067dc9c) * _DAT_0067dc9c *
      _DAT_0067dc70)) {
    DAT_00674b74 = *(undefined4 *)(iStack_34 + 0x1c);
    DAT_00674b78 = 0;
    return;
  }
  return;
}

