
void __fastcall FUN_00565830(int *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1f7b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 != -1) {
    ExceptionList = &pvStack_c;
    if (param_1[2] != -1) {
      ExceptionList = &pvStack_c;
      if (param_1[3] != 0) {
        ExceptionList = &pvStack_c;
        (**(code **)(*(int *)param_1[4] + 0x44))((int *)param_1[4],param_1[3]);
        param_1[3] = 0;
      }
      (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4],param_1[2]);
    }
    (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4],*param_1);
    *param_1 = -1;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[4];
  local_4 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

