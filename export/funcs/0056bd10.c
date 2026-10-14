
void __fastcall FUN_0056bd10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (*(int *)(*(int *)(param_1 + 0xd8) + 0x8a4) + -0x14 < 1) {
    *(byte *)(iVar1 + 0x6c) = *(byte *)(iVar1 + 0x6c) & 0xfc;
    return;
  }
  *(byte *)(iVar1 + 0x6c) = *(byte *)(iVar1 + 0x6c) | 3;
  return;
}

