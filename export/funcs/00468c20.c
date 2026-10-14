
void FUN_00468c20(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_38;
  TextRenderAttributes local_34;
  uint local_33;
  RenderDisplayList local_2c [4];
  undefined4 *local_28;
  int local_24;
  TRANode local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb55b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  StyleCollection::set_style(0xd5ec,(TextRenderAttributes *)&DAT_0066da14);
  StyleCollection::set_style(0x73f7,(TextRenderAttributes *)&DAT_0066da0c);
  StyleCollection::set_style(0xd681,(TextRenderAttributes *)&DAT_0066da04);
  StyleCollection::set_style(0xd801,(TextRenderAttributes *)&DAT_0066d9fc);
  StyleCollection::set_style(0x1d9d,(TextRenderAttributes *)&DAT_0066d9f4);
  StyleCollection::set_style(0x8283,(TextRenderAttributes *)&DAT_0066d9ec);
  StyleCollection::set_style(0xe784,(TextRenderAttributes *)&DAT_0066d9e4);
  StyleCollection::set_style(0x3ea8,(TextRenderAttributes *)&DAT_0066d9dc);
  StyleCollection::set_style(0xba28,(TextRenderAttributes *)&DAT_0066d9d4);
  StyleCollection::set_style(0x66b7,(TextRenderAttributes *)&DAT_0066d9cc);
  StyleCollection::set_style(0x2b34,(TextRenderAttributes *)&DAT_0066d9c4);
  StyleCollection::set_style(0x66ac,(TextRenderAttributes *)&DAT_0066d9bc);
  StyleCollection::set_style(0x828b,(TextRenderAttributes *)&DAT_0066d9b4);
  StyleCollection::set_style(0x1df5,(TextRenderAttributes *)&DAT_0066d9ac);
  StyleCollection::set_style(0x43e0,(TextRenderAttributes *)&DAT_0066d9a4);
  StyleCollection::set_style(0xd824,(TextRenderAttributes *)&DAT_0066d99c);
  StyleCollection::set_style(0xd190,(TextRenderAttributes *)&DAT_0066d994);
  StyleCollection::set_style(0x69f5,(TextRenderAttributes *)&DAT_0066d98c);
  StyleCollection::set_style(0x3343,(TextRenderAttributes *)&DAT_0066d984);
  StyleCollection::set_style(48000,(TextRenderAttributes *)&DAT_0066d97c);
  StyleCollection::set_style(0x5203,(TextRenderAttributes *)&DAT_0066d974);
  StyleCollection::set_style(0x3dbc,(TextRenderAttributes *)&DAT_0066d96c);
  StyleCollection::set_style(0x867f,(TextRenderAttributes *)&DAT_0066d964);
  DAT_0066d95d._0_1_ = (undefined1)DAT_00679bb4;
  DAT_0066d95d._1_1_ = (undefined1)((uint)DAT_00679bb4 >> 8);
  DAT_0066d95d._2_1_ = DAT_00679bb4._2_1_;
  StyleCollection::set_style(0x9ca4,(TextRenderAttributes *)&DAT_0066d95c);
  StyleCollection::set_style(0x76ec,(TextRenderAttributes *)&DAT_0066d95c);
  DAT_0066d955._0_1_ = (undefined1)DAT_00679bb4;
  DAT_0066d955._1_1_ = (undefined1)((uint)DAT_00679bb4 >> 8);
  DAT_0066d955._2_1_ = DAT_00679bb4._2_1_;
  StyleCollection::set_style(0x686c,(TextRenderAttributes *)&DAT_0066d954);
  DAT_0066d94d._0_1_ = (undefined1)DAT_00679bb4;
  DAT_0066d94d._1_1_ = (undefined1)((uint)DAT_00679bb4 >> 8);
  DAT_0066d94d._2_1_ = DAT_00679bb4._2_1_;
  StyleCollection::set_style(0xf64,(TextRenderAttributes *)&DAT_0066d94c);
  DAT_0066d95d._0_1_ = (undefined1)DAT_00679ba4;
  DAT_0066d95d._1_1_ = (undefined1)((uint)DAT_00679ba4 >> 8);
  DAT_0066d95d._2_1_ = DAT_00679ba4._2_1_;
  StyleCollection::set_style(0x3d0a,(TextRenderAttributes *)&DAT_0066d95c);
  local_28 = (undefined4 *)FUN_0042a7e0(0,0);
  local_24 = 0;
  local_33 = local_33 & 0xffe0c387 | 0xe0c387;
  local_4 = 0;
  local_34 = (TextRenderAttributes)0x8;
  piVar2 = (int *)TRANode::TRANode(local_20,&local_34,0xffffffff,0);
  local_4._0_1_ = 1;
  puStack_38 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
  piVar2 = local_28 + 1;
  local_4._0_1_ = 2;
  iVar3 = FUN_0042a7e0(local_28,local_28[1]);
  *piVar2 = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  FUN_0046ea00(iVar3 + 8,&puStack_38);
  local_24 = local_24 + 1;
  local_4._0_1_ = 1;
  if (puStack_38 != (undefined4 *)0x0) {
    (**(code **)*puStack_38)(1);
    puStack_38 = (undefined4 *)0x0;
  }
  local_4._0_1_ = 0;
  TRANode::~TRANode(local_20);
  piVar2 = (int *)JustifyNode::JustifyNode((JustifyNode *)&local_34,1);
  local_4._0_1_ = 3;
  puStack_38 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
  puVar1 = local_28;
  puVar6 = (undefined4 *)local_28[1];
  puVar5 = local_28 + 1;
  local_4._0_1_ = 4;
  puVar4 = operator_new(0xc);
  *puVar4 = puVar1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = puVar4;
  }
  puVar4[1] = puVar6;
  *puVar5 = puVar4;
  *(undefined4 **)puVar4[1] = puVar4;
  FUN_0046ea00(puVar4 + 2,&puStack_38);
  local_24 = local_24 + 1;
  local_4._0_1_ = 3;
  if (puStack_38 != (undefined4 *)0x0) {
    (**(code **)*puStack_38)(1);
    puStack_38 = (undefined4 *)0x0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  JustifyNode::~JustifyNode((JustifyNode *)&local_34);
  StyleCollection::set_style(0x4433,local_2c);
  puVar1 = local_28;
  local_4 = 0xffffffff;
  puVar6 = (undefined4 *)*local_28;
  while (puVar6 != puVar1) {
    puVar4 = (undefined4 *)*puVar6;
    FUN_0046d680(&puStack_38,puVar6);
    puVar6 = puVar4;
  }
  FUN_005b7e1d(local_28);
  ExceptionList = pvStack_c;
  return;
}

