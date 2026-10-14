
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00552530(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _DAT_005c75dc - param_2;
  *(float *)(param_1 + 8) = _DAT_005c75e0 * fVar1 + param_2;
  fVar1 = _DAT_005c75dc - fVar1 * fVar1;
  *(float *)(param_1 + 0xac) = (_DAT_005c75dc - fVar1) * _DAT_005e0e10 + fVar1;
  return;
}

