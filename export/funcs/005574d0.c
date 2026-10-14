
void __fastcall FUN_005574d0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 local_14 [4];
  undefined4 uStack_10;
  
  if (*param_1 != 0) {
    puStack_20 = (undefined1 *)0x25;
    uStack_24 = 0x5574e3;
    iVar2 = FUN_005792b0();
    if (iVar2 != 0) {
      puStack_20 = (undefined1 *)0x26;
      uStack_24 = 0x5574f1;
      iVar2 = FUN_005792b0();
      if (iVar2 != 0) {
        puStack_20 = local_14;
        uStack_24 = 0;
        (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1);
        iVar2 = (**(code **)(*(int *)*param_1 + 0x3c))((int *)*param_1,&stack0xffffffe4);
        if (-1 < iVar2) {
          cVar1 = FUN_0041c8d0(uStack_10,&uStack_24,unaff_ESI);
          if (cVar1 != '\0') {
            (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,uStack_10);
          }
        }
      }
    }
  }
  return;
}

