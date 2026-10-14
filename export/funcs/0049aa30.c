
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049aa30(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar11;
  float unaff_EDI;
  undefined4 *puVar12;
  int *piVar13;
  float10 fVar14;
  float *pfVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int **ppiVar18;
  float fStack_f4c;
  float fStack_f48;
  float fStack_f44;
  float local_f40;
  int iStack_f3c;
  float local_f38;
  float local_f34;
  float local_f30;
  undefined1 uStack_f2c;
  undefined1 uStack_f2b;
  undefined1 uStack_f2a;
  undefined1 uStack_f29;
  undefined1 uStack_f28;
  undefined1 uStack_f27;
  undefined1 uStack_f26;
  undefined1 uStack_f25;
  undefined1 uStack_f24;
  undefined1 uStack_f23;
  undefined1 uStack_f22;
  undefined1 uStack_f21;
  float local_f20;
  float local_f1c;
  float local_f18;
  float fStack_f14;
  undefined1 uStack_f10;
  undefined1 uStack_f0f;
  undefined1 uStack_f0e;
  undefined1 uStack_f0d;
  float fStack_f0c;
  float local_f08;
  float local_f04;
  float local_f00;
  float local_efc;
  float local_ef8;
  float local_ef4;
  float local_ef0;
  float local_eec;
  float local_ee8;
  int *piStack_ee4;
  float local_ee0;
  float local_edc;
  float local_ed8;
  float local_ed4;
  float local_ed0;
  float local_ecc;
  int iStack_ec8;
  undefined1 auStack_ec4 [32];
  float fStack_ea4;
  int *piStack_ea0;
  float fStack_e9c;
  float fStack_e98;
  float fStack_e94;
  float fStack_e90;
  undefined1 *puStack_e8c;
  int *piStack_e88;
  float *pfStack_e84;
  float fStack_e80;
  float fStack_e7c;
  undefined1 auStack_e74 [8];
  float fStack_e6c;
  float fStack_e68;
  float fStack_e64;
  float fStack_e60;
  undefined4 uStack_e5c;
  undefined1 auStack_e54 [8];
  int *piStack_e4c;
  float fStack_e48;
  undefined4 uStack_e44;
  float afStack_e40 [3];
  undefined1 auStack_e34 [4];
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  float fStack_e28;
  float fStack_e24;
  float afStack_e20 [7];
  float fStack_e04;
  float fStack_e00;
  undefined4 uStack_dfc;
  float fStack_df8;
  float fStack_df4;
  undefined4 uStack_df0;
  undefined1 auStack_dec [4];
  undefined1 auStack_de8 [8];
  float fStack_de0;
  float fStack_ddc;
  undefined4 uStack_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  undefined4 local_dbc [6];
  float fStack_da4;
  float *pfStack_da0;
  float fStack_d9c;
  float local_d98 [4];
  undefined4 uStack_d88;
  undefined4 uStack_d84;
  float fStack_d68;
  float fStack_d64;
  undefined4 uStack_d60;
  int aiStack_c0c [770];
  int *piStack_4;
  
  if (*(char *)(param_1 + 0x898) == '\0') {
    return;
  }
  local_ef0 = 0.0;
  puVar11 = (undefined4 *)(param_1 + 0x3d4);
  puVar12 = local_dbc;
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_d98[0] = 0.0;
  local_eec = 0.0;
  local_ee8 = -0.54999995;
  local_d98[1] = 0.0;
  local_d98[2] = -0.54999995;
  FUN_00422690(0,local_dbc);
  FUN_00421ed0(0xb50);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xde1);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(5,6);
  FUN_00421670(4);
  pfVar8 = (float *)(param_1 + 0x418);
  local_f08 = *pfVar8 * _DAT_005c75e0;
  local_f04 = *(float *)(param_1 + 0x41c) * _DAT_005c75e0;
  local_efc = 0.0;
  local_ef8 = 0.0;
  local_f00 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
  local_ef4 = 0.0;
  FUN_00423b60(&local_ee0,&local_efc,&local_f08);
  local_f34 = *(float *)(param_1 + 0x41c);
  local_f08 = local_ee0;
  local_f30 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
  local_f04 = local_edc;
  local_f00 = local_ed8;
  local_f40 = *(float *)(param_1 + 0x3f8) - _DAT_005c75dc;
  local_f38 = *pfVar8 * _DAT_005c75e0 * local_f40;
  local_f20 = local_ee0 - local_f38;
  local_f1c = local_edc - local_f34 * _DAT_005c75e0 * local_f40;
  local_f18 = local_ed8 - local_f30 * local_f40;
  local_ecc = *(float *)(param_1 + 0x3f8);
  local_ed4 = *(float *)(param_1 + 0x46c) * local_ecc;
  local_ed0 = *(float *)(param_1 + 0x470) * local_ecc;
  local_ecc = *(float *)(param_1 + 0x474) * local_ecc;
  FUN_00423b30(&local_efc,&local_f20,&local_ed4);
  local_f30 = *(float *)(param_1 + 0x3f8);
  local_f20 = local_efc;
  local_f38 = *pfVar8 * local_f30;
  local_f1c = local_ef8;
  local_f18 = local_ef4;
  local_f34 = *(float *)(param_1 + 0x41c) * local_f30;
  local_f30 = *(float *)(param_1 + 0x420) * local_f30;
  iStack_ec8 = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x18))();
  piStack_ee4 = (int *)**(int **)(iStack_ec8 + 4);
  local_f40 = 0.0;
  if (piStack_ee4 != *(int **)(iStack_ec8 + 4)) {
    do {
      cVar3 = *(char *)(param_1 + 0xb48);
      piVar6 = piStack_ee4 + 2;
      piVar13 = aiStack_c0c;
      for (iVar9 = 0x303; piVar4 = piStack_4, iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar13 = piVar13 + 1;
      }
      if ((cVar3 != '\0') && (uVar5 = (**(code **)(*piStack_4 + 0x1c))(), (uVar5 & 0xffc0) == 0))
      goto LAB_0049b5ba;
      (**(code **)(*piVar4 + 0x28))(&fStack_f4c);
      fStack_f4c = fStack_f4c * *(float *)(param_1 + 0xf48);
      fStack_f48 = *(float *)(param_1 + 0xf48) * fStack_f48;
      piVar6 = (int *)(**(code **)(*piVar4 + 0xc))();
      fVar1 = *(float *)(param_1 + 0xf48);
      piVar13 = &iStack_ec8;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar13 = piVar13 + 1;
      }
      fStack_ea4 = fStack_ea4 * fVar1;
      fStack_e9c = fStack_e9c * fVar1;
      piStack_ea0 = (int *)0x0;
      uVar7 = (**(code **)(*piVar4 + 0x18))();
      switch(uVar7) {
      case 1:
        iVar10 = 0x10;
        iStack_f3c = 0x10;
        fStack_f14 = 0.0;
        pfVar8 = local_d98;
        do {
          pfVar8 = pfVar8 + 3;
          fVar14 = (float10)fsin((float10)fStack_f14);
          afStack_e40[1] = 0.0;
          afStack_e40[0] = (float)(fVar14 * (float10)fStack_f4c);
          fVar14 = (float10)fcos((float10)fStack_f14);
          afStack_e40[2] = (float)(fVar14 * (float10)fStack_f4c);
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,&fStack_dd4,auStack_ec4,afStack_e40);
          fStack_f14 = fStack_f14 + _DAT_005d3f00;
          *pfVar8 = fStack_dd4;
          pfVar8[1] = fStack_dd0;
          iVar10 = iVar10 + -1;
          pfVar8[2] = fStack_dcc;
          iVar9 = iStack_f3c;
        } while (iVar10 != 0);
        break;
      case 2:
        iVar10 = 0x10;
        iStack_f3c = 0x10;
        fStack_f0c = 0.0;
        pfVar8 = local_d98;
        do {
          pfVar8 = pfVar8 + 3;
          fVar14 = (float10)fsin((float10)fStack_f0c);
          local_eec = 0.0;
          local_ef0 = (float)fVar14;
          fVar14 = (float10)fcos((float10)fStack_f0c);
          local_ee8 = (float)fVar14;
          fVar14 = (float10)(**(code **)(*piVar4 + 0x40))(&local_ef0);
          fVar14 = fVar14 * (float10)*(float *)(param_1 + 0xf48);
          FUN_00422b80((float)((float10)local_ef0 * fVar14 + (float10)(float)piStack_ea0),
                       (float)((float10)local_eec * fVar14 + (float10)fStack_e9c),
                       (float)((float10)local_ee8 * fVar14 + (float10)fStack_e98));
          fStack_f0c = fStack_f0c + _DAT_005d3f00;
          *pfVar8 = fStack_e28;
          pfVar8[1] = fStack_e24;
          iVar10 = iVar10 + -1;
          pfVar8[2] = afStack_e20[0];
          iVar9 = iStack_f3c;
        } while (iVar10 != 0);
        break;
      case 3:
        fStack_f4c = fStack_f4c * _DAT_005c75e0;
        iVar9 = 4;
        iStack_f3c = 4;
        fStack_f48 = fStack_f48 * _DAT_005c75e0;
        fStack_f44 = fStack_f44 * _DAT_005c75e0;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        puVar16 = auStack_ec4;
        puVar17 = auStack_dec;
        piVar6 = DAT_0067209c;
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,puVar17,puVar16,&fStack_f4c);
        fStack_ea4 = -unaff_EDI;
        fStack_d9c = (float)uStack_dfc;
        local_d98[0] = fStack_df8;
        local_d98[1] = fStack_df4;
        piStack_ea0 = unaff_ESI;
        fStack_e9c = unaff_EBP;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        pfVar8 = &local_ed4;
        pfVar15 = afStack_e20;
        piVar13 = DAT_0067209c;
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,pfVar15,pfVar8,&fStack_ea4);
        fStack_e90 = -(float)piVar6;
        pfStack_da0 = (float *)uStack_e30;
        fStack_d9c = (float)uStack_e2c;
        piStack_e88 = (int *)-(float)puVar16;
        local_d98[0] = fStack_e28;
        puStack_e8c = puVar17;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,auStack_de8,&piStack_ee4,&fStack_e90);
        fStack_da4 = fStack_df8;
        pfStack_da0 = (float *)fStack_df4;
        fStack_e80 = -(float)pfVar8;
        fStack_d9c = (float)uStack_df0;
        piStack_e88 = piVar13;
        pfStack_e84 = pfVar15;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,&fStack_e28,&local_ef4,&piStack_e88);
        fStack_d68 = fStack_df8;
        fStack_d64 = fStack_df4;
        uStack_d60 = uStack_df0;
        goto LAB_0049b391;
      case 4:
        fStack_f48 = fStack_f48 * _DAT_005c75e0;
        iStack_f3c = 4;
        uStack_dd8 = 0;
        fStack_de0 = fStack_f4c;
        fStack_ddc = fStack_f48;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        ppiVar18 = &piStack_e88;
        piVar6 = DAT_0067209c;
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,ppiVar18,auStack_ec4,&fStack_de0);
        puStack_e8c = (undefined1 *)-unaff_EDI;
        fStack_d9c = fStack_e98;
        local_d98[0] = fStack_e94;
        local_d98[1] = fStack_e90;
        pfStack_e84 = (float *)0x0;
        piStack_e88 = unaff_ESI;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        puVar16 = auStack_e74;
        piVar13 = DAT_0067209c;
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,puVar16,&local_ed4,&puStack_e8c);
        fStack_e6c = -(float)piVar6;
        pfStack_da0 = pfStack_e84;
        fStack_e68 = -(float)ppiVar18;
        fStack_d9c = fStack_e80;
        local_d98[0] = fStack_e7c;
        fStack_e64 = 0.0;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,auStack_e54,&piStack_ee4,&fStack_e6c);
        fStack_da4 = fStack_e64;
        fStack_e48 = -(float)puVar16;
        pfStack_da0 = (float *)fStack_e60;
        fStack_d9c = (float)uStack_e5c;
        uStack_e44 = 0;
        piStack_e4c = piVar13;
        if (DAT_0067209c == (int *)0x0) {
          DAT_0067209c = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,auStack_e34,&local_ef4,&piStack_e4c);
        fStack_d68 = fStack_e04;
        fStack_d64 = fStack_e00;
        uStack_d60 = uStack_dfc;
        iVar9 = iStack_f3c;
