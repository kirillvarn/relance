
void FUN_004690c0(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 *local_34;
  void *pvStack_30;
  StyleNode local_2c [20];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb696;
  pvStack_c = ExceptionList;
  uVar8 = 0xffffffff;
  pcVar9 = "Interface\\NeuroNet\\Chat\\";
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  ExceptionList = &pvStack_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0066d8e4,
             "Interface\\NeuroNet\\Chat\\",~uVar8 - 1);
  puVar4 = operator_new(0x14);
  local_4 = 0;
  local_34 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_0066da70 = (undefined4 *)0x0;
  }
  else {
    FUN_004c5a10(&local_37,&local_38);
    DAT_0066da70 = puVar4;
  }
  local_4 = 0xffffffff;
  puVar4 = operator_new(0x14);
  local_4 = 1;
  local_34 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_0066da74 = (undefined4 *)0x0;
  }
  else {
    FUN_004c5a10(&local_38,&local_37);
    DAT_0066da74 = puVar4;
  }
  local_4 = 0xffffffff;
  puVar4 = operator_new(0x14);
  local_4 = 2;
  local_34 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_0066da78 = (undefined4 *)0x0;
  }
  else {
    FUN_004c5a10(&local_38,&local_37);
    DAT_0066da78 = puVar4;
  }
  local_4 = 0xffffffff;
  local_34 = operator_new(0x44);
  local_4 = 3;
  if (local_34 == (undefined4 *)0x0) {
    DAT_0066da60 = 0;
  }
  else {
    DAT_0066da60 = FUN_004699d0(0x20,0x20,10000);
  }
  DAT_0066da64 = DAT_0066da60 + 0x18;
  DAT_0066da68 = DAT_0066da60 + 0x28;
  local_4 = 0xffffffff;
  DAT_0066d3fc = DAT_0066da40;
  piVar5 = (int *)StyleNode::StyleNode(local_2c,0x3ea8);
  local_4 = 4;
  local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  local_4._0_1_ = 5;
  FUN_0046c800(&pvStack_30,DAT_0066d428,&local_34);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0045eeb0();
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(local_2c);
  cVar3 = FUN_0057da40(0x60052,&DAT_0066d424);
  if (cVar3 == '\0') {
    piVar5 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_2c,1);
    local_4 = 6;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 7;
    FUN_0046c800(&pvStack_30,DAT_0066d428,&local_34);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_2c);
    piVar5 = (int *)TextNode::TextNode((TextNode *)local_2c,(ushort *)L"DEBUG - New player:",-1);
    local_4 = 8;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 9;
    FUN_0046c800(&pvStack_30,DAT_0066d428,&local_34);
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_2c);
  }
  else {
    FUN_0057eb40(&DAT_0066d424);
  }
  piVar5 = (int *)StyleNode::StyleNode(local_2c,0x3ea8);
  local_4 = 10;
  local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  local_4._0_1_ = 0xb;
  FUN_0046c800(&pvStack_30,DAT_0066d41c,&local_34);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_0045eeb0();
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(local_2c);
  cVar3 = FUN_0057da40(0x60053,&DAT_0066d418);
  if (cVar3 == '\0') {
    piVar5 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_2c,1);
    local_4 = 0xc;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 0xd;
    FUN_0046c800(&pvStack_30,DAT_0066d41c,&local_34);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
      local_34 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_2c);
    piVar5 = (int *)TextNode::TextNode((TextNode *)local_2c,(ushort *)L"DEBUG - Departing player:",
                                       -1);
    local_4 = 0xe;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 0xf;
    FUN_0046c800(&pvStack_30,DAT_0066d41c,&local_34);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
      local_34 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_2c);
  }
  else {
    FUN_0057eb40(&DAT_0066d418);
  }
  piVar5 = (int *)StyleNode::StyleNode(local_2c,0x3ea8);
  local_4 = 0x10;
  local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  local_4._0_1_ = 0x11;
  FUN_0046c800(&pvStack_30,DAT_0066d410,&local_34);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  if (local_34 != (undefined4 *)0x0) {
    (**(code **)*local_34)(1);
    local_34 = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(local_2c);
  cVar3 = FUN_0057da40(0x6004f,&DAT_0066d40c);
  if (cVar3 == '\0') {
    piVar5 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_2c,1);
    local_4 = 0x12;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 0x13;
    FUN_0046c800(&pvStack_30,DAT_0066d410,&local_34);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
      local_34 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_2c);
    piVar5 = (int *)TextNode::TextNode((TextNode *)local_2c,(ushort *)L"DEBUG - New affiliation:",-1
                                      );
    local_4 = 0x14;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 0x15;
    FUN_0046c800(&pvStack_30,DAT_0066d410,&local_34);
    local_4 = CONCAT31(local_4._1_3_,0x14);
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
      local_34 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_2c);
  }
  else {
    FUN_0057eb40(&DAT_0066d40c);
  }
  piVar5 = (int *)StyleNode::StyleNode(local_2c,0x3ea8);
  local_4 = 0x16;
  local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
  local_4._0_1_ = 0x17;
  FUN_0046c800(&pvStack_30,DAT_0066d404,&local_34);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  if (local_34 != (undefined4 *)0x0) {
    (**(code **)*local_34)(1);
    local_34 = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  StyleNode::~StyleNode(local_2c);
  cVar3 = FUN_0057da40(0x60050,&DAT_0066d400);
  if (cVar3 == '\0') {
    piVar5 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_2c,1);
    local_4 = 0x18;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 0x19;
    FUN_0046c800(&pvStack_30,DAT_0066d404,&local_34);
    local_4 = CONCAT31(local_4._1_3_,0x18);
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
      local_34 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_2c);
    piVar5 = (int *)TextNode::TextNode((TextNode *)local_2c,(ushort *)L"DEBUG - Lost affiliation:",
                                       -1);
    local_4 = 0x1a;
    local_34 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    iVar1 = DAT_0066d404;
    local_4._0_1_ = 0x1b;
    iVar6 = FUN_0042a7e0(DAT_0066d404,*(undefined4 *)(DAT_0066d404 + 4));
    *(int *)(iVar1 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
    FUN_0046ea00(iVar6 + 8,&local_34);
    DAT_0066d408 = DAT_0066d408 + 1;
    local_4 = CONCAT31(local_4._1_3_,0x1a);
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
      local_34 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode((TextNode *)local_2c);
  }
  else {
    FUN_0057eb40(&DAT_0066d400);
  }
  pvVar7 = operator_new(0x2c);
  local_4 = 0x1c;
  pvStack_30 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    DAT_0066da7c = (void *)0x0;
  }
  else {
    FUN_004b6800(&local_38,0,&local_37);
    local_4 = CONCAT31(local_4._1_3_,0x1d);
    FUN_0046ce80(&uStack_35,0,&uStack_36);
    *(undefined4 *)((int)pvVar7 + 0x14) = 0;
    DAT_0066da7c = pvVar7;
  }
  uVar2 = DAT_0066da40;
  local_4 = 0xffffffff;
  FUN_0046ba60(&uStack_35);
  local_4 = 0x1e;
  cVar3 = FUN_0057da40(0x6003d,local_2c);
  if (cVar3 != '\0') {
    FUN_0045f860(uVar2,local_2c);
  }
  local_4 = 0xffffffff;
  FUN_0046ba90();
  uVar2 = DAT_0066da38;
  FUN_0046ba60(&uStack_35);
  local_4 = 0x1f;
  cVar3 = FUN_0057da40(0x60036,local_2c);
  if (cVar3 != '\0') {
    FUN_0045f860(uVar2,local_2c);
  }
  local_4 = 0xffffffff;
  FUN_0046ba90();
  uVar2 = DAT_0066da48;
  FUN_0046ba60(&uStack_35);
  local_4 = 0x20;
  cVar3 = FUN_0057da40(0x60035,local_2c);
  if (cVar3 != '\0') {
    FUN_0045f860(uVar2,local_2c);
  }
  local_4 = 0xffffffff;
  FUN_0046ba90();
  DAT_0066da84 = (int *)FUN_0059db20("NN_GroupControl","NN_GroupControl",0,0);
  if (DAT_0066da84 != (int *)0x0) {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0xbf800000;
    (**(code **)(*DAT_0066da84 + 0x14))(&uStack_18);
    *(byte *)(DAT_0066da84 + 0x1b) = *(byte *)(DAT_0066da84 + 0x1b) & 0xfc;
  }
  ExceptionList = pvStack_c;
  return;
}

