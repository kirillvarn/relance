
void __fastcall FUN_00444e50(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005b9873;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_004144f0();
  piVar1 = (int *)param_1[5];
  piVar2 = (int *)param_1[4];
  local_4 = local_4 & 0xffffff00;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
  }
  FUN_005b7e1d(param_1[4]);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

