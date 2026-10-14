
undefined4 * __thiscall FUN_0052d880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c04b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_0052c830(param_2,param_3);
  param_1[0x10] = 0;
  *param_1 = &PTR_LAB_005dd5d8;
  local_4 = 0;
  bVar1 = ID_String::IsEmpty((ID_String *)(*(int *)(*(int *)(param_1[1] + 0xc) + 4) + 0x84));
  if ((!bVar1) && (*(int *)Sound_exref != 0)) {
    FUN_00427a10(*(int *)(*(int *)(param_1[1] + 0xc) + 4) + 0x84,1);
    piVar2 = (int *)FUN_00428f80(100);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_00429040(1);
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      piVar2[0x11] = 0x3f800000;
      piVar2[0x12] = 0;
      piVar2[0x13] = 0;
      piVar2[0x14] = 0;
      piVar2[0x15] = 0;
      piVar2[0x16] = 0x43b40000;
      piVar2[0x17] = 0;
      piVar2[0x18] = -1;
      *piVar2 = (int)&PTR_LAB_005c9efc;
    }
    param_1[0x10] = piVar2;
    (**(code **)(*piVar2 + 0x88))(1);
    uVar3 = (**(code **)(*(int *)param_1[1] + 0x84))();
    uStack_20 = 0x3f800000;
    uStack_30 = 0x3f800000;
    local_40 = (undefined4 *)0x3f800000;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    (**(code **)(*(int *)param_1[0x10] + 0x94))(uVar3,&local_40);
  }
  ExceptionList = local_c;
  return param_1;
}

