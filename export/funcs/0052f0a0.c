
void __fastcall FUN_0052f0a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c05a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005ddbfc;
  local_4 = 0;
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 0x10))();
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 0x10))();
  }
  local_4 = 0xffffffff;
  FUN_00429140();
  ExceptionList = pvStack_c;
  return;
}

