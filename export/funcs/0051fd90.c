
int * FUN_0051fd90(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    for (; iVar2 = *param_1, *(float *)(param_3 + 4) < *(float *)(iVar2 + 4); param_1 = param_1 + 1)
    {
    }
    do {
      piVar1 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (*(float *)(*piVar1 + 4) < *(float *)(param_3 + 4));
    if (param_2 <= param_1) break;
    *param_1 = *param_2;
    *param_2 = iVar2;
    param_1 = param_1 + 1;
  }
  return param_1;
}

