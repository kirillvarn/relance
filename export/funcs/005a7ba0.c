
void FUN_005a7ba0(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x54) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x55) = 0;
  return;
}

