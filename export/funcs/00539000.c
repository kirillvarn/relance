
void __fastcall FUN_00539000(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0a78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005de738;
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
    if ((undefined4 *)puVar2[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[2])(1);
    }
    puVar2[2] = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (*(char *)(param_1 + 3) == '\0') {
      FUN_005b7e1d(puVar2);
      puVar2 = puVar1;
    }
    else {
      *puVar2 = param_1[4];
      param_1[4] = puVar2;
      puVar2 = puVar1;
    }
  }
  *param_1 = &PTR_FUN_005de754;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar2 = (undefined4 *)param_1[4];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005b7e1d(puVar2);
    puVar2 = puVar1;
  }
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}

