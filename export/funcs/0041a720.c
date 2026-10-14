
void FUN_0041a720(void)

{
  int *piVar1;
  
  piVar1 = *(int **)MaterialBatcher_exref;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))(piVar1,0);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x48))(*(int **)MaterialBatcher_exref,0);
  }
  return;
}

