
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004114f0(int param_1,byte *param_2)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = param_2[2];
  fVar2 = (float)param_2[1] * _DAT_005c7f68;
  *(float *)(param_1 + 0xa4) = (float)*param_2 * _DAT_005c7f68;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(float *)(param_1 + 0xa8) = fVar2;
  *(float *)(param_1 + 0xac) = (float)bVar1 * _DAT_005c7f68;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xac);
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  return;
}

