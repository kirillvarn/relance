
void __thiscall FUN_00425680(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,*param_1);
    *param_1 = 0;
  }
  *param_1 = param_2;
  if (param_2 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x34))(*(int **)TextureLib_exref,param_2,0);
  }
  return;
}

