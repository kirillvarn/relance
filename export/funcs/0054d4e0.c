
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054d4e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  undefined4 *puVar30;
  int iVar31;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_68;
  int local_60;
  
  if ((char)param_1[0x1f] == '\0') {
    FUN_0054cfb0();
  }
  param_3 = param_3 - param_1[0x17];
  if ((param_1[0x16] <= param_3) || (param_3 < 0)) {
    param_3 = 0;
  }
  if (_DAT_005c99c8 <= (float)param_1[0x15]) {
    fVar25 = _DAT_005c75dc / (float)param_1[0x13];
    if (*param_1 != 0) {
      uVar26 = FUN_00425640(0);
      FUN_004220a0(uVar26);
    }
    iVar14 = *(int *)(param_3 * 0x18 + 4 + param_1[0x18]);
    local_74 = 0;
    local_78 = 1;
    FUN_00421670(4);
    local_68 = 0;
    do {
      iVar1 = local_68 + 1;
      if ((iVar1 != param_1[0x14]) &&
         (iVar28 = *(int *)(param_3 * 0x18 + param_1[0x18]), iVar28 < iVar14)) {
        iVar31 = iVar28 * 0x3c;
        local_60 = iVar14 - iVar28;
        do {
          iVar28 = iVar28 + 1;
          iVar29 = param_1[0x13];
          if (iVar29 < local_78) {
            local_74 = local_74 - iVar29;
            local_78 = local_78 - iVar29;
          }
          iVar29 = iVar28;
          if (param_1[0x11] <= iVar28) {
            iVar29 = iVar28 - param_1[0x11];
          }
          if (local_68 == 0) {
            if ((*(char *)(iVar31 + 0x38 + param_1[0xf]) == '\0') ||
               (*(char *)(iVar29 * 0x3c + 0x38 + param_1[0xf]) == '\0')) {
LAB_0054d62b:
              iVar15 = param_1[0xf];
              local_80 = *(float *)(iVar31 + 0x34 + iVar15);
              local_7c = *(float *)(iVar29 * 0x3c + 0x34 + iVar15);
              iVar16 = param_1[0x14];
              puVar30 = (undefined4 *)(iVar29 * 0x3c + iVar15);
              if (*(char *)(iVar31 + 0x38 + iVar15) == '\0') {
                if (iVar16 == 1) {
                  local_80 = 0.0;
                }
                iVar29 = iVar31 + 0x28;
              }
              else {
                if (iVar16 == 2) {
                  local_80 = 0.0;
                }
                iVar29 = iVar31 + 0x1c;
              }
              puVar27 = (undefined4 *)(iVar29 + iVar15);
              uVar26 = *puVar27;
              uVar17 = puVar27[1];
              uVar18 = puVar27[2];
              if (*(char *)(puVar30 + 0xe) == '\0') {
                if (iVar16 == 1) {
                  local_7c = 0.0;
                }
                puVar27 = puVar30 + 10;
              }
              else {
                if (iVar16 == 2) {
                  local_7c = 0.0;
                }
                puVar27 = puVar30 + 7;
              }
              uVar19 = *puVar27;
              uVar20 = puVar27[1];
              uVar21 = puVar27[2];
              if ((_DAT_005c99c8 <= local_80) || (_DAT_005c99c8 <= local_7c)) {
                if ((float)param_1[0x15] < local_80) {
                  local_80 = (float)param_1[0x15];
                }
                if ((float)param_1[0x15] < local_7c) {
                  local_7c = (float)param_1[0x15];
                }
                fVar22 = (float)local_74 * fVar25;
                fVar23 = (float)local_78 * fVar25;
                fVar2 = *(float *)(iVar31 + 0xc + iVar15);
                uVar3 = *(undefined4 *)(iVar31 + iVar15);
                fVar4 = *(float *)(iVar31 + 4 + iVar15);
                uVar5 = *(undefined4 *)(iVar31 + 8 + iVar15);
                uVar6 = *puVar30;
                fVar7 = (float)puVar30[1];
                uVar8 = puVar30[2];
                uVar9 = *puVar30;
                fVar10 = (float)puVar30[1];
                uVar11 = puVar30[2];
                uVar12 = *(undefined4 *)(iVar31 + iVar15);
                fVar24 = fVar2 + *(float *)(iVar31 + 4 + iVar15);
                uVar13 = *(undefined4 *)(iVar31 + 8 + iVar15);
                FUN_00421bd0(uVar26,uVar17,uVar18,local_80);
                FUN_00421ca0(fVar22,0x3f800000);
                FUN_00421cc0(uVar12,fVar24,uVar13);
                FUN_00421ca0(fVar22,0);
                FUN_00421cc0(uVar3,fVar4 - fVar2,uVar5);
                FUN_00421bd0(uVar19,uVar20,uVar21,local_7c);
                FUN_00421ca0(fVar23,0);
                FUN_00421cc0(uVar6,fVar7 - fVar2,uVar8);
                FUN_00421ca0(fVar23,0);
                FUN_00421cc0(uVar6,fVar7 - fVar2,uVar8);
                FUN_00421ca0(fVar23,0x3f800000);
                FUN_00421cc0(uVar9,fVar2 + fVar10,uVar11);
                FUN_00421bd0(uVar26,uVar17,uVar18,local_80);
                FUN_00421ca0(fVar22,0x3f800000);
                FUN_00421cc0(uVar12,fVar24,uVar13);
              }
            }
          }
          else if ((local_68 != 1) ||
                  ((*(char *)(iVar31 + 0x38 + param_1[0xf]) != '\0' &&
                   (*(char *)(iVar29 * 0x3c + 0x38 + param_1[0xf]) != '\0')))) goto LAB_0054d62b;
          iVar31 = iVar31 + 0x3c;
          local_74 = local_74 + 1;
          local_78 = local_78 + 1;
          local_60 = local_60 + -1;
        } while (local_60 != 0);
      }
      local_68 = iVar1;
    } while (iVar1 < 2);
    FUN_00421690();
  }
  return;
}

