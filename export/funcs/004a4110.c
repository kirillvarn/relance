
void __fastcall FUN_004a4110(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bcbcf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d3fdc;
  param_1[0x1f] = &PTR_OnReceive_005d3fd0;
  param_1[0xcb] = &PTR_LAB_005d3fc8;
  local_4 = 2;
  if (*(char *)(param_1 + 0x19b) != '\0') {
    uVar2 = FUN_0042ae40(param_1 + 0x19a);
    FUN_004285c0(uVar2);
  }
  iVar1 = param_1[0x161];
  if (iVar1 != 0) {
    FUN_005b7ec6(iVar1,0x60,*(undefined4 *)(iVar1 + -4),~NewsBroadcastProperties_exref);
    FUN_005b7e1d(iVar1 + -4);
  }
  FUN_005b7e1d(param_1[0x163]);
  free((void *)param_1[0xd1]);
  FUN_005b7e1d(param_1[0xd2]);
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  malloc_strfree((char **)(param_1 + 0x158));
  FUN_0042cc50();
  param_1[0x158] = (char *)0x0;
  FUN_0042cc30();
  (**(code **)(**(int **)MaterialLib_exref + 0x28))(*(int **)MaterialLib_exref,param_1[0x157]);
  param_1[0x157] = 0xffffffff;
  pvStack_c._0_1_ = 1;
  FUN_0042cc50();
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  FUN_00576010();
  pvStack_c = (void *)0xffffffff;
  FUN_0059fa50();
  ExceptionList = pvStack_14;
  return;
}

