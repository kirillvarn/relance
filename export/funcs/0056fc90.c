
void __fastcall FUN_0056fc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  RDLRefNode *this;
  code *local_2c;
  int local_28;
  code *local_24;
  int local_20;
  code *local_1c;
  int local_18;
  JustifyNode local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3084;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x498) = 1;
  FUN_0057b370();
  uVar2 = JustifyNode::JustifyNode(local_14,2);
  local_4 = 0;
  FUN_0057b470(uVar2);
  local_4 = 0xffffffff;
  JustifyNode::~JustifyNode(local_14);
  iVar1 = *(int *)(param_1 + 0x2cc);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      local_20 = param_1 + 0x230;
      local_24 = _vftable__exref;
      local_4 = 3;
      FUN_0057b470(&local_24);
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_24);
      *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x498) = 1;
      ExceptionList = local_c;
      return;
    }
    if (iVar1 != 4) {
      local_28 = param_1 + 0x218;
      local_2c = _vftable__exref;
      local_4 = 2;
      FUN_0057b470(&local_2c);
      this = (RDLRefNode *)&local_2c;
      goto LAB_0056fdcb;
    }
  }
  local_18 = param_1 + 0x224;
  local_1c = _vftable__exref;
  local_4 = 1;
  FUN_0057b470(&local_1c);
  this = (RDLRefNode *)&local_1c;
LAB_0056fdcb:
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode(this);
  ExceptionList = local_c;
  return;
}

