
void __fastcall FUN_00562f60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e20ec;
  param_1[0x1f] = &PTR_OnReceive_005e20e0;
  local_4 = 0;
  FUN_005b7ec6(param_1 + 0xce,0xc,5,&LAB_00562a50);
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

