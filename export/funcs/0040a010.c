
void __fastcall FUN_0040a010(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 != *(int *)(param_1 + 0x48)) {
      do {
        FUN_005559c0();
        iVar1 = iVar1 + 0x24;
      } while (iVar1 != *(int *)(param_1 + 0x48));
    }
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xf7;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != *(int *)(param_1 + 0x68)) {
    do {
      FUN_005559c0();
      iVar1 = iVar1 + 0x24;
    } while (iVar1 != *(int *)(param_1 + 0x68));
  }
  return;
}

