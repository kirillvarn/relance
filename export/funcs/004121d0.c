
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004121d0(undefined4 *param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    _DAT_0061650c = DAT_005c8b64;
    DAT_006105a8 = 0x3f800000;
  }
  DAT_006164f0 = *param_1;
  DAT_006164f4 = param_1[1];
  DAT_006164f8 = param_1[2];
  if (_DAT_005c7474 < param_2) {
    _DAT_0061650c = param_2;
  }
  DAT_00616510 = 0;
  DAT_006105ac = 1;
  DAT_00616514 = 1;
  _DAT_00616508 = (float)_DAT_005c89b8 / _DAT_0061650c;
  return;
}

