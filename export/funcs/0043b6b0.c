
void __thiscall FUN_0043b6b0(int param_1,uint param_2)

{
  int *piVar1;
  BaseDataList *pBVar2;
  RoomData *pRVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_8 [2];
  
  uVar8 = *(uint *)(param_1 + 0x38);
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x59) = 1;
  if (uVar8 != 0) {
    uVar9 = uVar8;
    pBVar2 = BaseDataList_get();
    pRVar3 = BaseDataList::get_unloaded_room_data(pBVar2,uVar9);
    if (pRVar3 == (RoomData *)0x0) {
      puVar4 = (undefined4 *)FUN_00411c50(0x10000,1);
      (**(code **)FDUMP_exref)
                (*puVar4,"%s(%d) : *** ERROR: Could not find location %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x120,uVar8);
    }
    else {
      puVar4 = (undefined4 *)FUN_00439590(*(undefined4 *)pRVar3);
      if (puVar4 != (undefined4 *)0x0) {
        iVar6 = *(int *)*puVar4;
      }
    }
  }
  iVar7 = 0;
  if (param_2 != 0) {
    uVar8 = param_2;
    pBVar2 = BaseDataList_get();
    pRVar3 = BaseDataList::get_unloaded_room_data(pBVar2,uVar8);
    if (pRVar3 == (RoomData *)0x0) {
      puVar4 = (undefined4 *)FUN_00411c50(0x10000,1);
      (**(code **)FDUMP_exref)
                (*puVar4,"%s(%d) : *** ERROR: Could not find location %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x120,param_2);
    }
    else {
      puVar4 = (undefined4 *)FUN_00439590(*(undefined4 *)pRVar3);
      if (puVar4 != (undefined4 *)0x0) {
        iVar7 = *(int *)*puVar4;
      }
    }
  }
  local_8[0] = iVar7;
  if (((iVar6 == 0) || (iVar7 == 0)) || (iVar6 == iVar7)) {
    uVar8 = *(uint *)(param_1 + 0x38);
    if ((uVar8 & 0x3fffffff) != 0) {
      FUN_0045b380();
      FUN_00439690(*(undefined4 *)(param_1 + 0x38));
      if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
        (**(code **)(*DAT_0067ecd0 + 0x98))(uVar8,DAT_00673344);
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_00439220();
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x38) & 0x3fffffff) != 0) {
      FUN_0043b970(*(uint *)(param_1 + 0x38));
    }
    iVar7 = FUN_00439590(iVar6);
    piVar1 = (int *)(iVar7 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00439b50(iVar6);
    }
    if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
      (**(code **)(*DAT_0067ecd0 + 0x90))(iVar6,DAT_00673344);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    FUN_00442130();
    iVar6 = local_8[0];
    *(int *)(param_1 + 0x34) = local_8[0];
    if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
      (**(code **)(*DAT_0067ecd0 + 0x8c))(local_8[0],DAT_00673344);
    }
    iVar7 = FUN_00439590(iVar6);
    if (*(int *)(iVar7 + 8) == 0) {
      FUN_004397a0(iVar6);
    }
    *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    FUN_004c4910(local_8);
    FUN_004c4a10(param_2);
    FUN_0043d590(local_8[0]);
  }
  uVar5 = 0;
  *(uint *)(param_1 + 0x38) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    uVar8 = param_2;
    pBVar2 = BaseDataList_get();
    pRVar3 = BaseDataList::get_unloaded_room_data(pBVar2,uVar8);
    if (pRVar3 == (RoomData *)0x0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Could not find location %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x120,param_2);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      uVar5 = FUN_00439610(*(undefined4 *)(param_1 + 0x38));
    }
    else {
      uVar5 = FUN_00439590(*(undefined4 *)pRVar3);
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
      uVar5 = FUN_00439610(*(undefined4 *)(param_1 + 0x38));
    }
  }
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0x94))(param_2,DAT_00673344);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  iVar6 = FUN_00439610(uVar5);
  if (*(int *)(iVar6 + 0xc) == 0) {
    FUN_00439d80(uVar5);
  }
  *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}

