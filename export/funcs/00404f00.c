
void __thiscall FUN_00404f00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_1 = *param_2;
  for (iVar1 = 0xd; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
  }
  return;
}

