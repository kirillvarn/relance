
void FUN_0048cce0(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  undefined1 uStack0000000d;
  undefined1 uStack0000000e;
  undefined1 uStack0000000f;
  undefined1 uStack00000011;
  void *in_stack_00001008;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bc4a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005b7e90();
  if (*(int *)(extraout_ECX + 0x378) == -1) {
    uStack_1c = 0;
    (**(code **)(**(int **)(extraout_ECX + 0x440) + 0xa8))();
    (**(code **)(**(int **)(extraout_ECX + 0x42c) + 0xa8))();
    (**(code **)(**(int **)(extraout_ECX + 0x430) + 0xa8))();
    (**(code **)(**(int **)(extraout_ECX + 0x434) + 0xa8))();
    FUN_0041c970();
    iVar1 = FUN_0042a7e0();
    piVar2 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_4,0x9ca4);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
    iVar4 = FUN_0042a7e0();
    *(int *)(iVar1 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    FUN_0046ea00();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)();
    }
    StyleNode::~StyleNode((StyleNode *)&uStack_4);
    wcslen((wchar_t *)&stack0x00000808);
    FUN_0057e2c0();
    FUN_0057b370();
    FUN_0057b3e0();
    FUN_005798b0();
    FUN_0046c860();
    FUN_005b7e1d();
  }
  else {
    uStack_1c = 0x400;
    iVar1 = *(int *)(extraout_ECX + 0x378) * 0x60 + *(int *)(extraout_ECX + 0x394);
    FUN_0041c970();
    uStack_1c = 0;
    (**(code **)(**(int **)(extraout_ECX + 0x42c) + 0xa8))();
    FUN_0041c970();
    (**(code **)(**(int **)(extraout_ECX + 0x430) + 0xa8))();
    uStack_4 = 0;
    param_1._1_1_ = 0;
    param_1._2_1_ = 0;
    param_1._3_1_ = 0;
    param_2 = 0;
    uStack00000009 = 0;
    uStack0000000a = 0;
    uStack0000000b = 0;
    param_3 = 0;
    uStack0000000d = 0;
    uStack0000000e = 0;
    uStack0000000f = 0;
    param_4 = 0;
    uStack00000011 = 0;
    if (*(int *)(iVar1 + 0x5c) == 0) {
      FmtStr::begin_mad_lib((FmtStr *)&uStack_4,0x741);
    }
    else {
      FmtStr::begin_mad_lib((FmtStr *)&uStack_4,0x732);
      FmtStr::append_int((FmtStr *)&uStack_4,*(uint *)(iVar1 + 0x5c));
    }
    FmtStr::end_mad_lib((FmtStr *)&uStack_4);
    FUN_0041c970();
    (**(code **)(**(int **)(extraout_ECX + 0x434) + 0xa8))();
    (**(code **)(**(int **)(extraout_ECX + 0x440) + 0xa8))();
    FUN_0041c970();
    puVar3 = operator_new(0xc);
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    piVar2 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_4,0x9ca4);
    puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))();
    iVar1 = FUN_0042a7e0();
    puVar3[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    FUN_0046ea00();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)();
    }
    StyleNode::~StyleNode((StyleNode *)&uStack_4);
    wcslen((wchar_t *)&param_2);
    FUN_0057e2c0();
    FUN_0057b370();
    FUN_0057b3e0();
    FUN_005798b0();
    FUN_0048d140();
    puVar5 = (undefined4 *)*puVar3;
    while (puVar5 != puVar3) {
      puVar5 = (undefined4 *)*puVar5;
      FUN_0046d680();
    }
    FUN_005b7e1d();
    FmtStr::~FmtStr((FmtStr *)&uStack_1c);
  }
  ExceptionList = in_stack_00001008;
  return;
}

