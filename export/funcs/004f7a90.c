
int __fastcall FUN_004f7a90(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x16] + -1;
  param_1[0x16] = iVar1;
  if (iVar1 < 1) {
    (**(code **)(*param_1 + 0x20))(1);
  }
  return iVar1;
}

