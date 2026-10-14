
void FUN_00529ce0(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c02cc;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined2 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    iVar1 = *(int *)(param_2 + 2);
    *(int *)(param_1 + 2) = iVar1;
    if (iVar1 != 0) {
      FUN_004f7a80();
    }
    iVar1 = *(int *)(param_2 + 4);
    local_4 = CONCAT31(local_4._1_3_,1);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      FUN_004f7a80();
    }
  }
  ExceptionList = local_c;
  return;
}

