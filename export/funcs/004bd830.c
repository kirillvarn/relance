
undefined4 __thiscall FUN_004bd830(int param_1,undefined4 param_2)

{
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  FUN_005a1c50();
  *(undefined4 *)(param_1 + 0xb4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xb8) = 0x3dcccccd;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
  *(undefined4 *)(param_1 + 0x78) = 7;
  return 0x3dcccc01;
}

