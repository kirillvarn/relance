
bool __thiscall FUN_00420d70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    FUN_0041b030(param_1 + 8);
    FUN_0041b030(param_1 + 0xc);
  }
  iVar1 = (**(code **)(**(int **)Engine_exref + 0x5c))(*(int **)Engine_exref,param_2,0);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 != -1;
}

