
undefined4 * FUN_00530620(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c063b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc0);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005392d0(10);
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined1 *)(puVar1 + 0x2f) = 1;
    *puVar1 = &PTR_LAB_005dddd4;
    puVar1[1] = &PTR_LAB_005ddd54;
    puVar1[3] = &PTR_FUN_005ddd4c;
  }
  local_4 = 0xffffffff;
  puVar1[4] = param_1;
  CBase::advise((CBase *)(puVar1 + 3),true);
  FUN_005301d0(param_2);
  FUN_00540c30(puVar1,0);
  ExceptionList = local_c;
  return puVar1;
}

