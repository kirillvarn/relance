
undefined1 __fastcall FUN_00448a20(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((DAT_00668ab0 != '\0') && (*(int *)(param_1 + 0x14) != -1)) {
    iVar3 = *(int *)(param_1 + 0x14) * 0x10;
    iVar1 = *(int *)(*(int *)(iVar3 + 4 + *(int *)(param_1 + 4)) + 0x38);
    if ((iVar1 != 0) && (*(int *)(iVar3 + *(int *)(param_1 + 4) + 8) != 0)) {
      FUN_00447c30(iVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

