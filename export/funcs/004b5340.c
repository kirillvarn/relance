
void __fastcall FUN_004b5340(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005bd114;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d5454;
  local_4 = 1;
  if (DAT_00672288 == param_1) {
    DAT_00672288 = (undefined4 *)0x0;
  }
  piVar1 = (int *)param_1[0x55];
  piVar2 = (int *)*piVar1;
  local_1c = param_1;
  if (param_1[0x58] == 0) {
    while (local_24 = (int)piVar2, piVar2 != piVar1) {
      puVar4 = (undefined4 *)FUN_00526960(local_18,0);
      FUN_0046c8c0(local_14,*puVar4);
    }
  }
  else {
    FUN_004b6870(piVar1[1]);
    *(undefined4 *)(param_1[0x55] + 4) = param_1[0x56];
    param_1[0x58] = 0;
    *(undefined4 *)param_1[0x55] = param_1[0x55];
    *(undefined4 *)(param_1[0x55] + 8) = param_1[0x55];
    FUN_0053e430(&local_24);
  }
  FUN_005b7e1d(param_1[0x55]);
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  FUN_005b7e1d(param_1[0x56]);
  param_1[0x56] = 0;
  local_20 = param_1 + 0x3b;
  puVar4 = param_1 + 0x3f;
  local_4._0_1_ = 4;
  local_10 = puVar4;
  FUN_004144f0();
  iVar3 = param_1[0x44];
  iVar5 = param_1[0x43];
  local_4 = CONCAT31(local_4._1_3_,3);
  for (; iVar5 != iVar3; iVar5 = iVar5 + 8) {
    FUN_00418f70(0);
  }
  FUN_005b7e1d(param_1[0x43]);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  if ((void *)*puVar4 != (void *)0x0) {
    free((void *)*puVar4);
    *puVar4 = 0;
    param_1[0x40] = 0;
  }
  puVar4 = local_20;
  if ((void *)local_20[2] != (void *)0x0) {
    free((void *)local_20[2]);
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_005a1af0();
  ExceptionList = local_c;
  return;
}

