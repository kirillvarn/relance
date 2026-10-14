
void FUN_0040f110(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x14) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x15) = 0;
  return;
}

