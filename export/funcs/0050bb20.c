
void FUN_0050bb20(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_3;
  while (iVar2 != 0) {
    (**(code **)(*param_1 + 0xf8))(param_1,param_2,iVar2,param_3[1]);
    piVar1 = param_3 + 2;
    param_3 = param_3 + 2;
    iVar2 = *piVar1;
  }
  return;
}

