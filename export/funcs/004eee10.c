
void __fastcall FUN_004eee10(int param_1)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bf063;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_004144f0();
  piVar1 = *(int **)(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x14);
  local_4 = local_4 & 0xffffff00;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  _Memory = *(void **)(param_1 + 4);
  if (_Memory != (void *)0x0) {
    free(_Memory);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

