
int __thiscall FUN_0044d810(Csys *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  SetpointInfo *pSVar5;
  Csys local_3c [4];
  undefined1 auStack_38 [28];
  void *pvStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9cf1;
  local_c = ExceptionList;
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x9c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00453690(param_1,param_1,param_3);
    }
    piVar1 = (int *)(iVar3 + 0xc);
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(piVar1,param_3 + 8);
    (**(code **)(*piVar1 + 0x10))(piVar1,param_3 + 0x14);
  }
  else {
    ExceptionList = &local_c;
    iVar3 = FUN_00456790(7,*(undefined4 *)(param_3 + 0x38));
    if (iVar3 != 0) {
      pvVar2 = operator_new(0x70);
      local_4 = 1;
      if (pvVar2 != (void *)0x0) {
        iVar4 = FUN_00453910(param_1,param_1,param_3);
        *(int *)(iVar4 + 0x6c) = iVar3;
        ExceptionList = local_c;
        return iVar4;
      }
      iRam0000006c = iVar3;
      ExceptionList = local_c;
      return 0;
    }
    pvVar2 = operator_new(0x9c);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00453690(param_1,param_1,param_3);
    }
    local_4 = 0xffffffff;
    pSVar5 = RoomData::find_setpoint
                       (*(RoomData **)(*(int *)(param_1 + 0x30) + 0x40),*(char **)(param_3 + 0x38),
                        *(char **)(param_1 + 0xa4));
    if (pSVar5 == (SetpointInfo *)0x0) {
      piVar1 = (int *)(iVar3 + 0xc);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(piVar1,param_3 + 8);
      (**(code **)(*piVar1 + 0x10))(piVar1,param_3 + 0x14);
    }
    else {
      Csys::trans_to_frame(param_1,local_3c);
      piVar1 = (int *)(iVar3 + 0xc);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(piVar1,local_3c);
      (**(code **)(*piVar1 + 0x10))(piVar1,auStack_38);
    }
  }
  ExceptionList = pvStack_1c;
  return iVar3;
}

