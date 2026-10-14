
undefined4
FUN_00435b80(CharacterProperties *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  CharacterProperties local_ac [100];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9179;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00443a90();
  local_4 = 0;
  CharacterProperties::operator=(local_ac,param_1);
  local_48 = param_2;
  local_44 = param_3;
  local_40 = param_5;
  local_3c = param_6;
  local_38 = param_7;
  local_34 = param_8;
  puVar4 = (undefined4 *)&stack0x00000024;
  puVar5 = local_30;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  pvVar1 = operator_new(0x3b0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00443ed0(param_4,local_ac);
  }
  local_4 = 0xffffffff;
  FUN_00443b10();
  ExceptionList = local_c;
  return uVar2;
}

