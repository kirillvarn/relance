
void __thiscall FUN_0057b7b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  ushort *unaff_retaddr;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_005c3d91;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x24))(param_2,0);
  param_1[0xcc] = param_2;
  param_1[0xcd] = param_3;
  TextNode::TextNode((TextNode *)&stack0xffffffd8);
  pvStack_c = (void *)0x0;
  puStack_4 = (undefined4 *)(**(code **)(unaff_ESI + 0x1c))();
  iVar1 = param_1[0x123];
  pvStack_c._0_1_ = 1;
  iVar2 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  FUN_0046ea00(iVar2 + 8,&puStack_4);
  param_1[0x124] = param_1[0x124] + 1;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  if (puStack_4 != (undefined4 *)0x0) {
    (**(code **)*puStack_4)(1);
    puStack_4 = (undefined4 *)0x0;
  }
  TextNode::set_text(*(TextNode **)(*(int *)(param_1[0x123] + 4) + 8),unaff_retaddr,-1);
  pvStack_c = (void *)0xffffffff;
  TextNode::~TextNode((TextNode *)&stack0xffffffd8);
  ExceptionList = pvStack_14;
  return;
}

