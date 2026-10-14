
void __fastcall FUN_00589d50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c45b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e4f24;
  param_1[0x1f] = &PTR_OnReceive_005e4f18;
  local_4 = 1;
  if (*(char *)((int)param_1 + 0x389) != '\0') {
    *(undefined1 *)((int)param_1 + 0x389) = 0;
    DAT_0067d8c8 = DAT_0067d8c8 + -1;
    if (DAT_0067d8c8 < 1) {
      FUN_005646e0(0xb);
    }
    uVar1 = param_1[0xdc];
    FUN_004145d0(param_1[0xcb],(float)param_1[0x1a] + (float)param_1[0x2c]);
    FUN_00415860(uVar1);
  }
  FUN_004144f0();
  puVar2 = (undefined4 *)param_1[0xcd];
  if (puVar2 != (undefined4 *)0x0) {
    local_4._0_1_ = 3;
    FUN_004144f0();
    iVar3 = puVar2[5];
    iVar4 = puVar2[4];
    local_4._0_1_ = 2;
    for (; iVar4 != iVar3; iVar4 = iVar4 + 8) {
      FUN_00418f70(0);
    }
    FUN_005b7e1d(puVar2[4]);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    if ((void *)*puVar2 != (void *)0x0) {
      free((void *)*puVar2);
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    FUN_005b7e1d(puVar2);
  }
  param_1[0xcd] = 0;
  if (*(char *)(param_1 + 0xe7) != '\0') {
    FUN_0059d960(param_1);
  }
  if ((void *)param_1[0xdc] != (void *)0x0) {
    free((void *)param_1[0xdc]);
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

