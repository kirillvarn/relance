
int __thiscall FUN_0044dc20(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  RoomCameraInfo *pRVar5;
  int iVar6;
  int *piVar7;
  RoomCameraInfo *pRVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9cf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00456790(3,*(undefined4 *)(param_3 + 0x38));
  iVar6 = 0;
  if (iVar3 == 0) {
    pRVar5 = RoomData::find_camera
                       (*(RoomData **)(*(int *)(param_1 + 0x30) + 0x40),*(char **)(param_3 + 0x38),
                        *(char **)(param_1 + 0xa4));
    pvVar4 = operator_new(0x70);
    if (pRVar5 == (RoomCameraInfo *)0x0) {
      local_4 = 2;
      if (pvVar4 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00450c60(param_1,param_1,param_3);
      }
      *(undefined4 *)(iVar6 + 0x6c) = 0;
    }
    else {
      local_4 = 1;
      if (pvVar4 != (void *)0x0) {
        iVar6 = FUN_004507a0(param_1,param_1,param_3);
      }
      local_4 = 0xffffffff;
      FUN_00450830(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x500),*(undefined4 *)(param_1 + 0x58)
                   ,0);
      uVar2 = *(undefined4 *)(param_3 + 0x44);
      pRVar8 = pRVar5 + 4;
      piVar1 = (int *)(iVar6 + 0xc);
      piVar7 = piVar1;
      (**(code **)(*piVar1 + 0xc))(piVar1,pRVar8);
      (**(code **)(*piVar1 + 0x10))(piVar1,pRVar5 + 0x10);
      piVar1 = (int *)(iVar6 + 0x10);
      (**(code **)(*(int *)(iVar6 + 0x10) + 0xc))(piVar1,uVar2);
      (**(code **)(*piVar1 + 0x18))(piVar1,pRVar8);
      (**(code **)(*piVar1 + 0x1c))(piVar1,piVar7);
    }
  }
  else {
    pvVar4 = operator_new(0x70);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      iVar6 = 0;
      iRam0000006c = iVar3;
    }
    else {
      iVar6 = FUN_00450c60(param_1,param_1,param_3);
      *(int *)(iVar6 + 0x6c) = iVar3;
    }
  }
  ExceptionList = local_c;
  return iVar6;
}

