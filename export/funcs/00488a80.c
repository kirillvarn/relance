
void FUN_00488a80(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  wchar_t *in_stack_0000101c;
  
  FUN_005b7e90();
  FUN_004347e0();
  swprintf((wchar_t *)&stack0x00000814,(size_t)&stack0x00000014,in_stack_0000101c);
  iVar1 = FUN_0059d9c0();
  if ((iVar1 == 0) && (piVar2 = (int *)FUN_0059db20(), piVar2 != (int *)0x0)) {
    in_stack_00000014 = 0;
    in_stack_00000018 = 0;
    in_stack_0000001c = 0;
    (**(code **)(*piVar2 + 0xa8))();
    (**(code **)(*piVar2 + 0x80))();
  }
  return;
}

