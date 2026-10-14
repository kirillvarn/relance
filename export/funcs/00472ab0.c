
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00472ab0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbaf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar3 = FUN_004b5060(param_2,0);
  if (cVar3 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  FUN_0041dde0("Arrow",0);
  piVar5 = param_3;
  *(int *)(param_1 + 0x33c) = param_3[2];
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xbfd9999a;
  FUN_005a0db0("PromptFrame","Interface\\NeuroNet\\errorexplanation.cmp",&local_30,0,&local_3c,0,0,0
               ,1,1,0,1,0,0,0,&local_48);
  local_30 = _DAT_005d04fc;
  local_2c = _DAT_005d0500;
  local_28 = 0xbf800000;
  uVar4 = FUN_005a10e0("PromptText",DAT_005d04f4,DAT_005d04f8,&local_30,1);
  *(undefined4 *)(param_1 + 0x340) = uVar4;
  if (*(int *)(param_1 + 0x33c) == 0) {
    uVar4 = FUN_0059db20("PromptEdit","RichTextEditWin",param_1,0);
    *(undefined4 *)(param_1 + 0x344) = uVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x344) = 0;
  }
  if (*(int *)(param_1 + 0x344) != 0) {
    FUN_00579cc0(DAT_005d0504,DAT_005d0508);
    local_30 = _DAT_005d050c;
    local_2c = _DAT_005d0510;
    local_28 = 0xbf800000;
    FUN_00579c40(&local_30);
    FUN_00579860(0);
    FUN_0057be00(1);
    FUN_0057bdd0(1);
    FUN_0057be30(0);
    piVar5 = (int *)StyleNode::StyleNode((StyleNode *)&local_48,0x9ca4);
    local_4 = 0;
    param_2 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 1;
    FUN_0046c800(auStack_4c,*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x500),&param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_48);
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x344) + 0x4e0);
    FUN_0046c860(&param_2,*puVar1,puVar1);
    piVar5 = (int *)JustifyNode::JustifyNode((JustifyNode *)&local_48,1);
    local_4 = 2;
    param_2 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 3;
    FUN_0046c800(auStack_4c,*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x4e0),&param_2);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_48);
    piVar5 = (int *)TextPtrNode::TextPtrNode((TextPtrNode *)&local_30,(ushort *)&DAT_005d0514,-1);
    local_4 = 4;
    param_2 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))();
    local_4._0_1_ = 5;
    FUN_0046c800(auStack_4c,*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x4e0),&param_2);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
      param_2 = (undefined4 *)0x0;
    }
    local_4 = 0xffffffff;
    TextPtrNode::~TextPtrNode((TextPtrNode *)&local_30);
    FUN_0057d330();
    FUN_0057c750();
    piVar5 = param_3;
  }
  iVar2 = *(int *)(param_1 + 0x33c);
  iVar6 = 0;
  if (iVar2 == 0) {
    iVar6 = 0xd48;
  }
  if (*piVar5 != 0) {
    iVar6 = *piVar5;
  }
  iVar7 = 0;
  if (piVar5[1] != 0) {
    iVar7 = piVar5[1];
  }
  if (iVar2 == 0) {
    local_30 = 0x3d4ccccd;
    local_2c = 0x3c8b4396;
    local_28 = 0;
    local_3c = 0;
    local_38 = 0xbd851eb8;
    local_34 = 0xbf800000;
    uVar4 = FUN_005a1950("PromptOk","ui_select_item",&local_3c,&local_30,0,0,iVar6,0x411,0,0);
    *(undefined4 *)(param_1 + 0x350) = uVar4;
  }
  else {
    if (iVar2 == 1) {
      local_30 = 0x3d4ccccd;
      local_2c = 0x3c8b4396;
      local_28 = 0;
      local_3c = 0xbd8f5c29;
      local_38 = 0xbd851eb8;
      local_34 = 0xbf800000;
      uVar4 = FUN_005a1950("PromptYes","ui_select_item",&local_3c,&local_30,0,0,iVar6,0x4dc,0,0);
      uVar8 = 0x4dd;
      *(undefined4 *)(param_1 + 0x350) = uVar4;
    }
    else {
      if (iVar2 != 2) goto LAB_00472fa3;
      local_30 = 0x3d4ccccd;
      local_2c = 0x3c8b4396;
      local_28 = 0;
      local_3c = 0xbd8f5c29;
      local_38 = 0xbd851eb8;
      local_34 = 0xbf800000;
      uVar4 = FUN_005a1950("PromptYes","ui_select_item",&local_3c,&local_30,0,0,iVar6,0,0,0);
      uVar8 = 0;
      *(undefined4 *)(param_1 + 0x350) = uVar4;
    }
    local_34 = 0xbf800000;
    local_38 = 0xbd851eb8;
    local_3c = 0x3d8f5c29;
    local_28 = 0;
    local_2c = 0x3c8b4396;
    local_30 = 0x3d4ccccd;
    uVar4 = FUN_005a1950("PromptNo","ui_select_item",&local_3c,&local_30,0,0,iVar7,uVar8,0,0);
    *(undefined4 *)(param_1 + 0x34c) = uVar4;
  }
LAB_00472fa3:
  uStack_24 = 0x3ca3d70a;
  uStack_20 = 0x3ca3d70a;
  uStack_1c = 0;
  uStack_18 = 0x3eb0a3d7;
  uStack_14 = 0x3dd70a3d;
  uStack_10 = 0xbf800000;
  uVar4 = FUN_005a0c90("PromptExit","Interface\\NeuroNet\\Inventory\\X.3db",0,"ui_select_item",0,
                       &uStack_18,0,&uStack_24,0,0,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x348) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = 0x6e;
  *(undefined4 *)(param_1 + 0x78) = 6;
  if (*(int *)(param_1 + 0x33c) == 1) {
    FUN_005760d0(0x13);
    FUN_005760d0(0x12);
  }
  else if (*(int *)(param_1 + 0x33c) != 2) goto LAB_0047304f;
  FUN_005760d0(0xf);
LAB_0047304f:
  FUN_0059d8c0(param_1);
  ExceptionList = local_c;
  return 1;
}

