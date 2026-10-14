
void __fastcall thunk_FUN_005425f0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_005c0d56;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[-3] = &PTR_LAB_005df95c;
  param_1[-2] = &PTR_LAB_005df8dc;
  *param_1 = &PTR_FUN_005df8d0;
  uStack_4 = 1;
  if (param_1[0x2b] != 0) {
    FUN_004f7a90();
    param_1[0x2b] = 0;
  }
  piVar1 = (int *)param_1[0x2a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2a] = 0;
  }
  if (param_1[0x2c] != 0) {
    FUN_00537ad0();
    param_1[0x2c] = 0;
  }
  param_1[0x29] = 0;
  uStack_4 = uStack_4 & 0xffffff00;
  if (param_1[0x2b] != 0) {
    FUN_004f7a90();
    param_1[0x2b] = 0;
  }
  piVar1 = (int *)param_1[0x2a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2a] = 0;
  }
  if (param_1[0x2c] != 0) {
    FUN_00537ad0();
    param_1[0x2c] = 0;
  }
  param_1[0x29] = 0;
  uStack_4 = 0xffffffff;
  FUN_005394b0();
  ExceptionList = pvStack_c;
  return;
}

