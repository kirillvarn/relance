
undefined4 * FUN_00556fd0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 unaff_retaddr;
  Vector local_a8 [12];
  void *local_9c;
  int local_74 [22];
  void *pvStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c14de;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  local_9c = operator_new(200);
  local_4 = 0;
  if (local_9c == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00410ca0();
  }
  *puVar1 = uVar2;
  piVar4 = local_74;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_2;
    param_2 = param_2 + 1;
    piVar4 = piVar4 + 1;
  }
  local_4 = 0xffffffff;
  if (local_74[0] == 1) {
    local_14 = 0x40490fdb;
    local_10 = 0x40490fdb;
  }
  FUN_00411120();
  FUN_00410ef0();
  if (DAT_006799bc == (int *)0x0) {
    DAT_006799bc = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_006799bc + 0x2c))(DAT_006799bc,local_a8);
  LookMatrixYup(local_a8);
  FUN_00410f60(local_a8);
  (**(code **)(*(int *)*puVar1 + 4))();
  *(undefined1 *)(puVar1 + 1) = unaff_retaddr;
  ExceptionList = pvStack_1c;
  return puVar1;
}

