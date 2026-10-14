
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00510160(int param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float local_13c;
  float local_118;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int iStack_f4;
  float fStack_f0;
  int iStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_3c;
  float fStack_30;
  float fStack_20;
  undefined1 local_1c [28];
  
  FUN_004220c0(5,2);
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar11 = 0;
    FUN_004205c0(param_1 + 0x14);
    FUN_00512660(&local_118,local_1c);
    if ((local_118 == DAT_006750a4) || (iVar11 = (int)local_118 + 0x28, iVar11 == 0)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                 "cmn\\ShapeDB.h",0xf2,param_1 + 0x14);
    }
    *(int *)(param_1 + 0x34) = iVar11;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    local_13c = *(float *)(param_3 + 0x88);
    if (local_13c <= *(float *)(param_1 + 0x3c)) {
      if (local_13c < *(float *)(param_1 + 0x38)) {
        local_13c = *(float *)(param_1 + 0x38);
      }
    }
    else {
      local_13c = *(float *)(param_1 + 0x3c);
    }
    fVar1 = *(float *)(param_3 + 0x7c);
    fVar2 = *(float *)(param_3 + 0x80);
    iVar11 = *(int *)(param_3 + 0x14);
    fStack_f8 = *(float *)(iVar11 + 0x2f0) * *(float *)(iVar11 + 0x2ac) * local_13c;
    local_118 = *(float *)(iVar11 + 0x10);
    fStack_f0 = (*(float *)(iVar11 + 0x2f0) + (float)_DAT_005c89b8) *
                local_13c * *(float *)(iVar11 + 0x2ac) * (float)_DAT_005c75e8;
    if (*(int *)(param_1 + 4) == 0) {
      iStack_114 = 0;
    }
    else {
      iStack_114 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
    }
    uVar10 = FUN_00425640(0);
    FUN_004220a0(uVar10);
    FUN_00421670(8);
    iStack_f4 = 0;
    if (0 < iStack_114) {
      iStack_ec = 0;
      do {
        fVar5 = local_13c * *(float *)(*(int *)(param_1 + 4) + 8 + iStack_ec);
        pfVar12 = (float *)(*(int *)(param_1 + 4) + iStack_ec);
        fVar3 = *pfVar12;
        fVar4 = pfVar12[1];
        fVar8 = local_13c * pfVar12[3] * (float)_DAT_005c75e8;
        fStack_48 = -fVar8;
        fVar6 = fStack_f8 * (_DAT_005c75dc / fVar5);
        fVar7 = (_DAT_005c75dc / fVar5) * fStack_f0;
        fStack_dc = fVar3 * _DAT_005c7474;
        fStack_64 = fVar4 * fStack_48 + fVar1 + fStack_dc;
        fStack_d4 = fVar4 * _DAT_005c7474;
        fStack_60 = (fStack_48 * fVar3 - fStack_d4) + fVar2;
        fStack_e0 = fVar3 * fStack_f8;
        fStack_d0 = fStack_48 * fVar4 + fVar1 + fStack_e0;
        fStack_d8 = fVar4 * fStack_f8;
        fStack_cc = (fStack_48 * fVar3 - fStack_d8) + fVar2;
        fStack_e4 = fVar3 * fStack_f0;
        fStack_b8 = fStack_48 * fVar4 + fVar1 + fStack_e4;
        fStack_e8 = fVar4 * fStack_f0;
        fStack_b4 = (fStack_48 * fVar3 - fStack_e8) + fVar2;
        fStack_70 = fStack_48 * fVar4 + fVar3 * fVar5 + fVar1;
        fStack_6c = (fStack_48 * fVar3 - fVar4 * fVar5) + fVar2;
        fVar9 = fVar4 * fVar8;
        fStack_94 = fVar9 + fVar1 + fStack_dc;
        fVar8 = fVar3 * fVar8;
        fStack_90 = (fVar8 - fStack_d4) + fVar2;
        fStack_c4 = fVar9 + fVar1 + fStack_e0;
        fStack_c0 = (fVar8 - fStack_d8) + fVar2;
        fStack_a0 = fVar9 + fVar1 + fStack_e4;
        fStack_9c = (fVar8 - fStack_e8) + fVar2;
        fStack_88 = fVar9 + fVar3 * fVar5 + fVar1;
        fStack_84 = (fVar8 - fVar4 * fVar5) + fVar2;
        fStack_3c = fStack_48;
        fStack_30 = fStack_48;
        fVar13 = (float10)FUN_00510990(iStack_f4,iStack_114,local_118,param_3);
        iVar11 = *(int *)(param_1 + 0x34);
        fVar3 = (float)((fVar13 * (float10)_DAT_0061346c +
                        ((float10)_DAT_005c89b8 - (float10)_DAT_0061346c) *
                        (float10)*(float *)(param_3 + 100)) * (float10)pfVar12[10] *
                       (float10)param_4);
        fVar4 = (float)_DAT_005c89b8 - fVar6;
        fVar5 = *(float *)(iVar11 + 8) * fVar4 + fVar6 * *(float *)(iVar11 + 0x10);
        fVar8 = (float)_DAT_005c89b8 - fVar7;
        fVar9 = *(float *)(iVar11 + 8) * fVar8 + fVar7 * *(float *)(iVar11 + 0x10);
        fStack_20 = fVar6 * pfVar12[9];
        fStack_78 = fVar4 * pfVar12[5];
        fStack_74 = fVar4 * pfVar12[6];
        fStack_110 = fVar4 * pfVar12[4] + fVar6 * pfVar12[7];
        fStack_10c = fStack_78 + fVar6 * pfVar12[8];
        fStack_108 = fStack_74 + fStack_20;
        fStack_ac = fVar7 * pfVar12[7];
        fStack_a8 = fVar7 * pfVar12[8];
        fStack_a4 = fVar7 * pfVar12[9];
        fStack_54 = fVar8 * pfVar12[5];
        fStack_50 = fVar8 * pfVar12[6];
        fStack_104 = fVar8 * pfVar12[4] + fStack_ac;
        fStack_100 = fStack_54 + fStack_a8;
        fStack_fc = fStack_50 + fStack_a4;
        FUN_00421ca0(*(undefined4 *)(iVar11 + 8),*(undefined4 *)(iVar11 + 0xc));
        FUN_00421bd0(pfVar12[4],pfVar12[5],pfVar12[6],0);
        FUN_00421cc0(fStack_64,fStack_60,0);
        FUN_00421ca0(fVar5,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
        fVar4 = fVar3 * local_118;
        FUN_00421bd0(fStack_110,fStack_10c,fStack_108,fVar4);
        FUN_00421cc0(fStack_d0,fStack_cc,0);
        FUN_00421ca0(fVar5,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14));
        FUN_00421bd0(fStack_110,fStack_10c,fStack_108,fVar4);
        FUN_00421cc0(fStack_c4,fStack_c0,0);
        FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8),
                     *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14));
        FUN_00421bd0(pfVar12[4],pfVar12[5],pfVar12[6],0);
        FUN_00421cc0(fStack_94,fStack_90,0);
        FUN_00421ca0(fVar5,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
        FUN_00421bd0(fStack_110,fStack_10c,fStack_108,fVar4);
        FUN_00421cc0(fStack_d0,fStack_cc,0);
        FUN_00421ca0(fVar9,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
        FUN_00421bd0(fStack_104,fStack_100,fStack_fc,fVar3);
        FUN_00421cc0(fStack_b8,fStack_b4,0);
        FUN_00421ca0(fVar9,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14));
        FUN_00421bd0(fStack_104,fStack_100,fStack_fc,fVar3);
        FUN_00421cc0(fStack_a0,fStack_9c,0);
        FUN_00421ca0(fVar5,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14));
        FUN_00421bd0(fStack_110,fStack_10c,fStack_108,fVar4);
        FUN_00421cc0(fStack_c4,fStack_c0,0);
        FUN_00421ca0(fVar9,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
        FUN_00421bd0(fStack_104,fStack_100,fStack_fc,fVar3);
        FUN_00421cc0(fStack_b8,fStack_b4,0);
        FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10),
                     *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
        FUN_00421bd0(pfVar12[7],pfVar12[8],pfVar12[9],fVar3);
        FUN_00421cc0(fStack_70,fStack_6c,0);
        FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10),
                     *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14));
        FUN_00421bd0(pfVar12[7],pfVar12[8],pfVar12[9],fVar3);
        FUN_00421cc0(fStack_88,fStack_84,0);
        FUN_00421ca0(fVar9,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x14));
        FUN_00421bd0(fStack_104,fStack_100,fStack_fc,fVar3);
        FUN_00421cc0(fStack_a0,fStack_9c,0);
        iStack_f4 = iStack_f4 + 1;
        iStack_ec = iStack_ec + 0x2c;
      } while (iStack_f4 < iStack_114);
    }
    FUN_00421690();
  }
  return;
}

