
void __thiscall FUN_004287f0(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xc) = (*(byte *)(param_1 + 0xc) ^ param_2) & 1 ^ *(byte *)(param_1 + 0xc);
  return;
}

