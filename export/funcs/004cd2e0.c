
int FUN_004cd2e0(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bda7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x5b8);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_004cd350(param_1);
    if (iVar2 != 0) {
      ExceptionList = local_c;
      return iVar2 + 0x7c;
    }
  }
  ExceptionList = local_c;
  return 0;
}

