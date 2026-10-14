
int __thiscall FUN_0040d4b0(int param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_2 + 8) - iVar4) / 0x24;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(param_1 + 8) - iVar6) / 0x24;
  }
  if (uVar2 < uVar5) {
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(param_2 + 8) - iVar4) / 0x24;
    }
    if (iVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(param_1 + 0xc) - iVar6) / 0x24;
    }
    if (uVar5 <= uVar2) {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (*(int *)(param_1 + 8) - iVar6) / 0x24;
      }
      iVar6 = iVar4 + iVar6 * 0x24;
      for (; iVar4 != iVar6; iVar4 = iVar4 + 0x24) {
        FUN_0040e0a0(iVar4);
      }
      iVar4 = *(int *)(param_2 + 8);
      iVar3 = *(int *)(param_1 + 8);
      for (; iVar6 != iVar4; iVar6 = iVar6 + 0x24) {
        FUN_0040dfa0(iVar3,iVar6);
        iVar3 = iVar3 + 0x24;
      }
      if (*(int *)(param_2 + 4) != 0) {
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x24) * 0x24
        ;
        return param_1;
      }
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      return param_1;
    }
    iVar4 = *(int *)(param_1 + 8);
    for (; iVar6 != iVar4; iVar6 = iVar6 + 0x24) {
      FUN_00407000();
    }
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_2 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x24;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    pvVar1 = operator_new(iVar4 * 0x24);
    *(void **)(param_1 + 4) = pvVar1;
    iVar4 = *(int *)(param_2 + 8);
    for (iVar6 = *(int *)(param_2 + 4); iVar6 != iVar4; iVar6 = iVar6 + 0x24) {
      FUN_0040dfa0(pvVar1,iVar6);
      pvVar1 = (void *)((int)pvVar1 + 0x24);
    }
    *(void **)(param_1 + 8) = pvVar1;
    *(void **)(param_1 + 0xc) = pvVar1;
    return param_1;
  }
  iVar3 = *(int *)(param_2 + 8);
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0x24) {
    FUN_0040e0a0(iVar4);
    iVar6 = iVar6 + 0x24;
  }
  iVar4 = *(int *)(param_1 + 8);
  for (; iVar6 != iVar4; iVar6 = iVar6 + 0x24) {
    FUN_0040e200(0);
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 4) + ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x24) * 0x24;
    return param_1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return param_1;
}

