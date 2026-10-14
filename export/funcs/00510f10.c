
void __fastcall FUN_00510f10(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_005db658;
  if (param_1[4] != 0) {
    FUN_005b7e1d(param_1[4]);
  }
  param_1[4] = 0;
  if (param_1[3] != 0) {
    FUN_005b7e1d(param_1[3]);
  }
  param_1[3] = 0;
  if (param_1[5] != 0) {
    FUN_005b7e1d(param_1[5]);
  }
  iVar1 = param_1[6];
  param_1[5] = 0;
  if (iVar1 != 0) {
    FUN_0050f340();
    FUN_005b7e1d(iVar1);
  }
  iVar1 = param_1[7];
  param_1[6] = 0;
  if (iVar1 != 0) {
    FUN_0050fb50();
    FUN_005b7e1d(iVar1);
  }
  param_1[7] = 0;
  return;
}

