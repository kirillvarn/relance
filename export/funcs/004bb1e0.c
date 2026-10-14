
void __fastcall FUN_004bb1e0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd3d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d5a8c;
  param_1[0x1f] = &PTR_OnReceive_005d5a80;
  local_4 = 0;
  DAT_00672400 = 0;
  if (DAT_0067232c == 0) {
    iVar1 = FUN_0059da10("MissionLogMoveToNNWindow");
    if (iVar1 == 0) {
      FUN_0059db20("MissionLogMoveToNNWindow","MissionLogMoveToNNWindow",0,0);
    }
  }
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

