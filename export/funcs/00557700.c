
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00557700(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  param_1[0x1a] = 0;
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
  *param_1 = *(undefined4 *)(param_2 + 0x54);
  param_1[1] = *(undefined4 *)(param_2 + 0x58);
  param_1[2] = *(undefined4 *)(param_2 + 0x5c);
  param_1[3] = *(undefined4 *)(param_2 + 0x6c);
  param_1[4] = *(undefined4 *)(param_2 + 0x70);
  param_1[5] = *(undefined4 *)(param_2 + 0x74);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x78);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x7c);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x8c);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x90);
  param_1[0xc] = 0;
  param_1[0x10] = 0x3f800000;
  iVar3 = rand();
  fVar1 = ((float)iVar3 * _DAT_005caeec * (float)_DAT_005da4c0 + (float)_DAT_005da4b8) *
          *(float *)(param_2 + 0x80);
  if (_DAT_005c7474 < fVar1) {
    fVar2 = _DAT_005c75dc / fVar1;
    param_1[0xc] = fVar2;
    if (*(float *)(param_2 + 0x84) <= fVar1) {
      fVar1 = *(float *)(param_2 + 0x84);
    }
    param_1[0x10] = fVar2 * fVar1;
  }
  iVar3 = rand();
  param_1[0xd] = (float)iVar3 * _DAT_005caeec;
  return param_1;
}

