
void __fastcall FUN_0057d330(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int aiStack_44 [2];
  code *local_3c;
  int local_38;
  TRANode aTStack_34 [20];
  TRANode aTStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3f75;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x490) != 0) {
    ExceptionList = &pvStack_c;
    FUN_0046bb50();
    FUN_0057a620(1,1);
  }
  local_38 = param_1 + 0x4dc;
  local_3c = _vftable__exref;
  local_4 = 0;
  iStack_54 = (**(code **)(_vftable__exref + 0x1c))();
  local_4._0_1_ = 1;
  FUN_0046c800(&iStack_4c,*(undefined4 *)(param_1 + 0x48c),&iStack_54);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045eeb0();
  FUN_0057a620(1,1);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_3c);
  local_38 = param_1 + 0x4e8;
  local_3c = _vftable__exref;
  local_4 = 2;
  iStack_54 = (**(code **)(_vftable__exref + 0x1c))();
  local_4._0_1_ = 3;
  FUN_0046bb00(&iStack_54);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0045eeb0();
  FUN_0057a620(1,1);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_3c);
  FUN_0046c860(&iStack_4c,**(undefined4 **)(param_1 + 0x4ec),*(undefined4 **)(param_1 + 0x4ec));
  if (*(int *)(param_1 + 0x4c8) != 0) {
    iStack_4c = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
    if (iStack_4c != 0) {
      aiStack_44[0] = *(int *)(*(int *)(param_1 + 0x4c8) + 4);
      if (*(char *)(param_1 + 0x4f8) == '\0') {
        piVar1 = (int *)TRANode::TRANode(aTStack_34,(TextRenderAttributes *)aiStack_44,0xffffffff,0)
        ;
        local_4 = 6;
        iStack_54 = (**(code **)(*piVar1 + 0x1c))();
        local_4._0_1_ = 7;
        FUN_0046bb00(&iStack_54);
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_0045eeb0();
        local_4 = 0xffffffff;
        TRANode::~TRANode(aTStack_34);
      }
      else {
        local_38 = param_1 + 0x4fc;
        local_3c = _vftable__exref;
        local_4 = 4;
        iStack_54 = (**(code **)(_vftable__exref + 0x1c))();
        local_4._0_1_ = 5;
        FUN_0046c800(&iStack_4c,*(undefined4 *)(param_1 + 0x4ec),&iStack_54);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_0045eeb0();
        local_4 = 0xffffffff;
        RDLRefNode::~RDLRefNode((RDLRefNode *)&local_3c);
      }
      uVar2 = 0;
      if (*(char *)(param_1 + 0x4f8) == '\0') {
        iStack_54 = 0;
        uVar2 = 0;
        for (uVar4 = 0;
            (*(int *)(param_1 + 0x4c8) != 0 &&
            (uVar4 < (uint)((*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc)));
            uVar4 = uVar4 + 1) {
          piVar1 = (int *)(iStack_54 + 4 + *(int *)(param_1 + 0x4c8));
          if (*piVar1 != aiStack_44[0]) {
            FUN_0057d1f0(uVar2,uVar4 - uVar2);
            aiStack_44[0] = *piVar1;
            piVar1 = (int *)TRANode::TRANode(aTStack_20,(TextRenderAttributes *)aiStack_44,
                                             0xffffffff,0);
            local_4 = 8;
            uStack_50 = (**(code **)(*piVar1 + 0x1c))();
            local_4._0_1_ = 9;
            FUN_0046c800(auStack_48,*(undefined4 *)(param_1 + 0x4ec),&uStack_50);
            local_4 = CONCAT31(local_4._1_3_,8);
            FUN_0045eeb0();
            local_4 = 0xffffffff;
            TRANode::~TRANode(aTStack_20);
            uVar2 = uVar4;
          }
          iStack_54 = iStack_54 + 0xc;
        }
      }
      if ((*(int *)(param_1 + 0x4c8) != 0) &&
         (uVar2 < (uint)((*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc))) {
        if (*(int *)(param_1 + 0x4c8) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
        }
        FUN_0057d1f0(uVar2,iVar3 - uVar2);
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

