
void __thiscall
FUN_00568880(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,undefined4 *param_6
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ImageNode *this;
  undefined1 uVar9;
  bool local_29;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  StyleNode local_1c [8];
  ImageNode aIStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c250a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = param_1;
  cVar5 = FUN_0058cd00(param_2,param_3,&local_28);
  if (cVar5 == '\0') {
    ExceptionList = local_c;
    return;
  }
  FUN_0046c860(local_20,**(undefined4 **)(local_28 + 4),*(undefined4 **)(local_28 + 4));
  local_29 = false;
  if (param_2 == 0) {
    local_29 = param_3 != *(int *)(param_1 + 0x390);
    if (local_29) {
      piVar6 = (int *)StyleNode::StyleNode(local_1c,0xd824);
      local_4 = 2;
      param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
      local_4._0_1_ = 3;
      FUN_0046c800(local_20,*(undefined4 *)(local_28 + 4),&param_5);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0045eeb0();
      local_4 = 0xffffffff;
      StyleNode::~StyleNode(local_1c);
    }
    else {
      piVar6 = (int *)StyleNode::StyleNode(local_1c,0xd190);
      local_4 = 0;
      param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
      local_4._0_1_ = 1;
      FUN_0046c800(local_20,*(undefined4 *)(local_28 + 4),&param_5);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045eeb0();
      local_4 = 0xffffffff;
      StyleNode::~StyleNode(local_1c);
    }
    local_29 = !local_29;
    piVar6 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_1c,1);
    local_4 = 4;
    param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 5;
    FUN_0046c800(local_20,*(undefined4 *)(local_28 + 4),&param_5);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_0045eeb0();
    goto LAB_00568b71;
  }
  if ((char)param_5 == '\0') {
    piVar6 = (int *)StyleNode::StyleNode(local_1c,48000);
    uVar9 = 10;
    local_4 = 10;
    param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 0xb;
LAB_00568a9d:
    FUN_0046c800(&param_6,*(undefined4 *)(local_28 + 4),&param_5);
    local_4 = CONCAT31(local_4._1_3_,uVar9);
    if (param_5 != (undefined4 *)0x0) {
      (**(code **)*param_5)(1);
      param_5 = (undefined4 *)0x0;
    }
  }
  else {
    if ((char)param_6 == '\0') {
      piVar6 = (int *)StyleNode::StyleNode(local_1c,0x69f5);
      uVar9 = 8;
      local_4 = 8;
      param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
      local_4._0_1_ = 9;
      goto LAB_00568a9d;
    }
    piVar6 = (int *)StyleNode::StyleNode(local_1c,0x3343);
    local_4 = 6;
    param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 7;
    FUN_0046c800(local_20,*(undefined4 *)(local_28 + 4),&param_5);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_0045eeb0();
  }
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(local_1c);
  if (param_3 == 0) {
    piVar6 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_1c,0);
    local_4 = 0xc;
    param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 0xd;
    FUN_0046c800(&param_6,*(undefined4 *)(local_28 + 4),&param_5);
    local_4 = CONCAT31(local_4._1_3_,0xc);
  }
  else {
    piVar6 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_1c,1);
    local_4 = 0xe;
    param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 0xf;
    FUN_0046c800(&param_6,*(undefined4 *)(local_28 + 4),&param_5);
    local_4 = CONCAT31(local_4._1_3_,0xe);
  }
  if (param_5 != (undefined4 *)0x0) {
    (**(code **)*param_5)(1);
    param_5 = (undefined4 *)0x0;
  }
LAB_00568b71:
  local_4 = 0xffffffff;
  JustifyNode::~JustifyNode((JustifyNode *)local_1c);
  puVar1 = *(undefined4 **)(param_4 + 4);
  uVar3 = *(undefined4 *)(local_28 + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_0046c800(&param_5,uVar3,puVar2 + 2);
  }
  if (local_29) {
    if (*(char *)(param_3 + 0x394 + local_24) == '\0') {
      piVar6 = (int *)ImageNode::ImageNode(aIStack_14,*(Image **)(local_24 + 0x388));
      local_4 = 0x12;
      param_6 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
      iVar4 = *(int *)(local_28 + 4);
      piVar6 = *(int **)(iVar4 + 4);
      local_4._0_1_ = 0x13;
      piVar8 = operator_new(0xc);
      *piVar8 = iVar4;
      if (piVar6 == (int *)0x0) {
        piVar6 = piVar8;
      }
      piVar8[1] = (int)piVar6;
      *(int **)(iVar4 + 4) = piVar8;
      *(int **)piVar8[1] = piVar8;
      FUN_0046ea00(piVar8 + 2,&param_6);
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      local_4 = CONCAT31(local_4._1_3_,0x12);
      if (param_6 != (undefined4 *)0x0) {
        (**(code **)*param_6)(1);
        param_6 = (undefined4 *)0x0;
      }
      this = aIStack_14;
    }
    else {
      piVar6 = (int *)ImageNode::ImageNode((ImageNode *)local_1c,*(Image **)(local_24 + 0x38c));
      local_4 = 0x10;
      param_5 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
      iVar4 = *(int *)(local_28 + 4);
      local_4._0_1_ = 0x11;
      iVar7 = FUN_0042a7e0(iVar4,*(undefined4 *)(iVar4 + 4));
      *(int *)(iVar4 + 4) = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      FUN_0046ea00(iVar7 + 8,&param_5);
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      local_4 = CONCAT31(local_4._1_3_,0x10);
      if (param_5 != (undefined4 *)0x0) {
        (**(code **)*param_5)(1);
        param_5 = (undefined4 *)0x0;
      }
      this = (ImageNode *)local_1c;
    }
    local_4 = 0xffffffff;
    ImageNode::~ImageNode(this);
  }
  FUN_0058cdb0(param_2,param_3);
  ExceptionList = local_c;
  return;
}

