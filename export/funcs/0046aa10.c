
void FUN_0046aa10(ushort *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  code *pcStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  TextNode local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb7ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0066da7c != 0) {
    local_2c = (char)param_3;
    ExceptionList = &pvStack_c;
    local_28 = FUN_0042a7e0();
    local_24 = 0;
    local_4 = 0;
    piVar3 = (int *)TextNode::TextNode(local_20,puVar2,-1);
    local_4._0_1_ = 1;
    pcStack_38 = (code *)(**(code **)(*piVar3 + 0x1c))();
    local_4._0_1_ = 2;
    FUN_0046c800(&param_1);
    local_4._0_1_ = 1;
    if (pcStack_38 != (code *)0x0) {
      (*(code *)**(undefined4 **)pcStack_38)();
      pcStack_38 = (code *)0x0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    TextNode::~TextNode(local_20);
    pcStack_38 = (code *)&stack0xffffffb0;
    FUN_0046ad40(param_2);
    FUN_0045f860();
    local_4 = 0xffffffff;
    FUN_0046ba90();
  }
  if ((char)param_3 != '\0') {
    if ((DAT_0066d44c & 1) == 0) {
      DAT_0066d44c = DAT_0066d44c | 1;
      FUN_0046ba60();
      FUN_005b7e6c();
    }
    if (DAT_0066da60 == 0) {
      puVar4 = &DAT_0066d440;
    }
    else {
      puVar4 = (undefined *)FUN_004683b0();
    }
    puStack_34 = &DAT_0066d424;
    pcStack_38 = _vftable__exref;
    local_4 = 3;
    param_3 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
    local_4._0_1_ = 4;
    FUN_0046c800(&param_1);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)*param_3)();
      param_3 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&pcStack_38);
    piVar3 = (int *)TextNode::TextNode(local_20,puVar2,-1);
    local_4 = 5;
    param_3 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
    iVar1 = *(int *)(puVar4 + 4);
    local_4._0_1_ = 6;
    iVar5 = FUN_0042a7e0();
    *(int *)(iVar1 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    FUN_0046ea00();
    *(int *)(puVar4 + 8) = *(int *)(puVar4 + 8) + 1;
    local_4 = CONCAT31(local_4._1_3_,5);
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)*param_3)();
      param_3 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode(local_20);
    iVar1 = DAT_0066da60;
    if (DAT_0066da60 != 0) {
      FUN_0046bb50();
      FUN_0053e430();
      if (param_1 != *(ushort **)(iVar1 + 4)) {
        do {
          piVar3 = (int *)RDLRefNode::RDLRefNode
                                    ((RDLRefNode *)&pcStack_38,*(RenderDisplayList **)(param_1 + 4))
          ;
          local_4 = 7;
          param_3 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))();
          local_4._0_1_ = 8;
          FUN_0046bb00();
          local_4 = CONCAT31(local_4._1_3_,7);
          FUN_0045eeb0();
          local_4 = 0xffffffff;
          RDLRefNode::~RDLRefNode((RDLRefNode *)&pcStack_38);
          ParagraphNode::ParagraphNode((ParagraphNode *)&param_2);
          local_4 = 9;
          uStack_30 = (**(code **)(param_2 + 0x1c))();
          local_4._0_1_ = 10;
          FUN_0046bb00();
          local_4 = CONCAT31(local_4._1_3_,9);
          FUN_0045eeb0();
          param_1 = *(ushort **)param_1;
          local_4 = 0xffffffff;
          ParagraphNode::~ParagraphNode((ParagraphNode *)&param_2);
        } while (param_1 != *(ushort **)(iVar1 + 4));
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      FUN_004684e0();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

