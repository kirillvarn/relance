
void __fastcall FUN_00462e30(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  code **ppcVar5;
  code *pcVar6;
  code *local_18;
  code *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bad9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x334) = DAT_0066da48;
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(**(int **)(param_1 + 0x358) + 0xc);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(**(int **)(param_1 + 0x358) + 0x10);
  }
  if (*(int *)(param_1 + 0x334) == DAT_0066da48) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x494) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x498) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_0057b370();
    uVar4 = JustifyNode::JustifyNode((JustifyNode *)&local_14,1);
    local_4 = 0;
    FUN_0057b470(uVar4);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_14);
    uVar4 = StyleNode::StyleNode((StyleNode *)&local_14,0x9ca4);
    local_4 = 1;
    FUN_0057b470(uVar4);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_14);
    local_10 = param_1 + 0x3b4;
    local_14 = _vftable__exref;
    local_4 = 2;
    FUN_0057b470(&local_14);
    local_4 = 0xffffffff;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
    if ((DAT_0066d3f0 == 0) || ((*(byte *)(param_1 + 0x6c) & 2) != 0)) goto LAB_004632bf;
    FUN_0045da10(0);
    uVar4 = 0;
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x494) + 0x6c);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x498) + 0x6c);
    *pbVar1 = *pbVar1 | 1;
    FUN_0057b370();
    uVar4 = JustifyNode::JustifyNode((JustifyNode *)&local_14,1);
    local_4 = 3;
    FUN_0057b470(uVar4);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_14);
    uVar4 = StyleNode::StyleNode((StyleNode *)&local_14,0x9ca4);
    local_4 = 4;
    FUN_0057b470(uVar4);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_14);
    if (*(int *)(param_1 + 0x338) == 0) {
      local_10 = param_1 + 0x36c;
      local_14 = _vftable__exref;
      local_4 = 5;
      FUN_0057b470(&local_14);
      pcVar6 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
      FUN_0057b370();
      local_10 = param_1 + 900;
      local_14 = _vftable__exref;
      local_4 = 6;
      FUN_0057b470(&local_14);
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
      FUN_0057b370();
      local_10 = param_1 + 0x390;
      local_4 = 7;
    }
    else {
      local_10 = param_1 + 0x378;
      local_14 = _vftable__exref;
      local_4 = 8;
      FUN_0057b470(&local_14);
      pcVar6 = ~RDLRefNode_exref;
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
      FUN_0057b370();
      local_10 = param_1 + 0x39c;
      local_14 = _vftable__exref;
      local_4 = 9;
      FUN_0057b470(&local_14);
      local_4 = 0xffffffff;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_14);
      FUN_0057b370();
      local_10 = param_1 + 0x3a8;
      local_4 = 10;
    }
    local_14 = _vftable__exref;
    FUN_0057b470(&local_14);
    local_4 = 0xffffffff;
    (*pcVar6)();
    local_14 = _vftable__exref;
    local_4 = 0xb;
    FUN_0057b470(&local_14);
    local_4 = 0xffffffff;
    uVar4 = JustifyNode::JustifyNode((JustifyNode *)&local_14,1);
    local_4 = 0xc;
    FUN_0057b470(uVar4);
    local_4 = 0xffffffff;
    JustifyNode::~JustifyNode((JustifyNode *)&local_14);
    uVar4 = StyleNode::StyleNode((StyleNode *)&local_14,0xd5ec);
    local_4 = 0xd;
    FUN_0057b470(uVar4);
    local_4 = 0xffffffff;
    StyleNode::~StyleNode((StyleNode *)&local_14);
    iVar2 = *(int *)(param_1 + 0x32c);
    if (iVar2 != 0) {
      FUN_0046d920(&local_18,(uint *)(param_1 + 0x334));
      pcVar6 = *(code **)(iVar2 + 4);
      if ((local_18 == pcVar6) || (*(uint *)(local_18 + 0xc) < *(uint *)(param_1 + 0x334))) {
        local_14 = pcVar6;
        ppcVar5 = &local_14;
      }
      else {
        ppcVar5 = &local_18;
      }
      if ((*ppcVar5 != pcVar6) && (iVar2 = *(int *)(*ppcVar5 + 0x10), iVar2 != 0)) {
        FUN_0057b3e0(iVar2);
      }
    }
    if ((DAT_0066d3f0 == 0) || ((*(byte *)(param_1 + 0x6c) & 2) != 0)) goto LAB_004632bf;
    FUN_0045da10(1);
    if (*(int *)(param_1 + 0x338) == 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
  }
  FUN_0045da50(uVar4);
LAB_004632bf:
  bVar3 = *(byte *)(*(int *)(param_1 + 0x490) + 0x6c);
  if (*(int *)(param_1 + 0x350) == 0) {
    bVar3 = bVar3 & 0xfe;
  }
  else {
    bVar3 = bVar3 | 1;
  }
  *(byte *)(*(int *)(param_1 + 0x490) + 0x6c) = bVar3;
  ExceptionList = local_c;
  return;
}

