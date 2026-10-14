
void __thiscall FUN_00458160(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + param_2 * 4);
  if (iVar1 != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,iVar1);
    *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4) = 0;
  return;
}

