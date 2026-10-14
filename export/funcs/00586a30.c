
void __thiscall FUN_00586a30(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x518) =
       (param_2 << 2 ^ *(byte *)(param_1 + 0x518)) & 4 ^ *(byte *)(param_1 + 0x518);
  return;
}

