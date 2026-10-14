
void __fastcall FUN_004438a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b9743;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005cb8d4;
  local_4 = 1;
  FUN_00457e30();
  if (param_1[0xc] != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,param_1[0xc]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00457dc0();
  local_4 = 0xffffffff;
  FUN_005594b0();
  ExceptionList = pvStack_c;
  return;
}

