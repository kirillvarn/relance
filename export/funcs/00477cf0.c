
undefined4 * __fastcall FUN_00477cf0(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbdf5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  local_4 = 0;
  FUN_004c6140();
  local_4._0_1_ = 1;
  CacheString::clear((CacheString *)(param_1 + 0xe5));
  *(undefined1 *)(param_1 + 0xea) = local_11;
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xeb] = pvVar1;
  param_1[0xec] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  EquipDesc::EquipDesc((EquipDesc *)(param_1 + 0x253));
  *param_1 = &PTR_FUN_005d0eec;
  param_1[0x1f] = &PTR_OnReceive_005d0ee0;
  FUN_00477ee0();
  ExceptionList = local_c;
  return param_1;
}

