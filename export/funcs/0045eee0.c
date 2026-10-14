
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0045eee0(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puStack_28;
  undefined1 auStack_24 [4];
  JustifyNode local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba49a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_0057b5a0(param_2,0);
  uVar8 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x402) = 1;
  *(undefined1 *)(param_1 + 0x538) = 1;
  *(undefined1 *)(param_1 + 0x539) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x560) = 0x3d5a740d;
  pcVar9 = "ChatBackground";
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar5 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x540),
             "ChatBackground",~uVar8 - 1);
  *(undefined4 *)(param_1 + 0x330) = DAT_005ceedc;
  *(undefined4 *)(param_1 + 0x334) = DAT_005ceee0;
  cVar5 = FUN_0057da40(0x6003b,param_1 + 0x56c);
  if (cVar5 == '\0') {
    piVar6 = (int *)JustifyNode::JustifyNode(local_20,1);
    local_4 = 0;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 1;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x570),&puStack_28);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode(local_20);
    piVar6 = (int *)TextNode::TextNode((TextNode *)local_20,(ushort *)L"DEBUG - system",-1);
    local_4 = 2;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 3;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x570),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_20);
  }
  else {
    FUN_0057eb40(param_1 + 0x56c);
  }
  cVar5 = FUN_0057da40(0x6003a,param_1 + 0x578);
  if (cVar5 == '\0') {
    piVar6 = (int *)JustifyNode::JustifyNode(local_20,1);
    local_4 = 4;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 5;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x57c),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode(local_20);
    piVar6 = (int *)TextNode::TextNode((TextNode *)local_20,(ushort *)L"DEBUG - local",-1);
    local_4 = 6;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 7;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x57c),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_20);
  }
  else {
    FUN_0057eb40(param_1 + 0x578);
  }
  cVar5 = FUN_0057da40(0x60039,param_1 + 0x584);
  if (cVar5 == '\0') {
    piVar6 = (int *)JustifyNode::JustifyNode(local_20,1);
    local_4 = 8;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 9;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x588),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode(local_20);
    piVar6 = (int *)TextNode::TextNode((TextNode *)local_20,(ushort *)L"DEBUG - group",-1);
    local_4 = 10;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 0xb;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x588),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,10);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_20);
  }
  else {
    FUN_0057eb40(param_1 + 0x584);
  }
  cVar5 = FUN_0057da40(0x60038,param_1 + 0x590);
  if (cVar5 == '\0') {
    piVar6 = (int *)JustifyNode::JustifyNode(local_20,1);
    local_4 = 0xc;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 0xd;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x594),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode(local_20);
    piVar6 = (int *)TextNode::TextNode((TextNode *)local_20,(ushort *)L"DEBUG - console",-1);
    local_4 = 0xe;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_4._0_1_ = 0xf;
    FUN_0046c800(auStack_24,*(undefined4 *)(param_1 + 0x594),&puStack_28);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_20);
  }
  else {
    FUN_0057eb40(param_1 + 0x590);
  }
  cVar5 = FUN_0057da40(0x6003c,param_1 + 0x59c);
  if (cVar5 == '\0') {
    piVar6 = (int *)JustifyNode::JustifyNode(local_20,1);
    local_4 = 0x10;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    iVar1 = *(int *)(param_1 + 0x5a0);
    local_4._0_1_ = 0x11;
    iVar7 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_0046ea00(iVar7 + 8,&puStack_28);
    *(int *)(param_1 + 0x5a4) = *(int *)(param_1 + 0x5a4) + 1;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode(local_20);
    piVar6 = (int *)TextNode::TextNode((TextNode *)local_20,(ushort *)L"DEBUG - universe",-1);
    local_4 = 0x12;
    puStack_28 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    iVar1 = *(int *)(param_1 + 0x5a0);
    local_4._0_1_ = 0x13;
    iVar7 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_0046ea00(iVar7 + 8,&puStack_28);
    *(int *)(param_1 + 0x5a4) = *(int *)(param_1 + 0x5a4) + 1;
    local_4 = CONCAT31(local_4._1_3_,0x12);
    if (puStack_28 != (undefined4 *)0x0) {
      (**(code **)*puStack_28)(1);
      puStack_28 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_20);
  }
  else {
    FUN_0057eb40(param_1 + 0x59c);
  }
  if (DAT_0066da7c != 0) {
    *(int *)(param_1 + 0x530) = DAT_0066da7c;
  }
  FUN_0057bdd0(1);
  FUN_0045eaf0(&DAT_0066da40);
  FUN_0057d330();
  fVar2 = *(float *)(param_1 + 0x330) * _DAT_005c75e0;
  *(float *)(param_1 + 0xb4) = fVar2;
  fVar3 = *(float *)(param_1 + 0x334) * _DAT_005c75e0;
  *(float *)(param_1 + 0xb8) = fVar3;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(float *)(param_1 + 0xc0) = fVar2;
  *(float *)(param_1 + 0xc4) = fVar3;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x70) = 7;
  *(undefined4 *)(param_1 + 0x78) = 7;
  ExceptionList = local_c;
  return uVar4;
}

