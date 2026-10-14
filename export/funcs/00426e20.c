
int * FUN_00426e20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_90 [2];
  int local_88 [3];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58 [7];
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b8be3;
  pvStack_c = ExceptionList;
  local_88[1] = 0xffffffff;
  local_88[0] = 0;
  puVar2 = local_58;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00426f80(local_88);
  local_34 = local_88[2];
  local_30 = local_7c;
  local_2c = local_78;
  local_28 = local_74;
  local_24 = local_70;
  local_20 = local_6c;
  local_1c = local_68;
  local_18 = local_64;
  local_14 = local_60;
  local_10 = local_5c;
  local_4._0_1_ = 1;
  FUN_00427250(local_90,local_58);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_3c != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,local_3c);
    local_3c = 0;
  }
  local_4 = 0xffffffff;
  if (local_88[0] != 0) {
    piVar3 = *(int **)TextureLib_exref;
    (**(code **)(*piVar3 + 0x38))(piVar3,local_88[0]);
    ExceptionList = local_14;
    return piVar3 + 10;
  }
  ExceptionList = pvStack_c;
  return (int *)(local_90[0] + 0x28);
}

