
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00580750(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float unaff_EBX;
  undefined4 *puVar11;
  float fVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  float *pfVar16;
  float *pfStack_90;
  float *pfStack_8c;
  float *pfStack_88;
  float *pfStack_84;
  undefined4 *puStack_80;
  int *piStack_7c;
  float *pfStack_78;
  float *pfStack_74;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  float fStack_54;
  float fStack_50;
  undefined4 *puStack_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  float local_2c;
  undefined4 *local_28;
  float local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = *(int *)(param_1 + 0x664);
  if (iVar1 == *(int *)(param_1 + 0x658)) {
    *(undefined1 *)(param_1 + 0x67b) = 0;
  }
  else if (iVar1 == *(int *)(param_1 + 0x65c)) {
    *(undefined1 *)(param_1 + 0x67b) = 1;
  }
  uVar5 = *(int *)(param_1 + 0x65c) - iVar1;
  uVar8 = (int)uVar5 >> 0x1f;
  uVar6 = *(int *)(param_1 + 0x658) - iVar1;
  uVar9 = (int)uVar6 >> 0x1f;
  if ((int)((uVar5 ^ uVar8) - uVar8) < (int)((uVar6 ^ uVar9) - uVar9)) {
    pfStack_74 = (float *)local_c;
    local_48 = (undefined4 *)0x0;
    local_44 = (undefined4 *)0x0;
    local_40 = 0.0;
    pfStack_78 = (float *)0x5807d0;
    FUN_004e7090();
    pfStack_74 = (float *)local_18;
    local_48 = (float *)0x0;
    local_44 = (undefined4 *)0x0;
    local_40 = 0.0;
    pfStack_78 = (float *)0x5807fd;
    FUN_004e7090();
    pfStack_74 = (float *)&local_28;
    pfStack_78 = &local_2c;
    piStack_7c = &local_30;
    puStack_80 = &DAT_0067dbf8;
    pfStack_84 = (float *)0x58081f;
    cVar4 = (**(code **)(DAT_0067dbf8 + 0x34))();
    if (cVar4 != '\0') {
      pfStack_84 = &local_2c;
      pfStack_88 = (float *)&local_48;
      pfStack_8c = (float *)&puStack_4c;
      pfStack_90 = &fStack_50;
      cVar4 = (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8);
      if (cVar4 != '\0') {
        pfStack_88 = (float *)local_20;
        pfStack_84 = (float *)0x0;
        FUN_00423b60(&pfStack_88,auStack_58,&stack0xffffff9c);
        fVar7 = (float)pfStack_88 * (float)pfStack_88 +
                (float)pfStack_84 * (float)pfStack_84 + (float)puStack_80 * (float)puStack_80;
        local_24 = (float)(0x5f3759df - ((int)fVar7 >> 1));
        local_20 = (undefined4 *)
                   ((_DAT_005ca220 - local_24 * local_24 * fVar7 * _DAT_005c75e0) * local_24 * fVar7
                   );
        FUN_00423b60(&piStack_7c,&stack0xffffff90,&stack0xffffff9c);
        local_24 = (float)piStack_7c * (float)piStack_7c +
                   (float)pfStack_78 * (float)pfStack_78 + (float)pfStack_74 * (float)pfStack_74;
        fVar7 = (float)(0x5f3759df - ((int)local_24 >> 1));
        local_24 = (_DAT_005ca220 - fVar7 * fVar7 * local_24 * _DAT_005c75e0) * fVar7 * local_24;
        if (((float)local_20 != _DAT_005c7474) && (local_24 != _DAT_005c7474)) {
          FUN_004c8b10(&puStack_4c,&pfStack_88,local_20);
          pfStack_88 = (float *)puStack_4c;
          pfStack_84 = (float *)local_48;
          puStack_80 = local_44;
          FUN_004c8b10(&puStack_4c,&piStack_7c,local_24);
          if ((float)local_20 <=
              ((float)puStack_4c * (float)pfStack_88 +
              (float)local_48 * (float)pfStack_84 + (float)local_44 * (float)puStack_80) * local_24)
          {
            *(undefined1 *)(param_1 + 0x67b) = 0;
            return;
          }
        }
      }
    }
  }
  else {
    local_24 = 0.0;
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
    if (DAT_0067c4c0 == (int *)0x0) {
      DAT_0067c4c0 = (int *)FUN_005b73e0();
    }
    pfStack_74 = (float *)(param_1 + 0x5b8);
    pfStack_78 = (float *)&local_30;
    puStack_80 = (undefined4 *)0x580a54;
    piStack_7c = DAT_0067c4c0;
    (**(code **)(*DAT_0067c4c0 + 0x28))();
    local_24 = (float)uStack_3c;
    local_28 = (undefined4 *)local_40;
    local_20 = (undefined4 *)uStack_38;
    uStack_34 = 0;
    local_30 = 0;
    local_2c = 0.0;
    if (DAT_0067c4c0 == (int *)0x0) {
      puStack_80 = (undefined4 *)0x580a92;
      DAT_0067c4c0 = (int *)FUN_005b73e0();
    }
    puStack_80 = &uStack_34;
    pfStack_84 = (float *)(param_1 + 0x570);
    pfStack_88 = &local_40;
    pfStack_90 = (float *)0x580aae;
    pfStack_8c = (float *)DAT_0067c4c0;
    (**(code **)(*DAT_0067c4c0 + 0x28))();
    local_2c = fStack_50;
    local_28 = puStack_4c;
    pfStack_90 = (float *)&uStack_38;
    pfVar16 = &fStack_54;
    local_24 = (float)local_48;
    puVar15 = auStack_58;
    puVar14 = auStack_5c;
    puVar13 = &DAT_0067dbf8;
    cVar4 = (**(code **)(DAT_0067dbf8 + 0x34))(&DAT_0067dbf8,puVar14,puVar15,pfVar16);
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(DAT_0067dbf8 + 0x34))
                        (&DAT_0067dbf8,&pfStack_88,&pfStack_84,&puStack_80,&local_40);
      if (cVar4 != '\0') {
        uVar2 = ZEXT48(local_44);
        fVar12 = 0.0;
        uVar3 = (ulonglong)(uint)local_40;
        FUN_00422b80((float)pfStack_84 - (float)puVar14,(float)puStack_80 - (float)puVar15,
                     (float)piStack_7c - (float)pfVar16);
        fVar7 = (float)pfStack_90 * (float)pfStack_90 +
                (float)pfStack_8c * (float)pfStack_8c + (float)pfStack_88 * (float)pfStack_88;
        local_44 = (undefined4 *)(0x5f3759df - ((int)fVar7 >> 1));
        puVar11 = (undefined4 *)local_40;
        local_40 = (_DAT_005ca220 - (float)local_44 * (float)local_44 * fVar7 * _DAT_005c75e0) *
                   (float)local_44 * fVar7;
        FUN_00422b80((float)uVar2 - (float)puVar14,(float)uVar3 - (float)puVar15,-(float)pfVar16);
        fVar7 = (float)puVar11 * (float)puVar11 + fVar12 * fVar12 + (float)puVar13 * (float)puVar13;
        fVar10 = (float)(0x5f3759df - ((int)fVar7 >> 1));
        local_44 = (undefined4 *)
                   ((_DAT_005ca220 - fVar10 * fVar10 * fVar7 * _DAT_005c75e0) * fVar10 * fVar7);
        if ((local_40 != _DAT_005c7474) && ((float)local_44 != _DAT_005c7474)) {
          FUN_004c8b10(&stack0xffffff94,&pfStack_90,local_40);
          fVar7 = _DAT_005c75dc / (float)local_44;
          FUN_00422b80(fVar7 * (float)puVar11,fVar12 * fVar7,(float)puVar13 * fVar7);
          if (((float)puStack_4c * unaff_EBX + fStack_50 * (float)uVar3 + (float)uVar2 * fStack_54)
              * (float)local_44 < local_40) {
            *(undefined1 *)(param_1 + 0x67b) = 0;
            return;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x67b) = 1;
  return;
}

