
int * __thiscall FUN_00426f80(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x34))(*(int **)TextureLib_exref,iVar1,0);
  }
  param_1[1] = param_2[1];
  return param_1;
}

