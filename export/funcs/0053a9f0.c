
uint __fastcall FUN_0053a9f0(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)*(int *)(param_1 + 0x7c) >> 8);
  if (*(int *)(param_1 + 0x7c) != DAT_00610850) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,*(byte *)(param_1 + 0x44) >> 3) & 0xffffff01;
}

