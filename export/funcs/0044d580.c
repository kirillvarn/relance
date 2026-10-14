
void __fastcall FUN_0044d580(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005cc0a4;
  local_4 = 0;
  iVar1 = FUN_0059da10("NN_MissionVendor");
  if (iVar1 != 0) {
    FUN_0048c720();
  }
  *param_1 = &PTR_LAB_005cc084;
  ExceptionList = local_c;
  return;
}

