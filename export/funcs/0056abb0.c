
void __fastcall FUN_0056abb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *local_1c;
  int local_18;
  StyleNode local_14 [8];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c2666;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0046b0e0();
  if (iVar1 != *(int *)(param_1 + 0x2ec)) {
    *(int *)(param_1 + 0x2ec) = iVar1;
    FUN_0057b370();
    uVar2 = JustifyNode::JustifyNode((JustifyNode *)&local_1c,1);
    local_4 = 0;
    FUN_0057b470(uVar2);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_1c);
    uVar2 = StyleNode::StyleNode((StyleNode *)&local_1c,0x4433);
    local_4 = 1;
    FUN_0057b470(uVar2);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_1c);
    local_18 = param_1 + 0x374;
    local_1c = _vftable__exref;
    local_4 = 2;
    FUN_0057b470(&local_1c);
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_1c);
    local_1c = _vftable__exref;
    local_4 = 3;
    FUN_0057b470(&local_1c);
    local_4 = 0xffffffff;
    uVar2 = JustifyNode::JustifyNode((JustifyNode *)&local_1c,0);
    local_4 = 4;
    FUN_0057b470(uVar2);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_1c);
    uVar2 = StyleNode::StyleNode(local_14,0x76ec);
    local_4 = 5;
    FUN_0057b470(uVar2);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode(local_14);
    uVar2 = FUN_0046b0d0();
    FUN_0057b3e0(uVar2);
  }
  ExceptionList = local_c;
  return;
}

