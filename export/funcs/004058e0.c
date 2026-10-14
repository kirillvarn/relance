
void __fastcall FUN_004058e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_005b7ec6(iVar1,0x1c,*(undefined4 *)(iVar1 + -4),FUN_004058b0);
    FUN_005b7e1d(iVar1 + -4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_005b7e1d(param_1[4]);
  param_1[4] = 0;
  return;
}

