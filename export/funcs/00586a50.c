
void __thiscall FUN_00586a50(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x518) =
       (param_2 << 3 ^ *(byte *)(param_1 + 0x518)) & 8 ^ *(byte *)(param_1 + 0x518);
  return;
}

