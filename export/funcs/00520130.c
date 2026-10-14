
void FUN_00520130(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_005792b0(0x21);
  puVar2 = DAT_006753c4;
  if (iVar3 != 0) {
    for (puVar1 = (undefined4 *)*DAT_006753c4; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
      FUN_00522070(param_1,param_2);
    }
  }
  return;
}

