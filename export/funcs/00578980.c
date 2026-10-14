
void FUN_00578980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c3bc1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    if (param_2[5] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[6] - param_2[5]) >> 3;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 8);
    param_1[5] = puVar3;
    puVar1 = (undefined4 *)param_2[6];
    for (puVar4 = (undefined4 *)param_2[5]; puVar4 != puVar1; puVar4 = puVar4 + 2) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
      }
      puVar3 = puVar3 + 2;
    }
    param_1[6] = puVar3;
    param_1[7] = puVar3;
  }
  ExceptionList = local_c;
  return;
}

