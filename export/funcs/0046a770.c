
void FUN_0046a770(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_35;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined *local_24;
  TextNode aTStack_20 [20];
  void *pvStack_c;
  undefined *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bb784;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_0066d44c & 1) == 0) {
    DAT_0066d44c = DAT_0066d44c | 1;
    ExceptionList = &pvStack_c;
    FUN_0046ba60(&local_35);
    FUN_005b7e6c(&LAB_00468bf0);
  }
  if (DAT_0066da60 == 0) {
    puVar3 = &DAT_0066d440;
  }
  else {
    puVar3 = (undefined *)FUN_004683b0();
  }
  local_24 = &DAT_0066d40c;
  local_28 = _vftable__exref;
  local_4 = 0;
  puStack_34 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
  iVar1 = *(int *)(puVar3 + 4);
  local_4._0_1_ = 1;
  iVar4 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  FUN_0046ea00(iVar4 + 8,&puStack_34);
  *(int *)(puVar3 + 8) = *(int *)(puVar3 + 8) + 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if (puStack_34 != (undefined4 *)0x0) {
    (**(code **)*puStack_34)(1);
    puStack_34 = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_28);
  piVar5 = (int *)TextNode::TextNode(aTStack_20,param_1,-1);
  local_4 = 2;
  puStack_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  iVar1 = *(int *)(puVar3 + 4);
  local_4._0_1_ = 3;
  iVar4 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  FUN_0046ea00(iVar4 + 8,&puStack_34);
  *(int *)(puVar3 + 8) = *(int *)(puVar3 + 8) + 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puStack_34 != (undefined4 *)0x0) {
    (**(code **)*puStack_34)(1);
    puStack_34 = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  TextNode::~TextNode(aTStack_20);
  iVar1 = DAT_0066da60;
  if (DAT_0066da60 != 0) {
    uVar2 = *(undefined4 *)(DAT_0066da60 + 0x20);
    puVar6 = (undefined4 *)FUN_0053e430(&puStack_34);
    FUN_0046c860(&local_28,*puVar6,uVar2);
    FUN_0053e430(&param_1);
    if (param_1 != *(ushort **)(iVar1 + 4)) {
      do {
        piVar5 = (int *)RDLRefNode::RDLRefNode
                                  ((RDLRefNode *)&local_28,*(RenderDisplayList **)(param_1 + 4));
        local_4 = 4;
        puStack_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
        local_4._0_1_ = 5;
        FUN_0046bb00(&puStack_34);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_0045eeb0();
        local_4 = 0xffffffff;
        RDLRefNode::~RDLRefNode((RDLRefNode *)&local_28);
        ParagraphNode::ParagraphNode((ParagraphNode *)&iStack_30);
        local_4 = 6;
        uStack_2c = (**(code **)(iStack_30 + 0x1c))();
        local_4._0_1_ = 7;
        FUN_0046bb00(&uStack_2c);
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_0045eeb0();
        param_1 = *(ushort **)param_1;
        local_4 = 0xffffffff;
        ParagraphNode::~ParagraphNode((ParagraphNode *)&iStack_30);
      } while (param_1 != *(ushort **)(iVar1 + 4));
    }
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    FUN_004684e0();
  }
  ExceptionList = pvStack_c;
  return;
}

