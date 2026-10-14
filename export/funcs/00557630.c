
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00557630(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,
            undefined4 param_5,float param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  
  param_1[0x1a] = 0;
  fVar1 = _DAT_005c7474;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  param_1[0xd] = param_5;
  param_1[0xe] = param_7;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = param_8;
  param_1[0x10] = 0x3f800000;
  if (fVar1 < param_4) {
    fVar1 = _DAT_005c75dc / param_4;
    param_1[0xc] = fVar1;
    if (param_4 < param_6) {
      param_1[0x10] = fVar1 * param_4;
      return param_1;
    }
    param_1[0x10] = fVar1 * param_6;
  }
  return param_1;
}

