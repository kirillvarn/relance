
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_005631c0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int unaff_retaddr;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c1e1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_004b5060(param_2,0);
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  param_1[0x2c] = -0x40800000;
  (**(code **)(*param_1 + 0x98))("Interface\\NeuroNet\\MISC_bigblackplane.3db",0);
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  iStack_3c = 0;
  FUN_00422b80(param_1[0x2a],param_1[0x2b],(float)param_1[0x2c] + _DAT_005c99c8);
  FUN_005a0db0("Filter_BG","Interface\\intro\\objects\\MULTI_attentionreq\'d.cmp",auStack_20,0,
               &stack0xffffffb0,0,0,0,1,1,0,1,0,0,0,&fStack_44);
  param_1[0xdd] = unaff_retaddr;
  FUN_00562930(unaff_retaddr);
  iVar2 = FUN_0059db20("FilterTitle","RichTextWin",param_1,0);
  param_1[0xcd] = iVar2;
  iStack_3c = param_1[0x2c];
  fStack_40 = _DAT_005e208c + (float)param_1[0x2b];
  fStack_44 = _DAT_005e2088 + (float)param_1[0x2a];
  FUN_00579c40(&fStack_44);
  FUN_00579cc0(DAT_005e2090,DAT_005e2094);
  fStack_44 = (float)CONCAT31(fStack_44._1_3_,(undefined1)uStack_4);
  fStack_40 = (float)FUN_0042a7e0(0,0);
  iStack_3c = 0;
  local_c = (void *)0x0;
  FUN_0057da40(0x60079,&fStack_44);
  FUN_0057b370();
  uVar3 = StyleNode::StyleNode((StyleNode *)&stack0xffffffb0,0x9ca4);
  local_c._0_1_ = 1;
  FUN_0057b470(uVar3);
  local_c._0_1_ = 0;
  StyleNode::~StyleNode((StyleNode *)&stack0xffffffb0);
  uVar3 = StyleNode::StyleNode((StyleNode *)&stack0xffffffb0,0x1df5);
  local_c._0_1_ = 2;
  FUN_0057b470(uVar3);
  local_c = (void *)((uint)local_c._1_3_ << 8);
  StyleNode::~StyleNode((StyleNode *)&stack0xffffffb0);
  FUN_0057b3e0(&fStack_44);
  local_c = (void *)0xffffffff;
  puVar4 = (undefined4 *)FUN_0053e430(&uStack_4);
  FUN_0046c860(&stack0x00000000,*puVar4,fStack_40);
  FUN_005b7e1d(fStack_40);
  fStack_44 = 0.02;
  fStack_40 = 0.02;
  iStack_3c = 0;
  iVar2 = FUN_005a0c90("FilterCancel","Interface\\NeuroNet\\Inventory\\X.3db",0,"ui_select_item",0,
                       &stack0xffffffb0,0,&fStack_44,0,0,0,0,0x409,0,0);
  param_1[0xcc] = iVar2;
  uStack_38 = 0x3d4ccccd;
  uStack_34 = 0x3c8b4396;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0xbe2e147b;
  uStack_24 = 0xbf800000;
  iVar2 = FUN_005a1950("FilterOk","ui_select_item",&uStack_2c,&uStack_38,0,0,0xbdb,0x411,0,0);
  param_1[0xcb] = iVar2;
  puVar5 = &DAT_00614828;
  do {
    FUN_00562a60(param_1,puVar5);
    puVar5 = puVar5 + 0x20;
  } while ((int)puVar5 < 0x6148c8);
  FUN_005630f0();
  (**(code **)(*param_1 + 0x80))();
  if (param_1[0xd0] != 0) {
    FUN_0057c750();
  }
  ExceptionList = pvStack_14;
  return 1;
}

