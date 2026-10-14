
void __fastcall FUN_00538560(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c09f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005de730;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[0xf];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    free((void *)puVar2[2]);
    puVar2[2] = 0;
  }
  param_1[0xe] = &PTR_FUN_005de728;
  puVar2 = (undefined4 *)param_1[0xf];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_005b7e1d(puVar2);
      puVar2 = puVar1;
    }
    else {
      *puVar2 = param_1[0x12];
      param_1[0x12] = puVar2;
      puVar2 = puVar1;
    }
  }
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  puVar2 = (undefined4 *)param_1[0x12];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005b7e1d(puVar2);
    puVar2 = puVar1;
  }
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_005de720;
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[1];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    FUN_005b7e1d(puVar2[2]);
    puVar2[2] = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0043d010(puVar2);
    puVar2 = puVar1;
  }
  puVar2 = (undefined4 *)param_1[4];
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_005de718;
  param_1[2] = 0;
  param_1[1] = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
    FUN_005afe80(1);
  }
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

