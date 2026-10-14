
void FUN_005ae5f0(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x34) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x35) = 0;
  return;
}

