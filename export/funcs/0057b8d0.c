
undefined4 * __fastcall FUN_0057b8d0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  IMEFocus *pIVar3;
  undefined1 local_15;
  undefined4 *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3e12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = param_1;
  FUN_005793e0();
  local_4 = 0;
  FUN_0046ba60(&local_15);
  *param_1 = &PTR_FUN_005e476c;
  param_1[0x1f] = &PTR_OnReceive_005e4760;
  *(undefined1 *)((int)param_1 + 0x401) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x125) = 1;
  param_1[0x126] = &PTR_LAB_005cbed8;
  *(undefined1 *)((int)param_1 + 0x4bb) = 0;
  *(undefined1 *)((int)param_1 + 0x4ba) = 0;
  *(undefined1 *)((int)param_1 + 0x4b9) = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)(param_1 + 0x131) = local_15;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x137) = local_15;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x138] = pvVar1;
  param_1[0x139] = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x13a) = local_15;
  uVar2 = FUN_0042a7e0(0,0);
  param_1[0x13b] = uVar2;
  param_1[0x13c] = 0;
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x13f) = local_15;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x140] = pvVar1;
  param_1[0x141] = 0;
  local_4._0_1_ = 6;
  *(undefined1 *)(param_1 + 0x145) = local_15;
  *(undefined1 *)((int)param_1 + 0x515) = local_15;
  *(undefined1 *)(param_1 + 0x148) = 0;
  FUN_0057f7c0();
  local_4._0_1_ = 7;
  param_1[0x14b] = 0;
  *param_1 = &PTR_FUN_005e4844;
  param_1[0x1f] = &PTR_OnReceive_005e4838;
  param_1[0x126] = &PTR_LAB_005e4830;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)(param_1 + 299) = 1;
  param_1[0x12d] = DAT_005e4564;
  param_1[300] = DAT_005e4564;
  param_1[0x12a] = 4;
  param_1[0x12e] = 0xffffffff;
  param_1[0x135] = DAT_0067c40c;
  param_1[0x12f] = DAT_005e4568;
  param_1[0x13d] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(undefined2 *)(param_1 + 0x14a) = 0x5f;
  *(undefined1 *)((int)param_1 + 0x52a) = 0;
  param_1[0x143] = 0;
  *(undefined1 *)((int)param_1 + 0x52b) = 1;
  pIVar3 = IMEFocus::GetSingleton();
  if (pIVar3 != (IMEFocus *)0x0) {
    local_10 = operator_new(0xa0);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (local_10 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00564280(param_1);
    }
    param_1[0x14b] = uVar2;
  }
  ExceptionList = local_c;
  return param_1;
}

