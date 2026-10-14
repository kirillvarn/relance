
undefined4 __thiscall FUN_005727f0(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  char *pcStack_7c;
  char *pcStack_78;
  undefined *puStack_74;
  char *pcStack_70;
  char *pcStack_6c;
  char local_5c [40];
  TextNode local_34 [20];
  StyleNode local_20 [8];
  code *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c38fe;
  local_10 = ExceptionList;
  pcStack_6c = (char *)0x0;
  pcStack_70 = (char *)param_2;
  puStack_74 = (undefined *)0x57281c;
  ExceptionList = &local_10;
  uVar4 = FUN_00591cd0();
  if ((char)uVar4 != '\0') {
    piVar6 = (int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    pcStack_6c = "AccountID";
    pcStack_70 = (char *)0x572839;
    uVar4 = (**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
    pcStack_70 = "SelectServer";
    puStack_74 = (undefined *)0x57284b;
    uVar4 = (**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(param_1 + 0xe4) = uVar4;
    puStack_74 = &DAT_005e1afc;
    pcStack_78 = (char *)0x57285d;
    uVar4 = (**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(param_1 + 0xe8) = uVar4;
    pcStack_78 = "Explain";
    pcStack_7c = (char *)0x57286f;
    uVar4 = (**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(param_1 + 0xec) = uVar4;
    pcStack_7c = "AccountBoxShort";
    uVar4 = (**(code **)(*piVar6 + 0x10))();
    *(undefined4 *)(param_1 + 0xf0) = uVar4;
    iVar5 = (**(code **)(**(int **)(param_1 + 0xe0) + 0xb8))();
    *(undefined4 *)(iVar5 + 4) = 0xaca;
    iVar5 = (**(code **)(**(int **)(param_1 + 0xe4) + 0xb8))();
    *(undefined4 *)(iVar5 + 4) = 0xace;
    iVar5 = (**(code **)(**(int **)(param_1 + 0xe8) + 0xb8))();
    *(undefined4 *)(iVar5 + 4) = 0xac6;
    FUN_005760d0(0xf);
    iVar5 = param_1 + 0xf4;
    FUN_0046c860(&param_2,**(undefined4 **)(param_1 + 0xf8),*(undefined4 **)(param_1 + 0xf8));
    piVar6 = (int *)StyleNode::StyleNode(local_20,0x9ca4);
    local_8 = 0;
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 1;
    FUN_0046c800(&local_14,*(undefined4 *)(param_1 + 0xf8),&param_2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0045eeb0();
    local_8 = 0xffffffff;
    StyleNode::~StyleNode(local_20);
    cVar2 = FUN_0057da40(0x60005,iVar5);
    if (cVar2 != '\0') {
      FUN_0057eb40(iVar5);
    }
    FUN_0046c860(&param_2,**(undefined4 **)(param_1 + 0x104),*(undefined4 **)(param_1 + 0x104));
    piVar6 = (int *)StyleNode::StyleNode(local_20,0x9ca4);
    local_8 = 2;
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 3;
    FUN_0046c800(&local_14,*(undefined4 *)(param_1 + 0x104),&param_2);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0045eeb0();
    local_8 = 0xffffffff;
    StyleNode::~StyleNode(local_20);
    cVar2 = FUN_0057da40(0x601eb,param_1 + 0x100);
    if (cVar2 != '\0') {
      FUN_0057eb40(param_1 + 0x100);
    }
    FUN_0057bdd0(1);
    FUN_0057be30(0);
    piVar6 = (int *)StyleNode::StyleNode(local_20,0x9ca4);
    local_8 = 4;
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 5;
    FUN_0046c800(&local_14,*(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x500),&param_2);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_0045eeb0();
    local_8 = 0xffffffff;
    StyleNode::~StyleNode(local_20);
    piVar6 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_20,1);
    local_8 = 6;
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 7;
    FUN_0046c800(&local_14,*(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x4e0),&param_2);
    local_8 = CONCAT31(local_8._1_3_,6);
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    local_8 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)local_20);
    piVar6 = (int *)TextNode::TextNode(local_34,(ushort *)&DAT_005cef90,-1);
    local_8 = 8;
    param_2 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 9;
    FUN_0046c800(&local_14,*(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x4e0),&param_2);
    local_8 = CONCAT31(local_8._1_3_,8);
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    local_8 = 0xffffffff;
    TextNode::~TextNode(local_34);
    FUN_0057bdb0(0x28);
    FUN_00579860(1);
    FUN_00579870(&DAT_00679bb4);
    FUN_00579a60(2);
    FUN_0057c860(u_0123456789_ABCDEF_00614c74,0x12);
    FUN_0057c920(0x2d);
    FUN_0057c840(1);
    FUN_0057c850(1);
    FUN_0057b370();
    local_18 = _vftable__exref;
    local_8 = 10;
    local_14 = iVar5;
    FUN_0057b470(&local_18);
    local_8 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_18);
    FUN_005799f0(1);
    bVar3 = CPlayerAccount::GenerateTextKey(local_5c);
    if (bVar3) {
      uVar7 = 0xffffffff;
      pcVar8 = local_5c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_005b7e90();
      mbstowcs((wchar_t *)&pcStack_7c,local_5c,~uVar7);
      FUN_0057c0e0(&pcStack_7c,0);
    }
    FUN_0057c750();
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xbff80000;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    FUN_00579a90(1);
    FUN_00579a90(1);
    *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xe0) + 0x6c) & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xec) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    iVar5 = *(int *)(param_1 + 0xf0);
    uVar4 = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_1 + 0xd4) = uVar4;
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar5 + 0x68);
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  ExceptionList = local_10;
  return uVar4;
}

