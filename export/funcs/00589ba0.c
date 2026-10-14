
undefined4 * __fastcall FUN_00589ba0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4521;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  *(undefined1 *)((int)param_1 + 0x34b) = 0;
  *(undefined1 *)((int)param_1 + 0x34a) = 0;
  *(undefined1 *)((int)param_1 + 0x349) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)((int)param_1 + 0x361) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)((int)param_1 + 0x35f) = 0;
  *(undefined1 *)((int)param_1 + 0x35e) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)((int)param_1 + 899) = 0;
  *(undefined1 *)((int)param_1 + 0x382) = 0;
  *(undefined1 *)((int)param_1 + 0x381) = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)((int)param_1 + 0x387) = 0;
  *(undefined1 *)((int)param_1 + 0x386) = 0;
  *(undefined1 *)((int)param_1 + 0x385) = 0;
  *param_1 = &PTR_FUN_005e4f24;
  param_1[0x1f] = &PTR_OnReceive_005e4f18;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  param_1[0xd2] = DAT_00679bb0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)((int)param_1 + 0x34b) = 0xff;
  param_1[0xce] = 0xffffffff;
  param_1[0xcf] = 0xffffffff;
  param_1[0xd0] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)((int)param_1 + 0x35d) = 0;
  *(undefined1 *)((int)param_1 + 0x362) = 0;
  param_1[0xd9] = 1;
  param_1[0xda] = 0;
  param_1[0xdb] = 0x3d4ccccd;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)((int)param_1 + 0x379) = 0;
  *(undefined1 *)((int)param_1 + 0x37a) = 0;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined1 *)((int)param_1 + 0x389) = 0;
  if (DAT_0067d8c8 < 0) {
    DAT_0067d8c8 = 0;
  }
  pvVar1 = operator_new(0x34);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004144b0();
  }
  param_1[0xcd] = uVar2;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined1 *)((int)param_1 + 0x395) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  ExceptionList = local_c;
  return param_1;
}

