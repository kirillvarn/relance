
void __thiscall FUN_00571bd0(int param_1,code *param_2,code *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *local_20;
  int local_1c;
  undefined1 local_18 [4];
  int *local_14;
  int local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c35ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057b370();
  if ((char)param_3 != '\0') {
    FUN_00579970(&param_3,&local_20);
    FUN_005798b0(param_3,0);
  }
  uVar5 = StyleNode::StyleNode((StyleNode *)&local_20,0x4433);
  local_4 = 0;
  FUN_0057b470(uVar5);
  local_4 = 0xffffffff;
  StyleNode::~StyleNode((StyleNode *)&local_20);
  local_1c = param_1 + 0x188;
  local_20 = _vftable__exref;
  local_4 = 1;
  FUN_0057b470(&local_20);
  local_4 = 0xffffffff;
  RDLRefNode::~RDLRefNode((RDLRefNode *)&local_20);
  param_3 = _vftable__exref;
  local_4 = 2;
  FUN_0057b470(&param_3);
  local_4 = 0xffffffff;
  uVar5 = StyleNode::StyleNode((StyleNode *)&local_20,0x76ec);
  local_4 = 3;
  FUN_0057b470(uVar5);
  local_4 = 0xffffffff;
  StyleNode::~StyleNode((StyleNode *)&local_20);
  FUN_0046ba60(&param_3);
  iVar3 = (int)param_2;
  local_4 = 4;
  pcVar6 = *(code **)((int)param_2 + 0x58);
  if (*(code **)((int)param_2 + 0x58) == (code *)0x0) {
    pcVar6 = _C_exref;
  }
  FUN_0057db50(pcVar6,*(undefined4 *)((int)param_2 + 0x5c),local_18,0);
  FUN_0057b3e0(local_18);
  param_2 = _vftable__exref;
  local_4._0_1_ = 5;
  FUN_0057b470(&param_2);
  local_4._0_1_ = 4;
  if ((*(char *)(iVar3 + 0x95) == '\0') || (*(char *)(iVar3 + 0x94) != '\0')) {
    uVar5 = StyleNode::StyleNode((StyleNode *)&local_20,0x4433);
    local_4._0_1_ = 6;
    FUN_0057b470(uVar5);
    local_4._0_1_ = 4;
    StyleNode::~StyleNode((StyleNode *)&local_20);
    local_1c = param_1 + 0x194;
    local_20 = _vftable__exref;
    local_4._0_1_ = 7;
    FUN_0057b470(&local_20);
    local_4._0_1_ = 4;
    RDLRefNode::~RDLRefNode((RDLRefNode *)&local_20);
    param_2 = _vftable__exref;
    local_4._0_1_ = 8;
    FUN_0057b470(&param_2);
    local_4._0_1_ = 4;
    uVar5 = StyleNode::StyleNode((StyleNode *)&local_20,0x76ec);
    local_4._0_1_ = 9;
    FUN_0057b470(uVar5);
    local_4._0_1_ = 4;
    StyleNode::~StyleNode((StyleNode *)&local_20);
    if (*(char *)(iVar3 + 0x95) == '\0') {
      local_1c = param_1 + 0x1dc;
      local_20 = _vftable__exref;
      local_4._0_1_ = 10;
      FUN_0057b470(&local_20);
      local_4._0_1_ = 4;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_20);
      param_2 = _vftable__exref;
      local_4._0_1_ = 0xb;
      FUN_0057b470(&param_2);
    }
    if (*(char *)(iVar3 + 0x94) != '\0') {
      local_1c = param_1 + 0x1d0;
      local_20 = _vftable__exref;
      local_4._0_1_ = 0xc;
      FUN_0057b470(&local_20);
      local_4._0_1_ = 4;
      RDLRefNode::~RDLRefNode((RDLRefNode *)&local_20);
      param_2 = _vftable__exref;
      local_4 = CONCAT31(local_4._1_3_,0xd);
      FUN_0057b470(&param_2);
      param_2 = _vftable__exref;
    }
  }
  piVar4 = local_14;
  local_4 = 0xffffffff;
  piVar2 = (int *)*local_14;
  while (piVar2 != piVar4) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_0046ea80(0);
    FUN_005b7e1d(piVar2);
    local_10 = local_10 + -1;
    piVar2 = piVar1;
  }
  FUN_005b7e1d(local_14);
  ExceptionList = local_c;
  return;
}

