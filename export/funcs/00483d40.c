
void __thiscall FUN_00483d40(int param_1,uint param_2)

{
  GoodInfo *pGVar1;
  GoodInfo *pGVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x978) == 2) {
    *(undefined4 *)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x32c);
    pGVar1 = GoodList::find_by_id(param_2);
    if (pGVar1 != (GoodInfo *)0x0) {
      *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(pGVar1 + 0x48);
      pGVar2 = GoodList::find_by_id(*(uint *)(pGVar1 + 0x90));
      *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(pGVar2 + 0x54);
      FUN_004c62b0(pGVar1 + 0x94,0);
      iVar3 = FUN_0043a510(DAT_0066873c);
      if (iVar3 != 0) {
        FUN_00438060(*(undefined4 *)(pGVar2 + 0x48));
        uVar4 = ftol();
        *(undefined4 *)(param_1 + 0x9f8) = uVar4;
      }
    }
  }
  return;
}

