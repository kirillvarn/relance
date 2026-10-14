
undefined4 __thiscall FUN_00449d50(int param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  SetpointProperties local_30 [8];
  char *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9b79;
  local_c = ExceptionList;
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x518);
  ExceptionList = &local_c;
  do {
    if ((*piVar4 != 0) && (puVar1 = *(undefined4 **)(*piVar4 + 0x1b8), puVar1 != (undefined4 *)0x0))
    {
      SetpointProperties::SetpointProperties(local_30);
      local_4 = 0;
      SetpointProperties::extract_from_name(local_30,(char *)*puVar1);
      iVar3 = stricmp(local_28,param_2);
      local_4 = 0xffffffff;
      if (iVar3 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x518 + iVar5 * 4);
        SetpointProperties::~SetpointProperties(local_30);
        ExceptionList = local_c;
        return uVar2;
      }
      SetpointProperties::~SetpointProperties(local_30);
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 0x40);
  ExceptionList = local_c;
  return 0;
}

