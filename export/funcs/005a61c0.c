
void FUN_005a61c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005416c0(param_2,1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == 1)) {
    *(byte *)(iVar1 + 0x18c) = *(byte *)(iVar1 + 0x18c) | 4;
    FUN_0046b500(param_2);
  }
  DAT_006724b0 = DAT_006724b0 + 1;
  return;
}

