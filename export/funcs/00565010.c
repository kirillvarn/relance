
void __fastcall FUN_00565010(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c39c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e2718;
  piVar1 = (int *)param_1[5];
  local_4 = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[5];
  local_4 = local_4 & 0xffffff00;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  *param_1 = &PTR_LAB_005e2708;
  ExceptionList = pvStack_c;
  return;
}

