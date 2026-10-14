
void FUN_0040dfa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b876c;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    if (param_2[2] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[3] - param_2[2]) >> 2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 4);
    param_1[2] = puVar3;
    puVar1 = (undefined4 *)param_2[3];
    for (puVar4 = (undefined4 *)param_2[2]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    param_1[3] = puVar3;
    param_1[4] = puVar3;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (param_2[6] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[7] - param_2[6]) >> 2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 4);
    param_1[6] = puVar3;
    puVar1 = (undefined4 *)param_2[7];
    for (puVar4 = (undefined4 *)param_2[6]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    param_1[7] = puVar3;
    param_1[8] = puVar3;
  }
  ExceptionList = local_c;
  return;
}

