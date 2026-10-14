
void __fastcall FUN_00544710(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0efb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1c) != 0) {
    ExceptionList = &pvStack_c;
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = pvStack_c;
  return;
}

