
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eada0(int param_1,undefined1 *param_2,char param_3,char param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_88 = *(float *)(param_1 + 0x20);
  if (local_88 != (float)_DAT_005c8ba8) {
    local_2c = *(float *)(param_1 + 4);
    local_8c = -local_88;
    local_28 = *(float *)(param_1 + 8);
    local_24 = *(float *)(param_1 + 0xc);
    local_84 = 0.0;
    local_80 = local_88;
    local_6c = local_8c;
    FUN_00423b30(&local_1c,&local_8c,&local_2c);
    local_44 = local_1c;
    local_40 = local_18;
    local_3c = local_14;
    local_8c = local_80;
    local_88 = local_80;
    local_84 = 0.0;
    FUN_00423b30(&local_1c,&local_8c,&local_2c);
    local_50 = local_1c;
    local_4c = local_18;
    local_48 = local_14;
    local_8c = local_80;
    local_88 = local_6c;
    local_84 = 0.0;
    FUN_00423b30(&local_1c,&local_8c,&local_2c);
    local_5c = local_1c;
    local_58 = local_18;
    local_54 = local_14;
    local_8c = local_6c;
    local_88 = local_6c;
    local_84 = 0.0;
    FUN_00423b30(&local_1c,&local_8c,&local_2c);
    local_68 = local_1c;
    local_64 = local_18;
    local_60 = local_14;
    uVar2 = CONCAT31(CONCAT21(CONCAT11(param_2[3],*param_2),param_2[1]),param_2[2]);
    uVar3 = (uint)CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]);
    fVar1 = _DAT_005d043c -
            ((local_80 - DAT_005d8ee8) * _DAT_005d6edc) / (DAT_005d8eec - DAT_005d8ee8);
    if (param_3 == '\0') {
      FUN_00423b60(&local_a4,&local_5c,&local_68);
      local_a4 = local_a4 * fVar1 + local_68;
      local_a0 = local_a0 * fVar1 + local_64;
      local_9c = local_9c * fVar1 + local_60;
      FUN_005a2940(&local_a4,&local_68,uVar2,uVar3,0x40000000);
      FUN_00423b60(&local_8c,&local_44,&local_68);
      local_a4 = local_8c * fVar1 + local_68;
      local_a0 = local_88 * fVar1 + local_64;
      local_9c = local_84 * fVar1 + local_60;
      FUN_005a2940(&local_68,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00423b60(&local_8c,&local_44,&local_50);
      local_a4 = local_50 + local_8c * fVar1;
      local_a0 = local_88 * fVar1 + local_4c;
      local_9c = local_84 * fVar1 + local_48;
      FUN_005a2940(&local_a4,&local_50,uVar2,uVar3,0x40000000);
      FUN_00423b60(&local_8c,&local_5c,&local_50);
      local_a4 = local_50 + local_8c * fVar1;
      local_a0 = local_88 * fVar1 + local_4c;
      local_9c = local_84 * fVar1 + local_48;
      FUN_005a2940(&local_50,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_68 - local_5c,local_64 - local_58,local_60 - local_54);
      local_a4 = local_5c + local_8c * fVar1;
      local_a0 = local_88 * fVar1 + local_58;
      local_9c = local_84 * fVar1 + local_54;
      FUN_005a2940(&local_a4,&local_5c,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_50 - local_5c,local_4c - local_58,local_48 - local_54);
      local_a4 = local_5c + local_8c * fVar1;
      local_a0 = local_88 * fVar1 + local_58;
      local_9c = local_84 * fVar1 + local_54;
      FUN_005a2940(&local_5c,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_68 - local_44,local_64 - local_40,local_60 - local_3c);
      local_a4 = local_44 + local_8c * fVar1;
      local_a0 = local_88 * fVar1 + local_40;
      local_9c = local_84 * fVar1 + local_3c;
      FUN_005a2940(&local_a4,&local_44,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_50 - local_44,local_4c - local_40,local_48 - local_3c);
      local_a4 = local_44 + local_8c * fVar1;
      local_a0 = local_88 * fVar1 + local_40;
      local_9c = local_84 * fVar1 + local_3c;
      FUN_005a2940(&local_44,&local_a4,uVar2,uVar3,0x40000000);
    }
    else {
      FUN_00423b60(&local_98,&local_5c,&local_68);
      local_98 = local_98 * fVar1;
      local_94 = local_94 * fVar1;
      local_90 = local_90 * fVar1;
      FUN_004d7270(&local_68);
      FUN_00423b60(&local_a4,&local_44,&local_68);
      local_a4 = local_68 + local_a4 * fVar1;
      local_a0 = local_a0 * fVar1 + local_64;
      local_9c = local_9c * fVar1 + local_60;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      local_c = local_a4;
      local_8 = local_a0;
      local_4 = local_9c;
      FUN_00423b60(&local_78,&local_44,&local_50);
      local_98 = local_50 + local_78 * fVar1;
      local_94 = local_4c + local_74 * fVar1;
      local_90 = local_48 + local_70 * fVar1;
      FUN_00423b60(&local_78,&local_5c,&local_50);
      local_a4 = local_50 + local_78 * fVar1;
      local_a0 = local_4c + local_74 * fVar1;
      local_9c = local_48 + local_70 * fVar1;
      local_88 = local_a0 + _DAT_005c75dc;
      local_8c = local_a4;
      local_84 = local_9c;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00423b60(&local_78,&local_68,&local_5c);
      local_98 = local_5c + local_78 * fVar1;
      local_94 = local_58 + local_74 * fVar1;
      local_90 = local_54 + local_70 * fVar1;
      FUN_00423b60(&local_78,&local_50,&local_5c);
      local_a4 = local_5c + local_78 * fVar1;
      local_a0 = local_58 + local_74 * fVar1;
      local_9c = local_54 + local_70 * fVar1;
      local_38 = local_a4;
      local_34 = local_a0;
      local_30 = local_9c;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00423b60(&local_78,&local_68,&local_44);
      local_98 = local_44 + local_78 * fVar1;
      local_94 = local_40 + local_74 * fVar1;
      local_90 = local_3c + local_70 * fVar1;
      FUN_00423b60(&local_78,&local_50,&local_44);
      local_a4 = local_44 + local_78 * fVar1;
      local_1c = local_98;
      local_a0 = local_40 + local_74 * fVar1;
      local_14 = local_90;
      local_9c = local_3c + local_70 * fVar1;
      local_18 = local_94 + _DAT_005c75dc;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      if (param_4 != '\0') {
        FUN_005a2940(&local_c,&local_1c,uVar2,uVar3,0x40000000);
        FUN_005a2940(&local_38,&local_8c,uVar2,uVar3,0x40000000);
      }
    }
    if (*(char *)(param_1 + 0x2e) == '\0') {
      if (param_4 == '\0') {
        return;
      }
      fVar1 = fVar1 * local_80;
      local_20 = fVar1 + fVar1;
      local_7c = -fVar1;
      local_a4 = local_6c + local_2c;
      local_a0 = local_28 + fVar1;
      uVar2 = CONCAT31(CONCAT21(CONCAT11(param_2[3],*param_2),param_2[1]),param_2[2]);
      local_9c = local_24;
      uVar3 = (uint)CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]);
      local_98 = local_6c + local_2c;
      local_94 = local_7c + local_28;
      local_90 = local_24;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_98 + local_20,local_94 + fVar1,local_90);
      FUN_005a2940(&local_98,&local_38,uVar2,uVar3,0x40000000);
      local_38 = local_a4 + local_20;
      local_34 = local_a0 + local_7c;
      local_30 = local_9c;
      FUN_005a2940(&local_a4,&local_38,uVar2,uVar3,0x40000000);
      local_a4 = local_2c + local_80;
      local_a0 = local_28 + fVar1;
      local_9c = local_24;
      local_94 = local_7c + local_28;
      local_90 = local_24;
      local_98 = local_a4;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      local_10 = -local_20;
      local_38 = local_10 + local_98;
      local_34 = local_94 + fVar1;
      local_30 = local_90;
      FUN_005a2940(&local_98,&local_38,uVar2,uVar3,0x40000000);
      local_38 = local_10 + local_a4;
      local_34 = local_a0 + local_7c;
      local_30 = local_9c;
    }
    else {
      if (param_4 != '\0') {
        uVar2 = (uint)(byte)param_2[3] << 0x18 | 0xff;
        uVar3 = 0xff;
      }
      fVar1 = fVar1 * local_80;
      local_7c = fVar1 + fVar1;
      local_20 = local_7c * (float)_DAT_005cbf58;
      local_a4 = local_2c + local_6c;
      local_a0 = local_28 + fVar1;
      local_9c = local_24;
      local_98 = local_2c + local_6c;
      local_94 = -fVar1 + local_28;
      local_90 = local_24;
      local_6c = -fVar1;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_98 + local_7c,local_94 + local_20,local_90);
      FUN_005a2940(&local_98,&local_38,uVar2,uVar3,0x40000000);
      local_10 = -local_20;
      FUN_00422b80(local_a4 + local_7c,local_a0 + local_10,local_9c);
      FUN_005a2940(&local_a4,&local_38,uVar2,uVar3,0x40000000);
      local_a4 = local_2c + local_80;
      local_a0 = local_28 + fVar1;
      local_9c = local_24;
      local_94 = local_6c + local_28;
      local_90 = local_24;
      local_98 = local_a4;
      FUN_005a2940(&local_98,&local_a4,uVar2,uVar3,0x40000000);
      local_7c = -local_7c;
      FUN_00422b80(local_7c + local_98,local_94 + local_20,local_90);
      FUN_005a2940(&local_98,&local_38,uVar2,uVar3,0x40000000);
      FUN_00422b80(local_7c + local_a4,local_a0 + local_10,local_9c);
    }
    FUN_005a2940(&local_a4,&local_38,uVar2,uVar3,0x40000000);
  }
  return;
}

