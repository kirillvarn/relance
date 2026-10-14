
void __fastcall FUN_00451240(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9e28;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  HardpointSummary::~HardpointSummary((HardpointSummary *)(param_1 + 0x170));
  local_4 = 0xffffffff;
  FUN_0044fd80();
  ExceptionList = local_c;
  return;
}

