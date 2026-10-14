
void __fastcall FUN_00525140(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0168;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0xb4) != 0) {
    ExceptionList = &pvStack_c;
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  local_4 = 0xffffffff;
  FUN_005394b0();
  ExceptionList = pvStack_c;
  return;
}

