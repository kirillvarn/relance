
uint __thiscall FUN_00576550(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & (*(char *)(param_3 + 0x18) == '\0') + 1) == 0) {
    return uVar1 & 0xffffff00;
  }
  uVar2 = (uint3)(uVar1 >> 8);
  if ((~uVar1 & -(uint)(*(char *)(param_3 + 0x19) != '\0') & 4) != 0) {
    return (uint)uVar2 << 8;
  }
  if ((uVar1 & 8) != 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)(*(int *)(param_2 + 4) == *(int *)(param_3 + 8));
}

