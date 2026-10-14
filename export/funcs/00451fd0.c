
undefined4 * __thiscall
FUN_00451fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9e5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fbe0(param_2,param_3,param_4);
  local_4 = 0;
  FUN_005b7fba(param_1 + 0x1e,0x10,0x20,&LAB_00451f50,IDPMsgHandler::OnDisconnect);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005b7fba(param_1 + 0x9e,0x3c,0x20,&LAB_00451f70,IDPMsgHandler::OnDisconnect);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_LAB_005cd1ec;
  param_1[1] = &PTR_LAB_005cd1b8;
  param_1[2] = &PTR_LAB_005cd19c;
  param_1[3] = &PTR_LAB_005cd17c;
  param_1[4] = &PTR_LAB_005cd144;
  param_1[5] = &PTR_LAB_005cd11c;
  param_1[6] = &PTR_LAB_005cd0f8;
  param_1[7] = &PTR_LAB_005cd0c0;
  param_1[8] = &PTR_LAB_005cd0a8;
  ExceptionList = local_c;
  return param_1;
}

