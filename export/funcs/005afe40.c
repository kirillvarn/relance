
void FUN_005afe40(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x14);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x10) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x11) = 0;
  return;
}

