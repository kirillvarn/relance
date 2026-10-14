
void __fastcall FUN_0050a170(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bfb4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005db1b4;
  local_4 = 2;
  FUN_0050b170();
  puVar1 = (undefined4 *)param_1[0x1a];
  local_4._0_1_ = 1;
  puVar3 = (undefined4 *)*puVar1;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_00516f70(local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(param_1[0x1a]);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00509ca0(local_10,*(undefined4 *)param_1[2],(undefined4 *)param_1[2]);
  FUN_005b7e1d(param_1[2]);
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_005b7e1d(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR_LAB_005db1f0;
  ExceptionList = local_c;
  return;
}

