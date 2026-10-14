
void __fastcall FUN_00434b90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *local_20;
  int *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b90fe;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  local_18 = param_1;
  FUN_00436090(&local_1c,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar4 = (undefined4 *)FUN_0053e430(&local_1c);
  FUN_004362f0(&local_20,*puVar4,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  puVar4 = (undefined4 *)FUN_0053e430(&local_1c);
  FUN_004a2f80(&local_20,*puVar4,uVar1);
  if (*(int *)(param_1 + 0x2c) != -1) {
    (**(code **)(**(int **)Anim_exref + 0x10))(*(int **)Anim_exref,*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  }
  local_1c = *(int **)(param_1 + 0x24);
  local_20 = (int *)*local_1c;
  local_4._0_1_ = 1;
  if (local_20 != local_1c) {
    do {
      puVar4 = (undefined4 *)FUN_0053ab20(local_14,0);
      FUN_00516f70(auStack_10,*puVar4);
    } while (local_20 != local_1c);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004362f0(auStack_10,**(undefined4 **)(param_1 + 0x10),*(undefined4 **)(param_1 + 0x10));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar4 = *(undefined4 **)(param_1 + 4);
  local_4 = 0xffffffff;
  puVar3 = (undefined4 *)*puVar4;
  while (puVar3 != puVar4) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_004363e0(auStack_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = pvStack_c;
  return;
}

