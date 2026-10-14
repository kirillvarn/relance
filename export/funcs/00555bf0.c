
int __thiscall FUN_00555bf0(int *param_1,int param_2)

{
  void *pvVar1;
  
  param_1[3] = param_2;
  param_1[4] = param_2;
  if (param_2 != -1) {
    *param_1 = 0;
    (**(code **)(**(int **)Anim_exref + 0x1c))(*(int **)Anim_exref,&LAB_00555b90,param_2,param_1);
    pvVar1 = operator_new(*param_1 << 2);
    param_1[1] = (int)pvVar1;
    pvVar1 = operator_new(*param_1 << 2);
    param_1[2] = (int)pvVar1;
    param_1[5] = 0;
    (**(code **)(**(int **)Anim_exref + 0x1c))(*(int **)Anim_exref,FUN_00555ba0,param_1[4],param_1);
  }
  param_1[4] = -1;
  param_1[5] = 0;
  return *param_1;
}

