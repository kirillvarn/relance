
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0054e130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,float *param_6,float *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  float10 fVar2;
  float local_15c;
  int local_158;
  byte local_154;
  byte local_153;
  byte local_152;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  int local_40 [16];
  
  local_134 = FUN_00537f40(local_40,0x10,param_2,0x42c80000,0);
  FUN_00410280(&local_154);
  *param_7 = (float)local_154;
  param_7[1] = (float)local_153;
  param_7[2] = (float)local_152;
  FUN_00507ea0(*(float *)(param_1 + 0x70) * _DAT_005c7f68);
  FUN_00422b80(*(float *)(param_1 + 0x58) * *param_7,*(float *)(param_1 + 0x5c) * param_7[1],
               *(float *)(param_1 + 0x60) * param_7[2]);
  *param_7 = local_150;
  param_7[1] = local_14c;
  param_7[2] = local_148;
  FUN_00422b80(*param_7 * *(float *)(param_1 + 100),*(float *)(param_1 + 0x68) * param_7[1],
               *(float *)(param_1 + 0x6c) * param_7[2]);
  *param_7 = local_150;
  param_7[1] = local_14c;
  param_7[2] = local_148;
  *param_10 = local_150;
  param_10[1] = local_14c;
  param_10[2] = local_148;
  *param_9 = local_150;
  param_9[1] = local_14c;
  param_9[2] = local_148;
  *param_8 = local_150;
  param_8[1] = local_14c;
  param_8[2] = local_148;
  *param_6 = local_150;
  param_6[1] = local_14c;
  param_6[2] = local_148;
  local_138 = 0;
  local_158 = 0;
  if (0 < local_134) {
    do {
      if (*(int *)(param_1 + 0x48) <= local_138) break;
      if (*(int *)(local_40[local_158] + 0xb0) == 3) {
        local_130 = 0;
        local_12c = 0;
        local_128 = 0;
        FUN_00410960(param_2,&local_150,&local_130,&local_144);
        FUN_00422b80(local_144 * *(float *)(param_1 + 0x4c),local_140 * *(float *)(param_1 + 0x50),
                     local_13c * *(float *)(param_1 + 0x54));
        local_144 = local_124;
        local_140 = local_120;
        local_13c = local_11c;
        FUN_00411d60(local_94,param_5,_DAT_006140a8);
        FUN_00423b30(local_f4,param_3,local_94);
        FUN_0041a390();
        fVar2 = (float10)FUN_004cbf40(local_f4,&local_150);
        if (-(float10)_DAT_006140ac <= fVar2) {
          local_15c = (float)((fVar2 + (float10)_DAT_006140ac) /
                             ((float10)_DAT_006140ac + (float10)_DAT_005c75dc));
        }
        else {
          local_15c = 0.0;
        }
        FUN_004d7270(&local_130);
        FUN_00411d60(local_ac,&local_144,local_15c);
        FUN_004d7270(local_ac);
        FUN_00411350(local_4c);
        FUN_00411d60(local_c4,local_4c,_DAT_006140a8);
        FUN_00423b30(local_dc,param_3,local_c4);
        FUN_0041a390();
        fVar2 = (float10)FUN_004cbf40(local_dc,&local_150);
        if (-(float10)_DAT_006140ac <= fVar2) {
          local_15c = (float)((fVar2 + (float10)_DAT_006140ac) /
                             ((float10)_DAT_006140ac + (float10)_DAT_005c75dc));
        }
        else {
          local_15c = 0.0;
        }
        FUN_004d7270(&local_130);
        FUN_00411d60(local_64,&local_144,local_15c);
        FUN_004d7270(local_64);
        FUN_00411d60(local_7c,param_4,_DAT_006140a8);
        FUN_00423b30(local_100,param_3,local_7c);
        FUN_0041a390();
        fVar2 = (float10)FUN_004cbf40(local_100,&local_150);
        if (-(float10)_DAT_006140ac <= fVar2) {
          local_15c = (float)((fVar2 + (float10)_DAT_006140ac) /
                             ((float10)_DAT_006140ac + (float10)_DAT_005c75dc));
        }
        else {
          local_15c = 0.0;
        }
        FUN_004d7270(&local_130);
        FUN_00411d60(local_b8,&local_144,local_15c);
        FUN_004d7270(local_b8);
        FUN_00411350(local_a0);
        FUN_00411d60(local_88,local_a0,_DAT_006140a8);
        FUN_00423b30(local_e8,param_3,local_88);
        FUN_0041a390();
        fVar2 = (float10)FUN_004cbf40(local_e8,&local_150);
        if (-(float10)_DAT_006140ac <= fVar2) {
          local_15c = (float)((fVar2 + (float10)_DAT_006140ac) /
                             ((float10)_DAT_006140ac + (float10)_DAT_005c75dc));
        }
        else {
          local_15c = 0.0;
        }
        FUN_004d7270(&local_130);
        FUN_00411d60(local_70,&local_144,local_15c);
        FUN_004d7270(local_70);
        local_118 = 0;
        local_114 = 0;
        local_110 = 0;
        FUN_00411d60(local_58,&local_118,_DAT_006140a8);
        FUN_00423b30(local_d0,param_3,local_58);
        FUN_0041a390();
        fVar2 = (float10)FUN_004cbf40(local_d0,&local_150);
        if (-(float10)_DAT_006140ac <= fVar2) {
          local_15c = (float)((fVar2 + (float10)_DAT_006140ac) /
                             ((float10)_DAT_006140ac + (float10)_DAT_005c75dc));
        }
        else {
          local_15c = 0.0;
        }
        FUN_004d7270(&local_130);
        FUN_00411d60(&local_10c,&local_144,local_15c);
        *param_6 = local_10c + *param_6;
        param_6[1] = local_108 + param_6[1];
        param_6[2] = local_104 + param_6[2];
        local_138 = local_138 + 1;
      }
      local_158 = local_158 + 1;
    } while (local_158 < local_134);
  }
  fVar1 = _DAT_005c75dc;
  if (*param_7 < _DAT_005c75dc) {
    fVar1 = *param_7;
  }
  *param_7 = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_7[1] < _DAT_005c75dc) {
    fVar1 = param_7[1];
  }
  param_7[1] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_7[2] < _DAT_005c75dc) {
    fVar1 = param_7[2];
  }
  param_7[2] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (*param_8 < _DAT_005c75dc) {
    fVar1 = *param_8;
  }
  *param_8 = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_8[1] < _DAT_005c75dc) {
    fVar1 = param_8[1];
  }
  param_8[1] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_8[2] < _DAT_005c75dc) {
    fVar1 = param_8[2];
  }
  param_8[2] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (*param_9 < _DAT_005c75dc) {
    fVar1 = *param_9;
  }
  *param_9 = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_9[1] < _DAT_005c75dc) {
    fVar1 = param_9[1];
  }
  param_9[1] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_9[2] < _DAT_005c75dc) {
    fVar1 = param_9[2];
  }
  param_9[2] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (*param_10 < _DAT_005c75dc) {
    fVar1 = *param_10;
  }
  *param_10 = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_10[1] < _DAT_005c75dc) {
    fVar1 = param_10[1];
  }
  param_10[1] = fVar1;
  fVar1 = _DAT_005c75dc;
  if (param_10[2] < _DAT_005c75dc) {
    fVar1 = param_10[2];
  }
  param_10[2] = fVar1;
  FUN_00521fa0(param_6);
  return;
}

