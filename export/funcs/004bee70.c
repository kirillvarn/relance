
void __thiscall FUN_004bee70(int param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x331);
  *(byte *)(*(int *)(param_1 + 8) + 0x331) = (bVar1 ^ param_2 << 2) & 4 ^ bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x331);
  *(byte *)(*(int *)(param_1 + 8) + 0x331) = (param_2 << 3 ^ bVar1) & 8 ^ bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 0x331);
  *(byte *)(*(int *)(param_1 + 0xc) + 0x331) = (bVar1 ^ param_2 << 2) & 4 ^ bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 0x331);
  *(byte *)(*(int *)(param_1 + 0xc) + 0x331) = (bVar1 ^ param_2 << 3) & 8 ^ bVar1;
  return;
}

