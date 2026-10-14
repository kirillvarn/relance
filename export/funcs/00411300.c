
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411300(int param_1,float param_2)

{
  *(float *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x68) = _DAT_005c8a60 / (param_2 * param_2);
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  return;
}

