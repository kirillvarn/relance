
void __fastcall thunk_FUN_005a1af0(undefined4 *param_1)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_005c4fd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d54cc;
  uStack_4 = 1;
  FUN_004144f0();
  piVar1 = (int *)param_1[3];
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  uStack_4._0_1_ = 3;
  FUN_004144f0();
  piVar1 = (int *)param_1[0x24];
  piVar2 = (int *)param_1[0x23];
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
  }
  FUN_005b7e1d(param_1[0x23]);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  _Memory = (void *)param_1[0x1f];
  if (_Memory != (void *)0x0) {
    free(_Memory);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar1 = (int *)param_1[3];
  uStack_4 = 0xffffffff;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  ExceptionList = pvStack_c;
  return;
}

