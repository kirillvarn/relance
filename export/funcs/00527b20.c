
void __fastcall FUN_00527b20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c01f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005dd084;
  local_4 = 0;
  FUN_004293e0();
  (**(code **)(*(int *)param_1[0x19] + 0x10))();
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_005c9efc;
  FUN_00429140();
  ExceptionList = pvStack_c;
  return;
}

