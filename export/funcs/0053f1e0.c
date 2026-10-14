
void __fastcall FUN_0053f1e0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c0cf6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[-3] = &PTR_LAB_005dd67c;
  param_1[-2] = &PTR_LAB_005dd5fc;
  *param_1 = &PTR_FUN_005dd5f4;
  local_4 = 1;
  if (param_1[0x2f] != 0) {
    FUN_004f7a90();
    param_1[0x2f] = 0;
  }
  piVar1 = (int *)param_1[0x2e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2e] = 0;
  }
  if (param_1[0x30] != 0) {
    FUN_00537ad0();
    param_1[0x30] = 0;
  }
  param_1[0x2d] = 0;
  if (param_1[0x31] != 0) {
    FUN_004f7a90();
    param_1[0x31] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (param_1[0x2f] != 0) {
    FUN_004f7a90();
    param_1[0x2f] = 0;
  }
  piVar1 = (int *)param_1[0x2e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2e] = 0;
  }
  if (param_1[0x30] != 0) {
    FUN_00537ad0();
    param_1[0x30] = 0;
  }
  param_1[0x2d] = 0;
  local_4 = 0xffffffff;
  FUN_005425f0();
  ExceptionList = pvStack_c;
  return;
}

