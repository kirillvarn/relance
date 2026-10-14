
void __thiscall FUN_004738e0(int param_1,undefined4 param_2,ushort param_3)

{
  undefined4 uVar1;
  StyleNode local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbb39;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x340) != 0) {
    ExceptionList = &local_c;
    FUN_0057b370();
    uVar1 = StyleNode::StyleNode(local_14,param_3);
    local_4 = 0;
    FUN_0057b470(uVar1);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode(local_14);
    FUN_0057b3e0(param_2);
  }
  ExceptionList = local_c;
  return;
}

