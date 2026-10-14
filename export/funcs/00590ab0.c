
void FUN_00590ab0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c48ec;
  local_c = ExceptionList;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 4) = 0;
    puVar1 = *(undefined4 **)(param_1 + 8);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[1] != 0) {
        puVar1[1] = puVar1[1] + -1;
      }
      if (puVar1[1] == 0) {
        puVar1[1] = 1;
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar2 = *(int *)(param_2 + 8);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

