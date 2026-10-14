
void __fastcall FUN_00503a80(int param_1)

{
  int *piVar1;
  undefined1 local_3c [36];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bf96c;
  pvStack_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    FUN_004215b0();
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    (**(code **)(*piVar1 + 0x94))(0xffffffff,local_3c);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x60))();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005379b0();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
  }
  FUN_00502d90();
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 4))();
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    FUN_004215b0();
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    (**(code **)(*piVar1 + 0x94))(0xffffffff,local_3c);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x60))();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_005379b0();
    (**(code **)(**(int **)(param_1 + 0x54) + 8))();
  }
  FUN_00502d90();
  FUN_004fcef0(param_1 + 0x58);
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))();
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    FUN_004215b0();
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    (**(code **)(*piVar1 + 0x94))(0xffffffff,local_3c);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x60))();
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_005379b0();
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  FUN_00502d90();
  local_4._0_1_ = 2;
  FUN_00502d90();
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  ExceptionList = pvStack_c;
  return;
}

