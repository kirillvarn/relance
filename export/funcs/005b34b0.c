
uint FUN_005b34b0(int param_1,uint param_2,uint param_3)

{
  return (param_2 & 0xff | param_1 << 8) << 0x10 | param_3 & 0xffff;
}

