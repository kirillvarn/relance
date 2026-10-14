
void FUN_0046ea00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bb981;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    uVar1 = (**(code **)(*(int *)*param_2 + 0x1c))();
    *param_1 = uVar1;
  }
  ExceptionList = local_c;
  return;
}

