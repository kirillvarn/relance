
void __thiscall FUN_0053aa10(int param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = (param_2 << 3 ^ *(byte *)(param_1 + 0x44)) & 8 ^ *(byte *)(param_1 + 0x44);
  *(byte *)(param_1 + 0x44) = bVar1;
  if ((bVar1 & 8) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = DAT_00610850;
  }
  return;
}

