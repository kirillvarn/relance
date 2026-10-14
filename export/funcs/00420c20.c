
void FUN_00420c20(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x5c);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x58) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x59) = 0;
  return;
}

