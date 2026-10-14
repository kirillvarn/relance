
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004231f0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iStack_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 auStack_140 [3];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [12];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float local_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 auStack_90 [3];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  undefined1 auStack_14 [20];
  
  pfVar1 = (float *)(param_1 + 0x20);
  pfVar8 = (float *)(param_1 + 8);
  FUN_00423b60(&local_160,pfVar8,pfVar1);
  FUN_00423b60(&local_17c,param_1 + 0x14,pfVar1);
  local_170 = SQRT(local_160 * local_160 + local_15c * local_15c + local_158 * local_158);
  if (((float)_DAT_005c75f8 <= local_170) &&
     ((float)_DAT_005c75f8 <=
      SQRT(local_17c * local_17c + local_178 * local_178 + local_174 * local_174))) {
    local_10c = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x44);
    fVar10 = (float10)FUN_00410190();
    fVar10 = (float10)local_170 / fVar10;
    local_17c = (float)((float10)local_17c * fVar10);
    local_178 = (float)((float10)local_178 * fVar10);
    local_174 = (float)((float10)local_174 * fVar10);
    local_170 = local_170 * local_170;
    fVar10 = (float10)_CIacos();
    fVar2 = (float)fVar10;
    fVar10 = (float10)_CIacos();
    floor((double)((float10)fVar2 / fVar10));
    iVar6 = ftol();
    local_170 = fVar2 / (float)iVar6;
    FUN_00422b80(local_174 * local_15c - local_158 * local_178,
                 local_158 * local_17c - local_174 * local_160,
                 local_178 * local_160 - local_15c * local_17c);
    if (*(int *)(param_1 + 4) == 0) {
      FUN_00421ed0();
      FUN_00421ed0(0xbe2);
      FUN_00421ad0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                   *(undefined4 *)(param_1 + 0x40));
      FUN_00421670(3);
      FUN_00421cc0(*pfVar8,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      iStack_180 = 1;
      if (1 < iVar6) {
        do {
          fVar10 = (float10)iStack_180 * (float10)local_170 * (float10)_DAT_005c75e0;
          fVar11 = (float10)fcos(fVar10);
          fStack_f0 = (float)fVar11;
          fsin(fVar10);
          FUN_00411d60(&fStack_108,&uStack_118);
          fStack_ec = fStack_108;
          fStack_e8 = fStack_104;
          fStack_e4 = fStack_100;
          if (DAT_006679d8 == (int *)0x0) {
            DAT_006679d8 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_006679d8 + 0x54))(DAT_006679d8,auStack_38);
          if (DAT_006679d8 == (int *)0x0) {
            DAT_006679d8 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_006679d8 + 0x2c))(DAT_006679d8,&fStack_108,auStack_44,&fStack_16c);
          fStack_16c = fStack_fc + *pfVar1;
          fStack_168 = fStack_f8 + *(float *)(param_1 + 0x24);
          fStack_164 = fStack_f4 + *(float *)(param_1 + 0x28);
          pfVar8 = (float *)RandomVector((float)auStack_68);
          fStack_154 = fStack_16c + *pfVar8;
          fStack_150 = fStack_168 + pfVar8[1];
          fStack_14c = fStack_164 + pfVar8[2];
          FUN_00421cc0(fStack_154,fStack_150,fStack_14c);
          iStack_180 = iStack_180 + 1;
        } while (iStack_180 < iVar6);
      }
      fStack_16c = local_17c + *pfVar1;
      fStack_168 = local_178 + *(float *)(param_1 + 0x24);
      fStack_164 = local_174 + *(float *)(param_1 + 0x28);
      FUN_00421cc0(fStack_16c,fStack_168,fStack_164);
      FUN_00421690();
      return;
    }
    fStack_148 = *pfVar8;
    fStack_144 = *(float *)(param_1 + 0xc);
    auStack_140[0] = *(undefined4 *)(param_1 + 0x10);
    (**(code **)(**(int **)TextureLib_exref + 0x58))
              (*(int **)TextureLib_exref,*(int *)(param_1 + 4),0,auStack_14);
    FUN_00421dd0(0xbe2);
    FUN_004220c0(2,2);
    iVar15 = 1;
    if (0 < iVar6) {
      bVar9 = iVar6 == 1;
      do {
        if (bVar9) {
          FUN_00423b30(auStack_a8,pfVar1,&stack0xfffffe74);
          auStack_140[0] = auStack_a8[0];
        }
        else {
          fVar10 = (float10)iVar15 * (float10)fVar2 * (float10)_DAT_005c75e0;
          fVar11 = (float10)fsin(fVar10);
          fVar12 = (float10)FUN_00410190();
          fVar10 = (float10)fcos((float10)(float)fVar10);
          fStack_100 = (float)fVar10;
          FUN_00411d60(&fStack_9c,auStack_128,(float)((float10)(float)fVar11 / fVar12));
          fStack_f8 = fStack_98;
          fStack_fc = fStack_9c;
          fStack_f4 = fStack_94;
          if (DAT_006679d8 == (int *)0x0) {
            DAT_006679d8 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_006679d8 + 0x54))(DAT_006679d8,auStack_48,&fStack_100);
          FUN_00423b90(auStack_84,auStack_48,&local_170);
          FUN_00423b30(auStack_6c,pfVar1,auStack_84);
          puVar13 = auStack_78;
          uVar14 = uStack_11c;
          uVar7 = RandomVector((float)puVar13);
          FUN_00423b30(auStack_90,auStack_6c,uVar7,puVar13,uVar14);
          auStack_140[0] = auStack_90[0];
        }
        FUN_00423b60(&fStack_f0,param_1 + 0x2c,&local_158);
        FUN_00423b60(&fStack_164,auStack_140,&local_158);
        FUN_00422b80(fStack_e8 * local_160 - fStack_ec * local_15c,
                     local_15c * fStack_f0 - fStack_e8 * fStack_164,
                     fStack_ec * fStack_164 - local_160 * fStack_f0);
        FUN_00423b60(auStack_54,auStack_140,&local_158);
        FUN_00411d60(auStack_60,auStack_54,0x3f000000);
        FUN_00423b30(&fStack_14c,&local_158,auStack_60);
        FUN_00423b60(&local_17c,&fStack_14c,&local_158);
        fVar3 = local_174 * local_174;
        fVar5 = local_178 * local_178;
        fVar4 = local_17c * local_17c;
        fVar10 = (float10)FUN_00410190();
        fVar10 = (float10)SQRT(fVar4 + fVar5 + fVar3) / fVar10;
        fStack_134 = (float)((float10)fStack_134 * fVar10);
        fStack_130 = (float)((float10)fStack_130 * fVar10);
        fStack_12c = (float)((float10)fStack_12c * fVar10);
        FUN_00423b60(&fStack_c0,&local_158,&fStack_14c);
        FUN_00422b80(fStack_c0 * _DAT_005c9800,fStack_bc * _DAT_005c9800,fStack_b8 * _DAT_005c9800);
        FUN_00422b80(fStack_134 * _DAT_005c9800,fStack_130 * _DAT_005c9800,
                     fStack_12c * _DAT_005c9800);
        FUN_004220a0(uStack_24);
        FUN_00421670(8);
        FUN_00421ca0(0,0);
        FUN_00423b30(&uStack_b4,&fStack_14c,&fStack_d8);
        FUN_00421cc0(uStack_b4,uStack_b0,uStack_ac);
        FUN_00421ca0(0x3f800000,0);
        FUN_00423b30(&uStack_cc,&fStack_14c,&fStack_e4);
        FUN_00421cc0(uStack_cc,uStack_c8,uStack_c4);
        FUN_00421ca0(0x3f800000,0x3f800000);
        FUN_00422b80(fStack_14c - fStack_d8,fStack_148 - fStack_d4,fStack_144 - fStack_d0);
        FUN_00421cc0(local_10c,fStack_108,fStack_104);
        FUN_00421ca0(0,0x3f800000);
        FUN_00422b80(fStack_14c - fStack_e4,fStack_148 - fStack_e0,fStack_144 - fStack_dc);
        FUN_00421cc0(uStack_118,uStack_114,uStack_110);
        FUN_00421690();
        iVar15 = iVar15 + 1;
        bVar9 = iVar15 == iVar6;
      } while (iVar15 <= iVar6);
    }
  }
  return;
}

