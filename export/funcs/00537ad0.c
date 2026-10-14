
int __fastcall FUN_00537ad0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x34] + -1;
  param_1[0x34] = iVar1;
  if (iVar1 < 1) {
    (**(code **)*param_1)(1);
  }
  return iVar1;
}

