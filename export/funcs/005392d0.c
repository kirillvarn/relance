
undefined4 * __thiscall FUN_005392d0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_005c0ab3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_005dea2c;
  param_1[1] = &PTR_LAB_005de9ac;
  param_1[4] = 0;
  param_1[3] = _vftable__exref;
  *param_1 = _vftable__for__IObjInspect___exref;
  param_1[1] = _vftable__for__IObjAffect___exref;
  param_1[3] = _vftable__exref;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 1;
  uStack_3 = 0;
  *(undefined1 *)(param_1 + 10) = (undefined1)param_2;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xb] = pvVar1;
  param_1[0xc] = 0;
  _local_4 = CONCAT31(uStack_3,2);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xf0;
  FUN_004144b0();
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = (undefined1)param_2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x28] = 0xffffffff;
  *param_1 = &PTR_LAB_005de7ec;
  param_1[1] = &PTR_LAB_005de76c;
  param_1[3] = &PTR_FUN_005de764;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  ExceptionList = local_c;
  return param_1;
}

