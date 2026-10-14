
void __thiscall FUN_0043c1b0(int param_1,MissionVendorProperties *param_2)

{
  int iVar1;
  MissionVendorProperties *pMVar2;
  undefined4 *puVar3;
  MissionVendorProperties *pMVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pMVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b949b;
  local_c = ExceptionList;
  iVar1 = *(int *)param_2;
  puVar3 = (undefined4 *)0x0;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
    param_2 = (MissionVendorProperties *)(undefined4 *)0x0;
  } while ((puVar3 != (undefined4 *)0x0) &&
          (param_2 = (MissionVendorProperties *)puVar3, *(int *)puVar3[2] != iVar1));
  ExceptionList = &local_c;
  if (param_2 != (MissionVendorProperties *)0x0) {
    pMVar4 = *(MissionVendorProperties **)((int)param_2 + 8);
    ExceptionList = &local_c;
    if (pMVar4 != (MissionVendorProperties *)0x0) {
      ExceptionList = &local_c;
      MissionVendorProperties::~MissionVendorProperties(pMVar4);
      FUN_005b7e1d(pMVar4);
    }
    FUN_0043cf80(&param_2);
  }
  pMVar4 = operator_new(0x60);
  local_4 = 0;
  if (pMVar4 == (MissionVendorProperties *)0x0) {
    pMVar4 = (MissionVendorProperties *)0x0;
  }
  else {
    pMVar4 = (MissionVendorProperties *)MissionVendorProperties::MissionVendorProperties(pMVar4);
  }
  local_4 = 0xffffffff;
  MissionVendorProperties::operator=(pMVar4,pMVar2);
  if ((*(char *)(param_1 + 0xc) == '\0') ||
     (puVar3 = *(undefined4 **)(param_1 + 0x10), puVar3 == (undefined4 *)0x0)) {
    puVar3 = operator_new(0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
  }
  puVar3[1] = *(undefined4 *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[2] = pMVar4;
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  else {
    **(undefined4 **)(param_1 + 8) = puVar3;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  ExceptionList = local_c;
  return;
}

