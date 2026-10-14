
void FUN_0054f800(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while (iVar2 != 0) {
    (**(code **)(*param_1 + 0xf0))(param_1,iVar2,param_2[1]);
    piVar1 = param_2 + 2;
    param_2 = param_2 + 2;
    iVar2 = *piVar1;
  }
  return;
}

