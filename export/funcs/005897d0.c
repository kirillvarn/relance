
void __fastcall FUN_005897d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a4;
  undefined4 local_a0;
  void *local_9c;
  undefined4 local_98;
  void *local_94;
  undefined4 uStack_90;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  void **ppvStack_40;
  undefined4 auStack_3c [9];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c44cf;
  pvStack_c = ExceptionList;
  local_9c = (void *)0x0;
  local_98 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004144b0();
  local_4 = CONCAT31(local_4._1_3_,1);
  local_a0 = 0;
  local_a4 = 0xffffffff;
  local_60 = 0;
  FUN_00413df0(0,0xffffffff);
  local_44 = 0;
  local_a4 = *(undefined4 *)(param_1 + 0xcc);
  local_4 = 2;
  local_a0 = local_a4;
  if (*(int *)(param_1 + 0x84) == -1) {
    fStack_10 = *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0x68);
    fStack_14 = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 100);
    fStack_18 = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0x60);
  }
  else {
    puVar1 = (undefined4 *)
             (**(code **)(**(int **)Engine_exref + 0xa0))
                       (*(int **)Engine_exref,*(int *)(param_1 + 0x84));
    puVar3 = auStack_3c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  local_50 = *(undefined4 *)(param_1 + 0xb4);
  local_4c = *(undefined4 *)(param_1 + 0xb8);
  local_48 = *(undefined4 *)(param_1 + 0xbc);
  local_44 = 1;
  local_5c = fStack_18;
  local_58 = fStack_14;
  local_54 = fStack_10;
  FUN_004be370(&local_a4);
  ppvStack_40 = &local_94;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  FUN_004144f0();
  local_4 = CONCAT31(local_4._1_3_,4);
  for (iVar2 = iStack_84; iVar2 != iStack_80; iVar2 = iVar2 + 8) {
    FUN_00418f70(0);
  }
  FUN_005b7e1d(iStack_84);
  iStack_84 = 0;
  iStack_80 = 0;
  uStack_7c = 0;
  if (local_94 != (void *)0x0) {
    free(local_94);
    local_94 = (void *)0x0;
    uStack_90 = 0;
  }
  if (local_9c != (void *)0x0) {
    free(local_9c);
  }
  ExceptionList = pvStack_c;
  return;
}

