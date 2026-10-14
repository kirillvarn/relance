
void __fastcall FUN_0052f660(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c05de;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005ddcdc;
  local_4 = 2;
  if (param_1[0xc] != 0) {
    FUN_0040e990();
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 0x10))();
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_1[10] != 0) {
    FUN_004f7a90();
    param_1[10] = 0;
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[9] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_00537ad0();
    param_1[0xb] = 0;
  }
  param_1[8] = 0;
  local_4 = local_4 & 0xffffff00;
  if (param_1[6] != 0) {
    FUN_004f7a90();
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  if (param_1[7] != 0) {
    FUN_00537ad0();
    param_1[7] = 0;
  }
  param_1[4] = 0;
  local_4 = 0xffffffff;
  FUN_00531af0();
  ExceptionList = pvStack_c;
  return;
}

