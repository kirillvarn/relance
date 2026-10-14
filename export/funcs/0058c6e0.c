
/* WARNING: Removing unreachable block (ram,0x0058c8d7) */
/* WARNING: Removing unreachable block (ram,0x0058c8e8) */
/* WARNING: Removing unreachable block (ram,0x0058c8e4) */

undefined4 * __fastcall FUN_0058c6e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c46dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005793e0();
  *(undefined1 *)(param_1 + 0x124) = local_1d;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)(param_1 + 0x128) = local_1d;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  *(undefined1 *)(param_1 + 300) = local_1d;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  *(undefined1 *)(param_1 + 0x130) = local_1d;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x149] = 0x3f800000;
  param_1[0x145] = 0x3f800000;
  param_1[0x141] = 0x3f800000;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  *(undefined1 *)(param_1 + 0x158) = local_1d;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  *param_1 = &PTR_FUN_005e511c;
  param_1[0x1f] = &PTR_OnReceive_005e5110;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x136) = 0;
  param_1[0x137] = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  param_1[0x13b] = 0;
  param_1[0x13f] = 0x3b83126f;
  *(undefined1 *)(param_1 + 0x140) = 1;
  *(undefined1 *)((int)param_1 + 0x501) = 1;
  param_1[0x138] = 0xffffffff;
  param_1[0x139] = 0xffffffff;
  param_1[0x13c] = DAT_00615550;
  param_1[0x13e] = DAT_00615558;
  local_4 = 0;
  param_1[0x13d] = DAT_00615554;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)((int)param_1 + 0x541) = 0;
  *(undefined1 *)((int)param_1 + 0x542) = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  *(undefined1 *)(param_1 + 0x153) = 0;
  *(undefined1 *)((int)param_1 + 0x54d) = 1;
  *(undefined1 *)((int)param_1 + 0x54e) = 1;
  *(undefined1 *)((int)param_1 + 0x54f) = 1;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *(undefined1 *)((int)param_1 + 0x551) = 1;
  *(undefined1 *)((int)param_1 + 0x552) = 1;
  *(undefined1 *)((int)param_1 + 0x553) = 1;
  *(undefined1 *)(param_1 + 0x155) = 1;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  iVar2 = param_1[0x15a];
  iVar1 = param_1[0x159];
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 100) {
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4._0_1_ = 8;
    FUN_004144f0();
    local_4._0_1_ = 7;
    FUN_00445d70();
    local_4._0_1_ = 6;
    FUN_00444e20();
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00444e20();
  }
  param_1[0x15a] = iVar1;
  param_1[0x15d] = 2;
  param_1[0x15c] = 2;
  ExceptionList = local_c;
  return param_1;
}

