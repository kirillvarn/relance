
undefined4 __thiscall FUN_004b5060(int param_1,undefined4 param_2)

{
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  return 1;
}

