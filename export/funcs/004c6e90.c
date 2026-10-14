
undefined4 FUN_004c6e90(uint param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  GoodInfoList *this;
  GoodInfo *pGVar3;
  undefined4 uVar4;
  
  if (((param_1 != 0) && (DAT_0066873c != 0)) && (iVar2 = FUN_0043a510(DAT_0066873c), iVar2 != 0)) {
    this = GoodList_get();
    pGVar3 = GoodInfoList::find_by_ship_arch(this,param_1);
    if (pGVar3 != (GoodInfo *)0x0) {
      FUN_00438060(*(undefined4 *)(pGVar3 + 0x48));
      uVar4 = ftol();
      if (param_2 == '\0') {
        return uVar4;
      }
      FUN_004c4f70();
      iVar2 = FUN_004c3f00();
      for (puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + 4);
          puVar1 != *(undefined4 **)(iVar2 + 4); puVar1 = (undefined4 *)*puVar1) {
      }
      ftol();
      uVar4 = ftol();
      return uVar4;
    }
  }
  return 0;
}

