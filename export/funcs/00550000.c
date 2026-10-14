
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00550000(int param_1,float param_2)

{
  *(float *)(param_1 + 0x74) = (_DAT_005c75dc - param_2) * _DAT_005c94f8 + param_2;
  *(float *)(param_1 + 0x78) =
       (_DAT_005c75dc - param_2 * param_2) * _DAT_005c8930 + param_2 * param_2;
  FUN_0054de10();
  return;
}

