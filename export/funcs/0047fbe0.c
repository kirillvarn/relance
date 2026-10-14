
undefined4 * __fastcall FUN_0047fbe0(undefined4 *param_1)

{
  bool bVar1;
  void *pvVar2;
  float10 fVar3;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bbfbd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0059f860();
  local_4 = 0;
  FUN_004c6140();
  local_4._0_1_ = 1;
  CacheString::clear((CacheString *)(param_1 + 0xe5));
  *(undefined1 *)(param_1 + 0xea) = uStack_18._3_1_;
  pvVar2 = operator_new(0x28);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[0xeb] = pvVar2;
  param_1[0xec] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  EquipDesc::EquipDesc((EquipDesc *)(param_1 + 0x253));
  *param_1 = &PTR_FUN_005d0eec;
  param_1[0x1f] = &PTR_OnReceive_005d0ee0;
  FUN_00477ee0();
  local_4 = 3;
  *param_1 = &PTR_FUN_005d192c;
  param_1[0x1f] = &PTR_OnReceive_005d191c;
  FUN_00477ee0();
  param_1[0x25e] = 1;
  *(undefined1 *)(param_1 + 0xd7) = 1;
  param_1[0x25d] = 0;
  param_1[0x260] = 1;
  *(undefined1 *)(param_1 + 0x261) = 0;
  param_1[0x262] = 1;
  *(undefined1 *)(param_1 + 0x27d) = 1;
  *(undefined1 *)(param_1 + 0x263) = 0;
  param_1[0x27e] = 0;
  param_1[0x13a] = 0;
  fVar3 = (float10)FUN_00483df0();
  param_1[0x264] = (float)fVar3;
  bVar1 = SinglePlayer();
  if (bVar1) {
    FUN_004c55f0();
    ExceptionList = local_c;
    return param_1;
  }
  local_14 = 0;
  (**(code **)(*DAT_0067ecd0 + 0x124))(DAT_00673344,&local_14,4);
  ExceptionList = uStack_18;
  return param_1;
}

