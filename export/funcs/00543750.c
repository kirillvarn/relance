
void FUN_00543750(int param_1)

{
  int iVar1;
  
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) ||
     ((*(uint *)(iVar1 + 0x4c) & 0x303) != 0x303)) {
    iVar1 = 0;
  }
  param_1 = *(undefined4 *)(iVar1 + 0x1b4);
  FUN_00548ed0(&param_1,0);
  return;
}

