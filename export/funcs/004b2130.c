
void __thiscall FUN_004b2130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iStack_f0;
  int local_ec;
  int local_e8;
  short *local_e4;
  undefined4 local_e0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_a8;
  undefined1 local_8c;
  int local_88 [6];
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_2c;
  undefined1 uStack_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bcffe;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x7f4);
  if (iVar2 == 0) {
    ExceptionList = &local_c;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4b8) + 0xa8))(0x3b,0,0);
    iVar2 = *(int *)(param_1 + 0x838);
    if (iVar2 == 0) {
      iStack_f0 = *(int *)((iVar1 + param_2) * 0x2c + 0x1c + *(int *)(param_1 + 0x800));
    }
    else if (iVar2 == 1) {
      iStack_f0 = *(int *)((iVar1 + param_2) * 0x2c + 0x1c + *(int *)(param_1 + 0x810));
    }
    else if (iVar2 == 2) {
      iStack_f0 = *(int *)((iVar1 + param_2) * 0x2c + 0x1c + *(int *)(param_1 + 0x820));
    }
    if (iStack_f0 < 1) {
      ExceptionList = local_c;
      return;
    }
    uStack_68 = 0;
    uStack_64 = 0;
    local_4 = 0;
    FUN_004144b0();
    local_4 = CONCAT31(local_4._1_3_,1);
    iStack_6c = 0;
    iStack_70 = -1;
    uStack_2c = 0;
    FUN_00413df0(0,0xffffffff);
    uStack_10 = 0;
    local_4 = 2;
    iStack_70 = iStack_f0;
    iStack_6c = iStack_f0;
    FUN_004b6420(&iStack_70,0,0x3e4ccccd);
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    FUN_004144f0();
    local_4._0_1_ = 4;
    FUN_00445d70();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00444e20();
    local_4 = 0xffffffff;
    FUN_00444e20();
    ExceptionList = local_c;
    return;
  }
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x508);
  }
  else {
    if (iVar2 == 2) {
      piVar3 = (int *)(*(int *)(param_1 + 0x548) + param_2 * 0x18);
      goto LAB_004b2309;
    }
    if (iVar2 != 3) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x528);
  }
  piVar3 = (int *)(iVar2 + param_2 * 0x18);
LAB_004b2309:
  piVar4 = local_88;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if (((0 < local_88[1]) && (*(char *)(param_1 + 0x84c) == '\0')) &&
     (*(char *)(param_1 + 0x84d) == '\0')) {
    local_e4 = (short *)0x0;
    local_e0 = 0;
    local_4 = 6;
    ExceptionList = &local_c;
    FUN_004144b0();
    local_a8 = 0;
    if ((local_e4 != (short *)0x0) && (*local_e4 != 0)) {
      *local_e4 = 0;
    }
    local_8c = 0;
    local_4 = 8;
    local_ec = local_88[1];
    local_e8 = local_88[1];
    FUN_004b6420(&local_ec,0,0x3e4ccccd);
    local_4._0_1_ = 0xb;
    local_4._1_3_ = 0;
    FUN_004144f0();
    local_4._0_1_ = 10;
    FUN_00445dc0(uStack_cc,uStack_c8);
    FUN_005b7e1d(uStack_cc);
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_00444e20();
    if (local_e4 != (short *)0x0) {
      free(local_e4);
    }
  }
  ExceptionList = local_c;
  return;
}

