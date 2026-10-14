
void __thiscall FUN_004fc8f0(int param_1,char param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = (param_2 << 1 ^ *(byte *)(param_1 + 0x70)) & 2 ^ *(byte *)(param_1 + 0x70);
  *(byte *)(param_1 + 0x70) = (param_3 << 2 ^ bVar1) & 4 ^ bVar1;
  return;
}

