
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005012e0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  puStack_8 = &LAB_005bf748;
  local_c = ExceptionList;
  local_1c = (undefined1)param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_20 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    iVar5 = FUN_005ad970();
    if (iVar5 != 0) {
      FUN_005995c0(local_18,local_14);
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_00537260(0,param_2,&local_20);
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  if (0 < (int)uVar2) {
    do {
      iVar3 = local_18;
      param_2 = rand();
      iVar5 = iVar5 + 1;
      *(float *)(iVar3 + -4 + iVar5 * 4) =
           (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20)) *
           (float)(int)param_2 * _DAT_005da778 + *(float *)(param_1 + 0x20);
    } while (iVar5 < (int)uVar2);
  }
  iVar5 = local_18;
  iVar3 = 0;
  if (0 < param_5) {
    do {
      *(undefined4 *)(local_18 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  for (iVar3 = uVar2 - param_6; iVar3 < (int)uVar2; iVar3 = iVar3 + 1) {
    *(undefined4 *)(local_18 + iVar3 * 4) = 0;
  }
  param_2 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (uVar4 < uVar2) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    puVar6 = &param_2;
    iVar3 = FUN_005ad970(puVar6);
    FUN_00537260(uVar1,uVar2 - iVar3,puVar6);
  }
  else {
    uVar4 = FUN_005ad970();
    if (uVar2 < uVar4) {
      FUN_005995c0(*(int *)(param_1 + 4) + uVar2 * 4,*(undefined4 *)(param_1 + 8));
    }
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4) = *(undefined4 *)(iVar5 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  FUN_005018a0(*(undefined4 *)(param_1 + 4),uVar2 - 1,param_1 + 0x10);
  FUN_005b7e1d(local_18);
  ExceptionList = local_c;
  return;
}

