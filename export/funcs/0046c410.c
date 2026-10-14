
void __fastcall FUN_0046c410(int param_1)

{
  code *local_14;
  int local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bb8e9;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x498) != 0) {
    ExceptionList = &local_c;
    FUN_0057b370();
    local_10 = *(int *)(param_1 + 0x498) + 4;
    local_14 = _vftable__exref;
    local_4 = 0;
    FUN_0057b470(&local_14);
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
    *(undefined4 *)(param_1 + 0x49c) = **(undefined4 **)(param_1 + 0x498);
  }
  ExceptionList = local_c;
  return;
}

