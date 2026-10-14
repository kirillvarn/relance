
void __fastcall FUN_004d6100(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0041dd90();
  if (cVar1 != '\0') {
    iVar2 = FUN_0054baf0();
    if (iVar2 != 0) {
      FUN_005a0c30(0);
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 1;
      FUN_005a17b0();
      return;
    }
  }
  FUN_005a0c30(1);
  FUN_005a17b0();
  return;
}

