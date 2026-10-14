
undefined2 * __thiscall FUN_00529d50(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  if (*(int *)(param_1 + 2) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 2) = 0;
  }
  iVar1 = *(int *)(param_2 + 2);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 != 0) {
    FUN_004f7a80();
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    FUN_004f7a80();
  }
  return param_1;
}

