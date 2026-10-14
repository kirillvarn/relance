
void FUN_00473970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  StyleNode local_1c [8];
  JustifyNode local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbb74;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    FUN_0057b370();
    uVar1 = StyleNode::StyleNode(local_1c,0x828b);
    local_4 = 0;
    FUN_0057b470(uVar1);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode(local_1c);
    uVar1 = JustifyNode::JustifyNode((JustifyNode *)local_1c,1);
    local_4 = 1;
    FUN_0057b470(uVar1);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_1c);
  }
  else {
    if (param_1 != 1) {
      return;
    }
    ExceptionList = &local_c;
    FUN_0057b370();
    uVar1 = StyleNode::StyleNode(local_1c,0x828b);
    local_4 = 2;
    FUN_0057b470(uVar1);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode(local_1c);
    uVar1 = JustifyNode::JustifyNode(local_14,1);
    local_4 = 3;
    FUN_0057b470(uVar1);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode(local_14);
  }
  FUN_0057b3e0(param_2);
  ExceptionList = local_c;
  return;
}

