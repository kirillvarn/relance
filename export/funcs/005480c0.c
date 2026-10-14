
void __thiscall FUN_005480c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004f7d20(param_2,param_3,param_4);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x94))(param_3,param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005377c0(param_3,param_4);
  }
  return;
}

