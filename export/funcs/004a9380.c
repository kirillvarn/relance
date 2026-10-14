
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a9380(void)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  float local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bce03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x980);
  local_4 = 0;
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0059f860();
    *(undefined1 *)(puVar2 + 0x141) = local_1c;
    puVar2[0x142] = 0;
    puVar2[0x143] = 0;
    puVar2[0x144] = 0;
    local_4._0_1_ = 2;
    FUN_005a6900(&local_1c);
    local_4._0_1_ = 3;
    FUN_005a6900(&local_1b);
    local_4._0_1_ = 4;
    FUN_005a6900(&local_1a);
    local_4._0_1_ = 5;
    FUN_005a6900(&local_19);
    local_4._0_1_ = 6;
    FUN_005a6900(&local_18);
    local_4._0_1_ = 7;
    FUN_005a6900(&local_17);
    local_4._0_1_ = 8;
    FUN_005a6900(&local_16);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_005a6900(&local_15);
    *puVar2 = &PTR_FUN_005d4a5c;
    puVar2[0x1f] = &PTR_OnReceive_005d4a4c;
  }
  local_4 = 0xffffffff;
  *(undefined1 *)((int)puVar2 + 0x32e) = 1;
  FUN_004afe30("../Data/interface/optlist.ini");
  fVar5 = (float10)FUN_004a92a0();
  local_14 = (float)fVar5;
  if (fVar5 < (float10)_DAT_005c7474) {
    ExceptionList = local_c;
    return 0;
  }
  piVar3 = (int *)FUN_005b36b0("default_graphics");
  fVar1 = local_14;
  if (piVar3 != (int *)0x0) {
    piVar3[4] = (int)local_14;
    (**(code **)*piVar3)(local_14);
    if ((float)piVar3[5] != (float)piVar3[4]) {
      local_10 = (undefined4 *)piVar3[4];
      piVar3[5] = (int)local_10;
      (**(code **)(*piVar3 + 4))(local_10);
    }
  }
  piVar3 = (int *)FUN_005b36b0("general_graphics");
  if (piVar3 != (int *)0x0) {
    piVar3[4] = (int)local_14;
    (**(code **)*piVar3)(fVar1);
    if ((float)piVar3[5] != (float)piVar3[4]) {
      local_10 = (undefined4 *)piVar3[4];
      piVar3[5] = (int)local_10;
      (**(code **)(*piVar3 + 4))(local_10);
    }
  }
  piVar3 = (int *)FUN_005b36b0("advanced_graphics");
  if (piVar3 != (int *)0x0) {
    piVar3[4] = 0;
    (**(code **)*piVar3)(0);
    if ((float)piVar3[5] != (float)piVar3[4]) {
      local_10 = (undefined4 *)piVar3[4];
      piVar3[5] = (int)local_10;
      (**(code **)(*piVar3 + 4))(local_10);
    }
  }
  uVar4 = ftol();
  FUN_004b0370(uVar4);
  (**(code **)*puVar2)(1);
  ExceptionList = local_10;
  return 1;
}

