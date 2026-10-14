
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0040f150(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[9] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x16] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_LAB_005c8944;
  param_1[9] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x28] = 0x3faaaaab;
  uVar4 = DAT_00610534;
  uVar3 = _DAT_00610530;
  param_1[0x1c] = 0x43a00000;
  param_1[0x29] = uVar3;
  param_1[0x1d] = 0x43700000;
  param_1[0x2a] = uVar4;
  param_1[0x26] = 0x420c0000;
  fVar5 = (float10)fptan((float10)_DAT_005c8938);
  fVar1 = (float)((float10)_DAT_005c8930 * fVar5);
  fVar6 = (float10)fpatan((float10)_DAT_005c8930 * fVar5,(float10)1);
  param_1[0x27] = (float)(fVar6 * (float10)_DAT_005c8928);
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x22] = (float)fVar5;
  fVar2 = _DAT_005c75dc /
          SQRT((float)param_1[0x22] * (float)param_1[0x22] +
               (float)param_1[0x21] * (float)param_1[0x21] +
               (float)param_1[0x20] * (float)param_1[0x20]);
  param_1[0x20] = fVar2 * (float)param_1[0x20];
  param_1[0x21] = fVar2 * (float)param_1[0x21];
  param_1[0x22] = fVar2 * (float)param_1[0x22];
  if ((float10)_DAT_005c7474 < fVar5) {
    param_1[0x1e] = (float)((float10)(float)param_1[0x1c] / fVar5);
  }
  param_1[0x25] = fVar1;
  param_1[0x24] = 0x3f800000;
  param_1[0x23] = 0;
  fVar2 = _DAT_005c75dc /
          SQRT((float)param_1[0x25] * (float)param_1[0x25] +
               (float)param_1[0x24] * (float)param_1[0x24] +
               (float)param_1[0x23] * (float)param_1[0x23]);
  param_1[0x23] = fVar2 * (float)param_1[0x23];
  param_1[0x24] = fVar2 * (float)param_1[0x24];
  param_1[0x25] = fVar2 * (float)param_1[0x25];
  if (_DAT_005c7474 < fVar1) {
    param_1[0x1f] = -((float)param_1[0x1d] / fVar1);
  }
  return param_1;
}

