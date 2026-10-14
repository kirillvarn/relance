
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423be0(char *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  float unaff_EBX;
  float fVar6;
  float fVar7;
  undefined4 unaff_EBP;
  float fVar8;
  char *pcVar9;
  float unaff_ESI;
  float10 fVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  float fVar13;
  int local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float *pfStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char *local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined1 local_2c [8];
  undefined4 uStack_24;
  undefined1 local_14 [20];
  
  if (*param_1 == '\0') {
    pfVar1 = (float *)(param_1 + 8);
    pcVar9 = param_1 + 0x14;
    local_d0 = pcVar9;
    FUN_00423b60(&local_f4,pcVar9,pfVar1);
    fVar2 = SQRT(local_f4 * local_f4 + local_ec * local_ec + local_f0 * local_f0);
    floor((double)(fVar2 / *(float *)(param_1 + 0x44)));
    fVar3 = (float)ftol();
    local_134 = fVar2 / (float)(int)fVar3;
    local_124 = local_f4;
    local_120 = local_f0;
    local_11c = local_ec;
    fVar10 = (float10)FUN_00410190();
    fVar10 = (float10)local_134 / fVar10;
    local_124 = (float)((float10)local_f4 * fVar10);
    local_120 = (float)((float10)local_120 * fVar10);
    local_11c = (float)((float10)local_11c * fVar10);
    FUN_00421ad0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    local_134 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x44);
    if (*(int *)(param_1 + 4) == 0) {
      FUN_00421ed0();
      FUN_00421ed0(0xbe2);
      FUN_00421670(3);
      FUN_00421cc0(*pfVar1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      local_138 = 1;
      if (1 < (int)fVar3) {
        do {
          fVar2 = (float)local_138;
          local_c8 = local_120 * fVar2;
          local_c4 = local_11c * fVar2;
          local_130 = local_124 * fVar2 + *pfVar1;
          local_12c = local_c8 + *(float *)(param_1 + 0xc);
          local_128 = local_c4 + *(float *)(param_1 + 0x10);
          pfVar5 = (float *)RandomVector((float)local_2c);
          local_10c = local_130 + *pfVar5;
          local_108 = local_12c + pfVar5[1];
          local_104 = local_128 + pfVar5[2];
          FUN_00421cc0(local_10c,local_108,local_104);
          local_138 = local_138 + 1;
          pcVar9 = local_d0;
        } while (local_138 < (int)fVar3);
      }
      FUN_00421cc0(*(undefined4 *)pcVar9,*(undefined4 *)(pcVar9 + 4),*(undefined4 *)(pcVar9 + 8));
      FUN_00421690();
      return;
    }
    local_100 = *pfVar1;
    local_fc = *(undefined4 *)(param_1 + 0xc);
    local_f8 = *(float *)(param_1 + 0x10);
    (**(code **)(**(int **)TextureLib_exref + 0x58))
              (*(int **)TextureLib_exref,*(int *)(param_1 + 4),0,local_14);
    FUN_00421dd0(0xbe2);
    FUN_004220c0(2,2);
    fVar13 = 1.4013e-45;
    fVar6 = fVar3;
    if (0 < (int)fVar3) {
      do {
        if (fVar13 == fVar6) {
          fStack_e4 = pfStack_e0[2];
          fVar7 = *pfStack_e0;
          fVar8 = pfStack_e0[1];
        }
        else {
          FUN_00411d60(auStack_60,&local_134,(float)(int)fVar13);
          FUN_00423b30(auStack_48,pfVar1,auStack_60);
          puVar11 = auStack_3c;
          uVar12 = unaff_EBP;
          uVar4 = RandomVector((float)puVar11);
          FUN_00423b30(&fStack_a8,auStack_48,uVar4,puVar11,uVar12);
          fStack_e4 = fStack_a0;
          fVar7 = fStack_a8;
          fVar8 = fStack_a4;
        }
        local_ec = fVar7;
        fStack_e8 = fVar8;
        FUN_00423b60(&local_c4,param_1 + 0x2c,&fStack_110);
        FUN_00423b60(&local_d0,&local_ec,&fStack_110);
        FUN_00422b80(fStack_bc * fStack_cc - fStack_c0 * local_c8,
                     local_c8 * local_c4 - fStack_bc * (float)local_d0,
                     fStack_c0 * (float)local_d0 - fStack_cc * local_c4);
        FUN_00423b60(auStack_30,&local_ec,&fStack_110);
        FUN_00411d60(auStack_54,auStack_30,0x3f000000);
        FUN_00423b30(&local_128,&fStack_110,auStack_54);
        FUN_00423b60(&local_11c,&local_128,&fStack_110);
        fStack_b8 = SQRT(local_11c * local_11c + fStack_118 * fStack_118 + fStack_114 * fStack_114)
                    * (float)_DAT_005c75e8;
        fVar10 = (float10)FUN_00410190();
        fVar10 = (float10)fStack_b8 / fVar10;
        local_f8 = (float)((float10)local_f8 * fVar10);
        local_f4 = (float)((float10)local_f4 * fVar10);
        local_f0 = (float)((float10)local_f0 * fVar10);
        FUN_00423b60(&fStack_6c,&fStack_110,&local_128);
        FUN_00422b80(fStack_6c * _DAT_005c9804,fStack_68 * _DAT_005c9804,fStack_64 * _DAT_005c9804);
        FUN_00422b80(local_f8 * _DAT_005c9804,local_f4 * _DAT_005c9804,local_f0 * _DAT_005c9804);
        fVar6 = *(float *)(param_1 + 0x4c);
        FUN_00422b80(fStack_90 * fVar6,fStack_8c * fVar6,fStack_88 * fVar6);
        FUN_004220a0(uStack_24);
        FUN_00421670(8);
        FUN_00421ca0(0,0);
        FUN_00423b30(&uStack_78,&local_128,&fStack_b4);
        FUN_00421cc0(uStack_78,uStack_74,uStack_70);
        FUN_00421ca0(0x3f800000,0);
        FUN_00422b80(unaff_EBX + local_128,fVar2 + local_124,fVar3 + local_120);
        FUN_00421cc0(uStack_9c,uStack_98,uStack_94);
        FUN_00421ca0(0x3f800000,0x3f800000);
        FUN_00422b80(local_128 - fStack_b4,local_124 - fStack_b0,local_120 - fStack_ac);
        FUN_00421cc0(uStack_84,uStack_80,uStack_7c);
        FUN_00421ca0(0,0x3f800000);
        FUN_00422b80(local_128 - unaff_EBX,local_124 - fVar2,local_120 - fVar3);
        FUN_00421cc0(uStack_dc,uStack_d8,uStack_d4);
        FUN_00421690();
        local_108 = fStack_e4;
        fVar13 = (float)((int)fVar13 + 1);
        fVar6 = unaff_ESI;
        fStack_110 = fVar7;
        local_10c = fVar8;
      } while ((int)fVar13 <= (int)unaff_ESI);
      return;
    }
  }
  else {
    FUN_004231f0();
  }
  return;
}

