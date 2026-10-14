
void FUN_0042a9a0(int *param_1,int param_2)

{
  int iVar1;
  
  while (((param_2 != 0 && (iVar1 = param_1[-1], iVar1 != 0)) &&
         (*(float *)(iVar1 + 0x28) < *(float *)(param_2 + 0x28)))) {
    *param_1 = iVar1;
    param_1 = param_1 + -1;
  }
  *param_1 = param_2;
  return;
}

