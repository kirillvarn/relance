
void FUN_004f4c50(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0041dd90();
  if (cVar1 != '\0') {
    iVar2 = FUN_005792b0(6);
    if (iVar2 != 0) {
      iVar2 = FUN_005792b0(10);
      if (iVar2 != 0) {
        iVar2 = FUN_0054baf0();
        if (iVar2 != 0) {
          FUN_005a0c30(0);
          FUN_005a17b0();
          return;
        }
      }
    }
  }
  FUN_005a0c30(1);
  return;
}

