
void __fastcall FUN_004fd920(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf508;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005da3f8;
  local_4 = 0;
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 8))();
    FUN_00537ad0();
    param_1[0x26] = 0;
  }
  local_4 = 0xffffffff;
  FUN_004f8dd0();
  ExceptionList = pvStack_c;
  return;
}

