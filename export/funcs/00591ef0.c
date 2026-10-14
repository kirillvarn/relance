
void __fastcall FUN_00591ef0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c4a3b;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  local_14 = param_1;
  FUN_0053e430(&local_1c);
  if (local_1c != *(int **)(param_1 + 0x18)) {
    do {
      FUN_005b7e1d(local_1c[3]);
      FUN_0046dfb0(&local_18,local_1c);
      local_1c = local_18;
    } while (local_18 != *(int **)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 4);
  local_1c = (int *)*piVar1;
  while (local_1c != piVar1) {
    puVar3 = (undefined4 *)FUN_0053ab20(&local_18,0);
    FUN_00516f70(&local_10,*puVar3);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar2 = local_4 >> 8;
  local_4 = CONCAT31((int3)uVar2,2);
  local_10 = param_1 + 0x14;
  FUN_0053e430(&local_1c);
  if (local_1c != *(int **)(param_1 + 0x18)) {
    do {
      FUN_005b7e1d(local_1c[3]);
      FUN_0046dfb0(&local_18,local_1c);
      local_1c = local_18;
    } while (local_18 != *(int **)(param_1 + 0x18));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005946f0(&local_10,**(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_1 + 0x18));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  piVar1 = *(int **)(param_1 + 4);
  local_1c = (int *)*piVar1;
  local_4 = 0xffffffff;
  while (local_1c != piVar1) {
    puVar3 = (undefined4 *)FUN_0053ab20(&local_10,0);
    FUN_00516f70(&local_14,*puVar3);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

