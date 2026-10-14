
undefined4 __thiscall FUN_0044e340(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d2b;
  local_c = ExceptionList;
  uVar1 = 0;
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0xac);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00453d70(param_1,param_1,param_3);
    }
    local_4 = 0xffffffff;
    FUN_00453e60(*(undefined4 *)(param_3 + 0x3c));
  }
  ExceptionList = local_c;
  return uVar1;
}

