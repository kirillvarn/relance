
void FUN_0041a6f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)MaterialBatcher_exref;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x48))(*(int **)MaterialBatcher_exref,param_2);
  }
  return;
}

