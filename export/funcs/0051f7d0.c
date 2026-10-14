
void FUN_0051f7d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00540fc0(&param_1);
  uVar1 = param_2;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    FUN_0051f2c0(iVar2,uVar1);
  }
  return;
}

