
void FUN_004f3800(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x44) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x45) = 0;
  return;
}

