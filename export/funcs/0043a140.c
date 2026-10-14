
void __fastcall FUN_0043a140(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b93fb;
  local_c = ExceptionList;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[0xd];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    if (puVar2[2] != 0) {
      FUN_0043cf60(1);
    }
    puVar2[2] = 0;
  }
  FUN_0043ce50();
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_4._0_1_ = 1;
  param_1[0xc] = &PTR_FUN_005cb044;
  puVar2 = (undefined4 *)param_1[0xd];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0043d010(puVar2);
    puVar2 = puVar1;
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  FUN_0043cef0();
  local_4._0_1_ = 3;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[7];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    if (puVar2[2] != 0) {
      FUN_0043cf40(1);
    }
    puVar2[2] = 0;
  }
  FUN_0043ce50();
  *(undefined1 *)(param_1 + 0xb) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[6] = &PTR_FUN_005cb03c;
  FUN_0043ce50();
  FUN_0043cef0();
  local_4 = 4;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[1];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    if (puVar2[2] != 0) {
      FUN_0043cf20(1);
    }
    puVar2[2] = 0;
  }
  FUN_0043ce50();
  *(undefined1 *)(param_1 + 5) = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_005cb034;
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0043d010(puVar2);
    puVar2 = puVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_0043cef0();
  ExceptionList = local_c;
  return;
}

