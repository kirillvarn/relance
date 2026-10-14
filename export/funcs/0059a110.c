
void __fastcall FUN_0059a110(int param_1)

{
  undefined4 uVar1;
  code *local_30;
  int local_2c;
  code *local_28;
  int local_24;
  TRANode local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4c1d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057b370();
  uVar1 = JustifyNode::JustifyNode((JustifyNode *)&local_30,1);
  local_4 = 0;
  FUN_0057b470(uVar1);
  local_4 = 0xffffffff;
  JustifyNode::~JustifyNode((JustifyNode *)&local_30);
  local_2c = param_1 + 0x4a8;
  local_30 = _vftable__exref;
  local_4 = 1;
  FUN_0057b470(&local_30);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_30);
  uVar1 = StyleNode::StyleNode((StyleNode *)&local_30,0x828b);
  local_4 = 2;
  FUN_0057b470(uVar1);
  local_4 = 0xffffffff;
  StyleNode::~StyleNode((StyleNode *)&local_30);
  uVar1 = TRANode::TRANode(local_20,(TextRenderAttributes *)(param_1 + 0x4c0),0xffffff00,0);
  local_4 = 3;
  FUN_0057b470(uVar1);
  local_4 = 0xffffffff;
  TRANode::~TRANode(local_20);
  local_24 = param_1 + 0x4b4;
  local_28 = _vftable__exref;
  local_4 = 4;
  FUN_0057b470(&local_28);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_28);
  ExceptionList = local_c;
  return;
}

