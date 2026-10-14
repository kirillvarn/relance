
void __thiscall FUN_004bd4b0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  FmtStr::~FmtStr((FmtStr *)(param_3 + 2));
  FUN_005b7e1d(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar1;
  return;
}

