
undefined4 * __thiscall FUN_00532bc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c07e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00547440(param_2);
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x2d) = (undefined1)param_2;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[0x2e] = pvVar2;
  param_1[0x2f] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x30) = (undefined1)param_2;
  pvVar2 = operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[0x31] = pvVar2;
  param_1[0x32] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0x33) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0xcd) = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x36) = 0;
  pvVar2 = operator_new(0x1c);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x18) = 1;
  *(undefined1 *)((int)pvVar2 + 0x19) = 0;
  param_1[0x35] = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x19) = 1;
  *(undefined4 *)param_1[0x35] = 0;
  *(undefined4 *)(param_1[0x35] + 8) = 0;
  uVar1 = param_1[0x35];
  pvVar2 = operator_new(0x1c);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x18) = 0;
  *(undefined1 *)((int)pvVar2 + 0x19) = 0;
  param_1[0x34] = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[0x34] + 8) = param_1[0x34];
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *param_1 = &PTR_LAB_005de23c;
  param_1[1] = &PTR_LAB_005de1bc;
  param_1[3] = &PTR_FUN_005de1b0;
  param_1[0x2b] = &PTR_FUN_005de1a8;
  ExceptionList = local_c;
  return param_1;
}

