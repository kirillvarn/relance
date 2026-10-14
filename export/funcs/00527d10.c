
/* WARNING: Removing unreachable block (ram,0x00527d9c) */
/* WARNING: Removing unreachable block (ram,0x00527da0) */

void __fastcall FUN_00527d10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_005c0259;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005dd134;
  iVar3 = param_1[6];
  iVar1 = param_1[5];
  local_4 = 1;
  for (; iVar1 != iVar3; iVar1 = iVar1 + 0xc) {
    if ((*(int **)(iVar1 + 4) != (int *)0x0) &&
       ((**(code **)(**(int **)(iVar1 + 4) + 4))(), *(int *)(iVar1 + 4) != 0)) {
      FUN_004f7a90();
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    if ((*(int **)(iVar1 + 8) != (int *)0x0) &&
       ((**(code **)(**(int **)(iVar1 + 8) + 4))(), *(int *)(iVar1 + 8) != 0)) {
      FUN_004f7a90();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  iVar1 = param_1[6];
  iVar3 = param_1[5];
  for (iVar2 = iVar3; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 2;
    FUN_005298c0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005298c0();
  }
  param_1[6] = iVar3;
  FUN_005295d0();
  if (param_1[0x17] != 0) {
    FUN_0040e990();
  }
  iVar1 = param_1[6];
  for (iVar3 = param_1[5]; iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 3;
    FUN_005298c0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005298c0();
  }
  FUN_005b7e1d(param_1[5]);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_4 = 0xffffffff;
  FUN_00531af0();
  ExceptionList = pvStack_c;
  return;
}

