
void FUN_0045a000(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x1c) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x1d) = 0;
  return;
}

