
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0041fd90(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar7;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  char cVar9;
  uint uVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  uint *puVar11;
  undefined1 auStack_58 [4];
  undefined4 auStack_54 [9];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  char cStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_14;
  uint uStack_10;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0x14);
  uVar7 = (undefined3)((uint)iVar2 >> 8);
  if (-1 < iVar2) {
    if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
      iVar3 = ftol();
      *(float *)(param_1 + 100) = (float)(extraout_ST0 - (float10)iVar3);
      DAT_00616840 = DAT_00616840 + iVar3;
    }
    else {
      DAT_00616840 = ftol();
    }
    if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
      iVar3 = ftol();
      *(float *)(param_1 + 0x68) = (float)(extraout_ST0_00 - (float10)iVar3);
      DAT_00616844 = DAT_00616844 + iVar3;
    }
    else {
      DAT_00616844 = ftol();
    }
    if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
      iVar3 = ftol();
      *(float *)(param_1 + 0x6c) = (float)(extraout_ST0_01 - (float10)iVar3);
      DAT_00616848 = DAT_00616848 + iVar3;
    }
    else {
      DAT_00616848 = ftol();
    }
    uVar4 = FUN_0042d670();
    puVar11 = (uint *)(param_1 + 0x44);
    uVar10 = 0;
    do {
      uVar5 = 1 << ((byte)uVar10 & 0x1f);
      cVar9 = -(*(char *)(param_1 + 0x38 + uVar10) >> 7);
      if ((bool)cVar9 != ((uVar5 & DAT_00616850) != 0)) {
        if (cVar9 == '\0') {
          DAT_00616850 = DAT_00616850 & ~uVar5;
        }
        else {
          DAT_00616850 = DAT_00616850 | uVar5;
        }
        uVar1 = 0;
        if (cVar9 != '\0') {
          uVar5 = 0;
          if (*puVar11 < uVar4) {
            uVar5 = uVar4 - *puVar11;
          }
          uVar6 = DAT_00616840 - DAT_006107d4;
          uVar8 = DAT_00616844 - _DAT_006107d8;
          DAT_006107d4 = DAT_00616840;
          _DAT_006107d8 = DAT_00616844;
          if (((uVar5 < *(uint *)(param_1 + 0x40)) &&
              (uVar5 = (int)uVar6 >> 0x1f, (int)((uVar6 ^ uVar5) - uVar5) < 5)) &&
             (uVar5 = (int)uVar8 >> 0x1f, (int)((uVar8 ^ uVar5) - uVar5) < 5)) {
            uVar1 = 1;
            uVar5 = uVar4 - *(uint *)(param_1 + 0x40);
          }
          else {
            uVar1 = 0;
            uVar5 = uVar4;
          }
          *puVar11 = uVar5;
        }
        uStack_14 = 0;
        auStack_54[0] = 0xffffffff;
        auStack_54[1] = 0xfffffffe;
        auStack_54[2] = 0xfffffffd;
        auStack_54[3] = 0xfffffffc;
        auStack_54[4] = 0xfffffffb;
        auStack_54[5] = 0xfffffffa;
        auStack_54[6] = 0xfffffff9;
        auStack_54[7] = 0xfffffff8;
        auStack_54[8] = 0xfffffff7;
        if (uVar10 < 9) {
          uStack_2c = auStack_54[uVar10];
          uStack_17 = 0;
          cStack_18 = cVar9;
          uStack_16 = uVar1;
        }
        else {
          uStack_2c = 0;
        }
        uStack_10 = uVar10;
        uVar5 = FUN_004207b0(auStack_58,*(undefined4 *)(param_1 + 4),auStack_30);
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 1;
    } while ((int)uVar10 < 8);
    uVar7 = (undefined3)(uVar5 >> 8);
  }
  return CONCAT31(uVar7,-1 < iVar2);
}

