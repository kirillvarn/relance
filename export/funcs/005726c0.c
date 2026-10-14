
undefined4 * __fastcall FUN_005726c0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c388b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00594580();
  FUN_00591ae0(uVar1);
  local_4 = 0;
  FUN_00591e30();
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  local_4._0_1_ = 6;
  *(undefined1 *)(param_1 + 0x3d) = local_11;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[0x3e] = pvVar2;
  param_1[0x3f] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined1 *)(param_1 + 0x40) = local_11;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[0x41] = pvVar2;
  param_1[0x42] = 0;
  param_1[0x2d] = 0;
  *param_1 = &PTR_FUN_005e2ef4;
  param_1[0x1f] = &PTR_LAB_005e2ed8;
  param_1[0x20] = &PTR_LAB_005e2ed0;
  ExceptionList = local_c;
  return param_1;
}

