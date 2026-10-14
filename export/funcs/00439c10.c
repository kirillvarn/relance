
void __fastcall FUN_00439c10(undefined4 *param_1)

{
  NewsBroadcastProperties *this;
  undefined4 *puVar1;
  MissionVendorProperties *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b9383;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00437b70();
  local_4._0_1_ = 2;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[7];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    this = (NewsBroadcastProperties *)puVar2[2];
    if (this != (NewsBroadcastProperties *)0x0) {
      NewsBroadcastProperties::~NewsBroadcastProperties(this);
      FUN_005b7e1d(this);
    }
    puVar2[2] = 0;
  }
  FUN_0043ce50();
  *(undefined1 *)(param_1 + 0xb) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[6] = &PTR_FUN_005cb02c;
  puVar2 = (undefined4 *)param_1[7];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0043d010(puVar2);
    puVar2 = puVar1;
  }
  puVar2 = (undefined4 *)param_1[10];
  param_1[8] = 0;
  param_1[7] = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
    FUN_005afe80(1);
  }
  param_1[10] = 0;
  local_4 = 3;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[1];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    this_00 = (MissionVendorProperties *)puVar2[2];
    if (this_00 != (MissionVendorProperties *)0x0) {
      MissionVendorProperties::~MissionVendorProperties(this_00);
      FUN_005b7e1d(this_00);
    }
    puVar2[2] = 0;
  }
  FUN_0043ce50();
  *(undefined1 *)(param_1 + 5) = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_005cb024;
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0043d010(puVar2);
    puVar2 = puVar1;
  }
  puVar2 = (undefined4 *)param_1[4];
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

