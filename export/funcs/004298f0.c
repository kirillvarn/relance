
int FUN_004298f0(int *param_1)

{
  if ((*(byte *)(param_1 + 3) & 0x10) == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  return param_1[5];
}

