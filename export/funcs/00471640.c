
void FUN_00471640(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x18) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x19) = 0;
  return;
}

