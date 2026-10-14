
void FUN_00433650(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x24) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x25) = 0;
  return;
}

