
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005074e0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float unaff_ESI;
  undefined4 *puVar7;
  float10 fVar8;
  float fVar9;
  float fStack_b8;
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
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [4];
  float fStack_2c;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x28))(local_30);
    pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    fStack_5c = *pfVar1;
    fStack_58 = pfVar1[1];
    fStack_54 = pfVar1[2];
    puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    puVar7 = auStack_28;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00422b80(auStack_28[0],auStack_28[3],uStack_10);
    FUN_00422b80(auStack_28[1],uStack_18,uStack_c);
    FUN_00422b80(auStack_28[2],uStack_14,uStack_8);
    if (fStack_34 <= fStack_2c) {
      fStack_8c = fStack_4c;
      fStack_88 = fStack_48;
      fStack_84 = fStack_44;
      fStack_50 = fStack_2c;
      fStack_b8 = fStack_3c;
      fVar9 = fStack_40;
    }
    else {
      fStack_8c = fStack_40;
      fStack_88 = fStack_3c;
      fStack_84 = fStack_38;
      fStack_50 = fStack_34;
      fStack_b8 = fStack_48;
      fVar9 = fStack_4c;
    }
    FUN_00423b60(&fStack_ac,&fStack_5c);
    fStack_90 = fStack_a4 * fStack_a4 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8;
    fVar3 = (float)(0x5f3759df - ((int)fStack_90 >> 1));
    fVar3 = (_DAT_005ca220 - fVar3 * fVar3 * fStack_90 * _DAT_005c75e0) * fVar3;
    fStack_ac = fStack_ac * fVar3;
    fStack_a8 = fStack_a8 * fVar3;
    fStack_a4 = fStack_a4 * fVar3;
    fStack_a0 = (((float)_DAT_005c89b8 -
                 ABS(fStack_84 * fStack_a4 + fStack_8c * fStack_ac + fStack_88 * fStack_a8)) -
                _DAT_005db098) * _DAT_005db0a0;
    if (fStack_a0 <= (float)_DAT_005c89b8) {
      if (fStack_a0 < (float)_DAT_005c8ba8) {
        fStack_a0 = 0.0;
      }
    }
    else {
      fStack_a0 = 1.0;
    }
    FUN_00422b80(fStack_84 * fStack_a8 - fStack_a4 * fStack_88,
                 fStack_a4 * fStack_8c - fStack_84 * fStack_ac);
    fStack_90 = fStack_7c * fStack_7c + fStack_78 * fStack_78 + fStack_80 * fStack_80;
    fVar6 = (float)(0x5f3759df - ((int)fStack_90 >> 1));
    fVar3 = (_DAT_005ca220 - fVar6 * fVar6 * fStack_90 * _DAT_005c75e0) * fVar6;
    fStack_80 = fStack_80 * fVar3;
    fStack_7c = fStack_7c * fVar3;
    fStack_78 = fStack_78 * fVar3;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x20) + 0x40))();
    fStack_94 = (float)(fVar8 * (float10)_DAT_005db09c);
    fVar8 = (float10)FUN_00410190();
    fVar8 = (float10)fStack_94 / fVar8;
    fStack_84 = (float)((float10)fStack_84 * fVar8);
    fStack_80 = (float)((float10)fStack_80 * fVar8);
    fStack_7c = (float)((float10)fStack_7c * fVar8);
    fVar3 = fStack_54 * _DAT_005db09c;
    fStack_90 = fStack_90 * fVar3;
    fStack_8c = fStack_8c * fVar3;
    fStack_88 = fStack_88 * fVar3;
    FUN_00422b80(fStack_64 * fStack_ac - fStack_68 * fStack_a8,
                 fStack_a8 * fStack_6c - fStack_64 * fVar6,fStack_68 * fVar6 - fStack_ac * fStack_6c
                );
    fVar8 = (float10)FUN_00507e70(fStack_9c * fStack_9c +
                                  fStack_98 * fStack_98 + fStack_a0 * fStack_a0);
    fStack_a0 = (float)((float10)fStack_a0 * fVar8);
    fStack_9c = (float)((float10)fStack_9c * fVar8);
    fStack_98 = (float)((float10)fStack_98 * fVar8);
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x20) + 0x40))(&fStack_a0);
    fStack_98 = (float)(fVar8 * (float10)_DAT_005db09c);
    fVar8 = (float10)FUN_00410190();
    fVar8 = (float10)fStack_98 / fVar8;
    fStack_a4 = (float)((float10)fStack_a4 * fVar8);
    fStack_a0 = (float)((float10)fStack_a0 * fVar8);
    fStack_9c = (float)((float10)fStack_9c * fVar8);
    FUN_00507ea0(fStack_38 * _DAT_005db09c);
    FUN_00421ed0(0xb50);
    FUN_00421ed0(0xb44);
    FUN_00422190(0);
    FUN_00421ed0(0xb71);
    FUN_00421dd0(0xbe2);
    uVar4 = FUN_00425640(0);
    FUN_004220a0(uVar4);
    FUN_004220c0(5,6);
    FUN_00421670(8);
    if ((float)_DAT_005c8ba8 < fStack_a8) {
      FUN_00421bd0(*(undefined4 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x2a8),fStack_a8);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc));
      FUN_00423b30(&fStack_7c,&fStack_64,&fStack_88);
      FUN_00423b60(&stack0xffffff3c,&fStack_7c,&fStack_94);
      FUN_00421cc0(&fStack_80,unaff_ESI,fVar9);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc));
      FUN_00423b30(&fStack_7c,&fStack_64,&fStack_88);
      FUN_00423b30(&stack0xffffff3c,&fStack_7c,&fStack_94);
      FUN_00421cc0(&fStack_80,unaff_ESI,fVar9);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x14));
      FUN_00423b60(&fStack_7c,&fStack_64,&fStack_88);
      FUN_00423b30(&stack0xffffff3c,&fStack_7c,&fStack_94);
      FUN_00421cc0(&fStack_80,unaff_ESI,fVar9);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x14));
      FUN_00422b80(fStack_64 - fStack_88,fStack_60 - fStack_84,fStack_5c - fStack_80);
      FUN_00422b80((float)&fStack_80 - fStack_94,unaff_ESI - fStack_90,fVar9 - fStack_8c);
      FUN_00421cc0(fStack_7c,fStack_78,fStack_74);
    }
    if ((float)_DAT_005c8ba8 < fStack_b8) {
      FUN_00421bd0(*(undefined4 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a4),
                   *(undefined4 *)(param_1 + 0x2a8),fStack_b8);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc));
      FUN_00422b80(fStack_64 + fStack_a4,fStack_a0 + fStack_60,fStack_9c + fStack_5c);
      FUN_00422b80(fStack_7c - fStack_70,fStack_78 - fStack_6c,fStack_74 - fStack_68);
      FUN_00421cc0(&fStack_80,unaff_ESI,fVar9);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc));
      FUN_00422b80(fStack_64 + fStack_a4,fStack_a0 + fStack_60,fStack_9c + fStack_5c);
      FUN_00422b80(fStack_7c + fStack_70,fStack_78 + fStack_6c,fStack_74 + fStack_68);
      FUN_00421cc0(&fStack_80,unaff_ESI,fVar9);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x14));
      FUN_00422b80(fStack_64 - fStack_a4,fStack_60 - fStack_a0,fStack_5c - fStack_9c);
      FUN_00421cc0(fStack_7c + fStack_70,fStack_78 + fStack_6c,fStack_74 + fStack_68);
      FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x14));
      fStack_74 = fStack_5c - fStack_9c;
      FUN_00421cc0((fStack_64 - fStack_a4) - fStack_70,(fStack_60 - fStack_a0) - fStack_6c,
                   fStack_74 - fStack_68);
    }
    FUN_00421690();
    FUN_00421dd0(0xb71);
    FUN_00422190(1);
    FUN_00421ed0(0xbe2);
    FUN_00421dd0(0xb44);
  }
  return;
}

