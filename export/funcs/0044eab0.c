
int __fastcall FUN_0044eab0(int param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9dbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0xa8) = local_11;
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)(param_1 + 0xac) = pvVar1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_4 = 0;
  FUN_0044ebf0();
  ExceptionList = local_c;
  return param_1;
}

