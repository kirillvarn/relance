
void __fastcall FUN_0056f610(int param_1)

{
  undefined4 uVar1;
  code *local_18;
  code *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c304b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057b370();
  uVar1 = StyleNode::StyleNode((StyleNode *)&local_14,0x4433);
  local_4 = 0;
  FUN_0057b470(uVar1);
  local_4 = 0xffffffff;
  StyleNode::~StyleNode((StyleNode *)&local_14);
  local_10 = param_1 + 0x188;
  local_14 = _vftable__exref;
  local_4 = 1;
  FUN_0057b470(&local_14);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
  local_18 = _vftable__exref;
  local_4 = 2;
  FUN_0057b470(&local_18);
  ExceptionList = local_c;
  return;
}

