
void FUN_0042ca00(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3c);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x38) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x39) = 0;
  return;
}

