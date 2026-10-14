
void FUN_0053c370(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  DAT_006720a8 = *(undefined1 *)(param_2 + 8);
  iVar4 = param_2 + 0xc;
  FUN_004c46c0();
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (iVar3 == iVar1 + -1) {
        uVar2 = FUN_004c4ea0();
        uVar5 = *(undefined4 *)(iVar4 + 0x10);
      }
      else {
        uVar2 = *(undefined4 *)(iVar4 + 0xc);
        uVar5 = *(undefined4 *)(iVar4 + 0x10);
      }
      FUN_004c4780(iVar4,uVar5,uVar2);
      iVar1 = *(int *)(param_2 + 4);
      iVar4 = iVar4 + 0x14;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

