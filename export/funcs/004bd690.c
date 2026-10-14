
void __fastcall FUN_004bd690(undefined4 *param_1)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd4f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d5f7c;
  if (DAT_0067244c == param_1) {
    DAT_0067244c = (undefined4 *)0x0;
  }
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_004144f0();
  piVar1 = (int *)param_1[0x46];
  piVar2 = (int *)param_1[0x45];
  local_4 = CONCAT31(local_4._1_3_,2);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
  }
  FUN_005b7e1d(param_1[0x45]);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  _Memory = (void *)param_1[0x41];
  if (_Memory != (void *)0x0) {
    free(_Memory);
    param_1[0x41] = 0;
    param_1[0x42] = 0;
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    free((void *)param_1[0x3f]);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
  }
  local_4 = 0xffffffff;
  FUN_005a1af0();
  ExceptionList = pvStack_c;
  return;
}

