
int __fastcall FUN_00599980(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    param_1[1] = 1;
    (**(code **)*param_1)(1);
    iVar1 = 0;
  }
  return iVar1;
}

