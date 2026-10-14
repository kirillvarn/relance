
void FUN_0044cde0(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0xd) = param_2;
  *(undefined1 *)((int)pvVar1 + 0xe) = 0;
  return;
}

