
void __fastcall FUN_0052b510(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c041e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005dd218;
  local_4 = 2;
  if (param_1[0x13] != 0) {
    FUN_004f7a90();
    param_1[0x13] = 0;
  }
  piVar1 = (int *)param_1[0x12];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x12] = 0;
  }
  if (param_1[0x14] != 0) {
    FUN_00537ad0();
    param_1[0x14] = 0;
  }
  param_1[0x11] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_1[0x13] != 0) {
    FUN_004f7a90();
    param_1[0x13] = 0;
  }
  piVar1 = (int *)param_1[0x12];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x12] = 0;
  }
  if (param_1[0x14] != 0) {
    FUN_00537ad0();
    param_1[0x14] = 0;
  }
  param_1[0x11] = 0;
  FUN_005b7e1d(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = _vftable__exref;
  FUN_005b7e1d(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  ExceptionList = pvStack_c;
  return;
}

