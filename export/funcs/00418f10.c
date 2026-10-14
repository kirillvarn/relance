
void FUN_00418f10(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8951;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_2;
    ExceptionList = &local_c;
    *param_1 = (int)puVar1;
    *(char *)(param_1 + 1) = (char)param_2[1];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}

