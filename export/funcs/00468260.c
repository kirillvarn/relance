
void __fastcall FUN_00468260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x3b0) != 0) &&
     (*(int *)(param_1 + 0x330) != *(int *)(*(int *)(param_1 + 0x3b0) + 0x14))) {
    FUN_00468310();
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c8) + 0x4a4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c8) + 0x4a8) - iVar1 >> 2;
    }
    uVar2 = FUN_0058f730(iVar1);
    FUN_004669c0(uVar2,iVar1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c4) + 0x4a4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c4) + 0x4a8) - iVar1 >> 2;
    }
    uVar2 = FUN_0058f730(iVar1);
    FUN_00465110(uVar2,iVar1);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(*(int *)(param_1 + 0x3b0) + 0x14);
  }
  FUN_005a17b0();
  return;
}

