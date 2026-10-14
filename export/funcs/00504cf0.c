
void __fastcall FUN_00504cf0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bfa48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_DAT_005dacbc;
  local_4 = 5;
  FUN_00506cc0();
  local_4._0_1_ = 4;
  FUN_005526d0();
  piVar1 = (int *)param_1[0x3e];
  piVar2 = (int *)*piVar1;
  local_4._0_1_ = 3;
  while (piVar2 != piVar1) {
    puVar3 = (undefined4 *)FUN_0053ab20(local_14,0);
    FUN_00516f70(local_10,*puVar3);
  }
  FUN_005b7e1d(param_1[0x3e]);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_1[0x3b] != 0) {
    FUN_004f7a90();
    param_1[0x3b] = 0;
  }
  piVar1 = (int *)param_1[0x3a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x3a] = 0;
  }
  if (param_1[0x3c] != 0) {
    FUN_00537ad0();
    param_1[0x3c] = 0;
  }
  param_1[0x39] = 0;
  local_4._0_1_ = 1;
  FUN_00509d60(local_10,*(undefined4 *)param_1[0xf],(undefined4 *)param_1[0xf]);
  FUN_005b7e1d(param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  FUN_005b7e1d(param_1[0x10]);
  param_1[0x10] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00509ca0(local_10,*(undefined4 *)param_1[2],(undefined4 *)param_1[2]);
  FUN_005b7e1d(param_1[2]);
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_005b7e1d(param_1[3]);
  param_1[3] = 0;
  *param_1 = &PTR_LAB_005dad1c;
  ExceptionList = pvStack_c;
  return;
}

