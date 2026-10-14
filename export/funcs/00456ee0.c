
void __fastcall FUN_00456ee0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba0b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005ce264;
  param_1[1] = &PTR_LAB_005ce234;
  param_1[2] = &PTR_LAB_005ce218;
  param_1[3] = &PTR_LAB_005ce1f8;
  param_1[4] = &PTR_LAB_005ce1c0;
  param_1[5] = &PTR_LAB_005ce198;
  param_1[6] = &PTR_LAB_005ce174;
  param_1[7] = &PTR_LAB_005ce13c;
  param_1[8] = &PTR_LAB_005ce124;
  local_4 = 0;
  malloc_strfree((char **)(param_1 + 0x1b));
  malloc_strfree((char **)(param_1 + 0x1c));
  if (*(char *)((int)param_1 + 0x77) == '\0') {
    if (*(char *)((int)param_1 + 0x76) == '\0') {
      FUN_0044f5c0(param_1[0x20]);
      if ((int *)param_1[0x20] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x20] + 0x60))();
        (**(code **)(*(int *)param_1[0x20] + 8))((int *)param_1[0x20]);
        param_1[0x20] = 0;
      }
    }
    if ((*(char *)((int)param_1 + 0x77) == '\0') && (*(char *)((int)param_1 + 0x76) == '\0'))
    goto LAB_00456fc3;
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x20] = 0;
  }
LAB_00456fc3:
  local_4 = 0xffffffff;
  FUN_0044fd80();
  ExceptionList = pvStack_c;
  return;
}

