
undefined1 * __thiscall
FUN_004699d0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb6d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (undefined1)param_2;
  local_14 = param_1;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  param_1[0xc] = (undefined1)param_2;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(param_1 + 0x10) = pvVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4._0_1_ = 1;
  param_1[0x1c] = (undefined1)param_2;
  uVar3 = FUN_0042a7e0(0,0);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_4._0_1_ = 2;
  param_1[0x2c] = (undefined1)param_2;
  uVar3 = FUN_0042a7e0(0,0);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_4._0_1_ = 3;
  if (0 < param_2) {
    do {
      puVar4 = operator_new(0x10);
      local_4._0_1_ = 4;
      local_10 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        local_18 = (undefined1 *)0x0;
      }
      else {
        *puVar4 = (undefined1)param_2;
        pvVar2 = operator_new(0xc);
        *(void **)pvVar2 = pvVar2;
        *(void **)((int)pvVar2 + 4) = pvVar2;
        *(void **)(puVar4 + 4) = pvVar2;
        *(undefined4 *)(puVar4 + 8) = 0;
        *(undefined4 *)(puVar4 + 0xc) = 0;
        local_18 = puVar4;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      local_4._0_1_ = 3;
      iVar5 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
      *(int *)(iVar1 + 4) = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      FUN_005999b0(iVar5 + 8,&local_18);
      param_2 = param_2 + -1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  ExceptionList = local_c;
  return param_1;
}

