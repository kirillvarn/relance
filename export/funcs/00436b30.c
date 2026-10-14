
void FUN_00436b30(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x2c) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x2d) = 0;
  return;
}

