
undefined4
FUN_0042dcd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004fd560(param_1);
  if (((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) && (*(int *)(iVar1 + 0xc) < 7)) {
    uVar2 = FUN_0042da00(param_2,param_3,*(undefined4 *)(iVar1 + 0x10),param_4);
    return uVar2;
  }
  *param_4 = 0x3f800000;
  return 1;
}

