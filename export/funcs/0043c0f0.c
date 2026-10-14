
void __fastcall FUN_0043c0f0(undefined4 *param_1)

{
  MissionVendorProperties *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9418;
  local_c = ExceptionList;
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)param_1[1];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    this = (MissionVendorProperties *)puVar2[2];
    if (this != (MissionVendorProperties *)0x0) {
      MissionVendorProperties::~MissionVendorProperties(this);
      FUN_005b7e1d(this);
    }
    puVar2[2] = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (*(char *)(param_1 + 3) == '\0') {
      FUN_005afe80(1);
      puVar2 = puVar1;
    }
    else {
      *puVar2 = param_1[4];
      param_1[4] = puVar2;
      puVar2 = puVar1;
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_005cb024;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar2 = (undefined4 *)param_1[4];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005b7e1d(puVar2);
    puVar2 = puVar1;
  }
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