LAB_0049b391:
        break;
      default:
        goto switchD_0049ae0d_default;
      }
      fVar1 = *(float *)(param_1 + 0x4a8);
      pfVar8 = local_d98;
      fVar2 = *(float *)(param_1 + 0x4ac);
      iVar10 = iVar9;
      do {
        pfVar8 = pfVar8 + 3;
        local_efc = local_f38;
        local_ef8 = local_f34;
        local_ef4 = local_f30;
        iVar10 = iVar10 + -1;
        local_ee0 = local_f20 +
                    ((*pfVar8 + *(float *)(param_1 + 0x4a8)) / (fVar1 + fVar1)) * local_f38;
        local_edc = local_f1c +
                    ((float)_DAT_005c89b8 -
                    (pfVar8[2] + *(float *)(param_1 + 0x4ac)) / (fVar2 + fVar2)) * local_f34;
        *pfVar8 = local_ee0;
        pfVar8[1] = local_edc;
        local_ed8 = local_f18 + local_f30;
        pfVar8[2] = local_ed8;
      } while (iVar10 != 0);
      iVar10 = iVar9 + -1;
      if (0 < iVar10) {
        uStack_f28 = 0x1f;
        uStack_f27 = 0;
        uStack_f26 = 0;
        uStack_f25 = 0;
        uStack_f10 = 0xff;
        uStack_f0f = 0;
        uStack_f0e = 0;
        uStack_f0d = 0xff;
        pfVar8 = local_d98 + 3;
        do {
          FUN_00498470(*pfVar8,pfVar8[1],pfVar8[2],pfVar8[3],pfVar8[4],pfVar8[5],&uStack_f10,
                       &uStack_f28,0x3b23d70a);
          iVar10 = iVar10 + -1;
          pfVar8 = pfVar8 + 3;
          iVar9 = iStack_f3c;
        } while (iVar10 != 0);
      }
      uStack_f24 = 0x1f;
      uStack_f23 = 0;
      uStack_f22 = 0;
      uStack_f21 = 0;
      uStack_f2c = 0xff;
      uStack_f2b = 0;
      uStack_f2a = 0;
      uStack_f29 = 0xff;
      FUN_00498470(local_d98[iVar9 * 3],local_d98[iVar9 * 3 + 1],local_d98[iVar9 * 3 + 2],
                   local_d98[3],uStack_d88,uStack_d84,&uStack_f2c,&uStack_f24,0x3b23d70a);
      local_f40 = (float)((int)local_f40 + iVar9);
switchD_0049ae0d_default:
      if (0xff < (int)local_f40) {
        local_f40 = 0.0;
        FUN_00421690();
        FUN_00421ed0(0xb50);
        FUN_00421ed0(0xb71);
        FUN_00421ed0(0xb44);
        FUN_00421ed0(0xde1);
        FUN_00421dd0(0xbe2);
        FUN_004220c0(5,6);
        FUN_00421670(4);
      }
LAB_0049b5ba:
      piStack_ee4 = (int *)*piStack_ee4;
    } while (piStack_ee4 != (int *)*(int *)(iStack_ec8 + 4));
  }
  FUN_00421690();
  return;
}

