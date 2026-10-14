
void FUN_00465ab0(int param_1,int *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  void *pvVar8;
  ISystem *pIVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  int *piStack_90;
  int local_8c;
  char *local_88;
  void *local_84 [2];
  code *pcStack_7c;
  int iStack_78;
  int local_74;
  int local_70;
  uint uStack_6c;
  undefined1 uStack_65;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  code *pcStack_5c;
  void *pvStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  TextNode aTStack_4c [12];
  TextNode aTStack_40 [8];
  TextPtrNode aTStack_38 [12];
  wchar_t awStack_2c [6];
  ushort auStack_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar12 = DAT_0066d3fc;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb332;
  pvStack_c = ExceptionList;
  local_70 = DAT_0066d3fc;
  ExceptionList = &pvStack_c;
  cVar2 = FUN_0058cd00(param_1,0,&local_8c);
  if (cVar2 != '\0') {
    FUN_0046c860(&local_88,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
    piVar3 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_84,0);
    local_4 = 0;
    local_88 = (char *)(**(code **)(*piVar3 + 0x1c))();
    local_4._0_1_ = 1;
    FUN_0046c800(&piStack_90,*(undefined4 *)(local_8c + 4),&local_88);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_84);
    if (*param_2 == iVar12) {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)local_84,0x3343);
      local_4 = 2;
      local_88 = (char *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 3;
      FUN_0046c800(&piStack_90,*(undefined4 *)(local_8c + 4),&local_88);
      local_4 = CONCAT31(local_4._1_3_,2);
    }
    else {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)local_84,0x69f5);
      local_4 = 4;
      local_88 = (char *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 5;
      FUN_0046c800(&piStack_90,*(undefined4 *)(local_8c + 4),&local_88);
      local_4 = CONCAT31(local_4._1_3_,4);
    }
    FUN_0045eeb0();
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)local_84);
    if (param_3 == '\0') {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)local_84,48000);
      local_4 = 6;
      local_88 = (char *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 7;
      FUN_0046c800(&piStack_90,*(undefined4 *)(local_8c + 4),&local_88);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0045eeb0();
      local_4 = 0xffffffff;
      StyleNode::~StyleNode((StyleNode *)local_84);
    }
    piVar3 = (int *)FUN_0046baf0(&local_88);
    piVar3 = (int *)*piVar3;
    uVar4 = FUN_0053e430(auStack_50);
    FUN_0046bba0(uVar4);
    puVar5 = (undefined4 *)FUN_0046baf0(&pcStack_7c);
    uVar4 = *puVar5;
    for (; piStack_90 != piVar3; piStack_90 = (int *)*piStack_90) {
      FUN_0046c800(local_84,uVar4,piStack_90 + 2);
    }
    FUN_0058ce10(param_1,0,1);
    FUN_0058cdb0(param_1,0);
    iVar12 = local_70;
  }
  cVar2 = FUN_0058cd00(param_1,1,&local_8c);
  if (cVar2 != '\0') {
    FUN_0046c860(local_84,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
  }
  cVar2 = FUN_0058cd00(param_1,2,&local_8c);
  if (cVar2 != '\0') {
    FUN_0046c860(local_84,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
  }
  cVar2 = FUN_0058cd00(param_1,3,&local_8c);
  if (cVar2 != '\0') {
    FUN_0046c860(local_84,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
  }
  pcVar6 = (char *)FUN_0058d0b0(param_1);
  *pcVar6 = param_3;
  pcVar6[1] = param_3;
  pcVar6[2] = '\x01';
  *(int *)(pcVar6 + 4) = param_1;
  *(int *)(*(int *)(pcVar6 + 8) + 8) = *param_2;
  if (*param_2 == iVar12) {
    FUN_0058d4b0(param_1);
  }
  iVar12 = param_1 + 1;
  pcVar6 = (char *)FUN_0058d0b0(iVar12);
  if (pcVar6 == (char *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  local_88 = pcVar6;
  cVar2 = FUN_0058cd00(iVar12,1,&local_8c);
  if (cVar2 != '\0') {
    FUN_0046c860(local_84,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
    piVar3 = (int *)JustifyNode::JustifyNode((JustifyNode *)&pcStack_7c,1);
    local_4 = 8;
    piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
    local_4._0_1_ = 9;
    FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&pcStack_7c);
    if (*param_2 == local_70) {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)&pcStack_7c,0x3dbc);
      local_4 = 10;
      piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 0xb;
      FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
      local_4 = CONCAT31(local_4._1_3_,10);
    }
    else {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)&pcStack_7c,0x5203);
      local_4 = 0xc;
      piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 0xd;
      FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
      local_4 = CONCAT31(local_4._1_3_,0xc);
    }
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&pcStack_7c);
    if (*(wchar_t **)param_2[2] == (wchar_t *)0x0) {
      iStack_78 = local_74 + 0x358;
      pcStack_7c = _vftable__exref;
      local_4 = 0x10;
      piStack_90 = (int *)(**(code **)(_vftable__exref + 0x1c))();
      local_4._0_1_ = 0x11;
      FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      if (piStack_90 != (int *)0x0) {
        (**(code **)*piStack_90)(1);
        piStack_90 = (int *)0x0;
      }
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&pcStack_7c);
    }
    else {
      swprintf(awStack_2c,0x5cfb80,*(wchar_t **)param_2[2]);
      piVar3 = (int *)TextNode::TextNode(aTStack_40,auStack_20,-1);
      param_2 = (int *)0xe;
      piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 0xf;
      FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if (piStack_90 != (int *)0x0) {
        (**(code **)*piStack_90)(1);
        piStack_90 = (int *)0x0;
      }
      local_4 = 0xffffffff;
      TextNode::~TextNode(aTStack_4c);
    }
    FUN_0058ce10(iVar12,1,0);
    FUN_0058cdb0(iVar12,1);
    pcVar6 = local_88;
  }
  cVar2 = FUN_0058cd00(iVar12,2,&local_8c);
  if (cVar2 != '\0') {
    FUN_0046c860(local_84,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
    piVar3 = (int *)JustifyNode::JustifyNode((JustifyNode *)&pcStack_7c,1);
    local_4 = 0x12;
    piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
    local_4._0_1_ = 0x13;
    FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&pcStack_7c);
    if (*param_2 == local_70) {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)&pcStack_7c,0x3dbc);
      uVar11 = 0x14;
      local_4 = 0x14;
      piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 0x15;
    }
    else {
      piVar3 = (int *)StyleNode::StyleNode((StyleNode *)&pcStack_7c,0x5203);
      uVar11 = 0x16;
      local_4 = 0x16;
      piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
      local_4._0_1_ = 0x17;
    }
    FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
    local_4 = CONCAT31(local_4._1_3_,uVar11);
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&pcStack_7c);
    swprintf(awStack_2c,0x5cfb80,*(wchar_t **)(param_2[2] + 4));
    piVar3 = (int *)TextNode::TextNode(aTStack_40,auStack_20,-1);
    param_2 = (int *)0x18;
    piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
    local_4._0_1_ = 0x19;
    FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
    local_4 = CONCAT31(local_4._1_3_,0x18);
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    TextNode::~TextNode(aTStack_4c);
    FUN_0058ce10(iVar12,2,0);
    FUN_0058cdb0(iVar12,2);
    pcVar6 = local_88;
  }
  cVar2 = FUN_0058cd00(iVar12,3,&local_8c);
  if (cVar2 == '\0') goto LAB_0046668a;
  FUN_0046c860(local_84,**(undefined4 **)(local_8c + 4),*(undefined4 **)(local_8c + 4));
  piVar3 = (int *)JustifyNode::JustifyNode((JustifyNode *)&pcStack_7c,1);
  local_4 = 0x1a;
  piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
  local_4._0_1_ = 0x1b;
  FUN_0046c800(local_84,*(undefined4 *)(local_8c + 4),&piStack_90);
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  if (piStack_90 != (int *)0x0) {
    (**(code **)*piStack_90)(1);
    piStack_90 = (int *)0x0;
  }
  local_4 = 0xffffffff;
  JustifyNode::~JustifyNode((JustifyNode *)&pcStack_7c);
  if (*param_2 == local_70) {
    piVar3 = (int *)StyleNode::StyleNode((StyleNode *)local_84,0x3dbc);
    local_4 = 0x1c;
    piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
    iVar10 = local_8c;
    iVar1 = *(int *)(local_8c + 4);
    local_4._0_1_ = 0x1d;
    iVar7 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_0046ea00(iVar7 + 8,&piStack_90);
    *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    local_4 = CONCAT31(local_4._1_3_,0x1c);
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)local_84);
  }
  else {
    piVar3 = (int *)StyleNode::StyleNode((StyleNode *)local_84,0x5203);
    local_4 = 0x1e;
    piStack_90 = (int *)(**(code **)(*piVar3 + 0x1c))();
    iVar10 = local_8c;
    iVar1 = *(int *)(local_8c + 4);
    local_4._0_1_ = 0x1f;
    iVar7 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_0046ea00(iVar7 + 8,&piStack_90);
    *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    local_4 = CONCAT31(local_4._1_3_,0x1e);
    if (piStack_90 != (int *)0x0) {
      (**(code **)*piStack_90)(1);
      piStack_90 = (int *)0x0;
    }
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)local_84);
  }
  iVar1 = DAT_0066da70;
  if (DAT_0066da70 != 0) {
    uStack_6c = *(uint *)(param_2[2] + 8);
    FUN_00432240(&iStack_54,&uStack_6c);
    if (iStack_54 == *(int *)(iVar1 + 4)) {
      pvVar8 = operator_new(0xc);
      local_4 = 0x20;
      local_84[0] = pvVar8;
      if (pvVar8 == (void *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        FUN_0046ba60(&uStack_65);
      }
      local_4 = 0xffffffff;
      pIVar9 = Universe::get_system(uStack_6c);
      if (pIVar9 == (ISystem *)0x0) {
LAB_00466558:
        FUN_0046bb50();
        piVar3 = (int *)TextPtrNode::TextPtrNode(aTStack_38,(ushort *)L"????",-1);
        local_4 = 0x21;
        uStack_60 = (**(code **)(*piVar3 + 0x1c))();
        local_4._0_1_ = 0x22;
        FUN_0046bb00(&uStack_60);
        local_4 = CONCAT31(local_4._1_3_,0x21);
        FUN_0045eeb0();
        local_4 = 0xffffffff;
        TextPtrNode::~TextPtrNode(aTStack_38);
      }
      else {
        uVar4 = (**(code **)(*(int *)pIVar9 + 0xc))(pvVar8);
        cVar2 = FUN_0057da40(uVar4);
        if (cVar2 == '\0') goto LAB_00466558;
      }
      puVar5 = (undefined4 *)FUN_0046bbb0(&uStack_6c);
      *puVar5 = pvVar8;
    }
    else {
      pvVar8 = *(void **)(iStack_54 + 0x10);
    }
    pcStack_5c = _vftable__exref;
    local_4 = 0x23;
    pvStack_58 = pvVar8;
    puStack_64 = (undefined4 *)(**(code **)(_vftable__exref + 0x1c))();
    iVar1 = *(int *)(local_8c + 4);
    local_4._0_1_ = 0x24;
    iVar10 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar10;
    **(int **)(iVar10 + 4) = iVar10;
    FUN_0046ea00(iVar10 + 8,&puStack_64);
    *(int *)(local_8c + 8) = *(int *)(local_8c + 8) + 1;
    local_4 = CONCAT31(local_4._1_3_,0x23);
    if (puStack_64 != (undefined4 *)0x0) {
      (**(code **)*puStack_64)(1);
      puStack_64 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&pcStack_5c);
  }
  FUN_0058ce10(iVar12,3,0);
  FUN_0058cdb0(iVar12,3);
  pcVar6 = local_88;
LAB_0046668a:
  *pcVar6 = param_3;
  pcVar6[1] = param_3;
  pcVar6[2] = '\0';
  *(int *)(pcVar6 + 4) = param_1;
  *(int *)(*(int *)(pcVar6 + 8) + 8) = *param_2;
  ExceptionList = pvStack_c;
  return;
}

