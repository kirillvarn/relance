
void __fastcall FUN_00444ee0(int param_1)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b989e;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  FUN_004144f0();
  piVar1 = *(int **)(param_1 + 0x24);
  piVar2 = *(int **)(param_1 + 0x20);
  local_4 = CONCAT31(local_4._1_3_,1);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  _Memory = *(void **)(param_1 + 0x10);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

