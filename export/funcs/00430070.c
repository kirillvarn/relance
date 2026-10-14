
void FUN_00430070(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x4c);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x48) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x49) = 0;
  return;
}

