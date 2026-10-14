
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004dfc40(short *param_1,float param_2,short param_3)

{
  float fVar1;
  
  if (param_3 != *param_1) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 4);
    if (param_3 != *(short *)SUBOBJ_ID_NONE_exref) {
      FUN_005645c0(0x18);
    }
  }
  if ((_DAT_005c7474 < *(float *)(param_1 + 2)) &&
     (fVar1 = *(float *)(param_1 + 2), *(float *)(param_1 + 2) = fVar1 - param_2,
     fVar1 - param_2 < _DAT_005c7474)) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

