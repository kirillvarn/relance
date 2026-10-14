
void __thiscall
FUN_00585cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  *(undefined4 *)(param_1 + 0x4fc) = param_2;
  *(undefined4 *)(param_1 + 0x500) = param_3;
  *(undefined4 *)(param_1 + 0x504) = param_4;
  *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
  *(byte *)(param_1 + 0x518) = (param_5 & 1) << 5 ^ *(byte *)(param_1 + 0x518) & 0xcf;
  return;
}

