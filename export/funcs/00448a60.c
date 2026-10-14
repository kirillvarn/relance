
void __thiscall FUN_00448a60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined1 local_28 [4];
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar9 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9ab0;
  local_c = ExceptionList;
  iVar7 = *(int *)(param_2 + 0x40);
  ExceptionList = &local_c;
  uVar5 = FUN_005ad970();
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_00448ef0(uVar5,&local_1c);
  local_4 = 0xffffffff;
  FUN_004486d0();
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar8 = 0;
    do {
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x188) + iVar6 * 4);
      iVar1 = *(int *)(param_1 + 4);
      *(int *)(iVar8 + iVar1) = iVar9;
      *(undefined4 *)(iVar8 + 4 + iVar1) = uVar5;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  iVar9 = 0;
  iVar7 = -1;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar6 = *(int *)(param_1 + 4);
    iVar8 = 0;
    do {
      if (((*(int *)(iVar8 + 8 + iVar6) == 0) && (*(int *)(iVar8 + 0xc + iVar6) == 0)) &&
         (iVar7 = iVar9, *(char *)(*(int *)(iVar8 + 4 + iVar6) + 0x34) == '\x01')) break;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x10;
      iVar7 = -1;
    } while (iVar9 < *(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x14) = iVar7;
  if (((iVar7 != -1) && (iVar7 = FUN_004c3e10(), iVar7 != 0)) &&
     (bVar4 = RtcSlider::is_enabled("player_ship"), bVar4)) {
    FUN_004487f0();
  }
  local_28[0] = (undefined1)param_2;
  local_24 = (int *)FUN_0042a7e0(0,0);
  local_20 = 0;
  local_4 = 1;
  FUN_00437f70(local_28,3);
  piVar10 = (int *)*local_24;
  if (piVar10 != local_24) {
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        iVar9 = *(int *)(param_1 + 4);
        iVar6 = 0;
        do {
          if (((*(int *)(iVar6 + 8 + iVar9) == 0) && (*(int *)(iVar6 + 0xc + iVar9) == 0)) &&
             (*(char *)(*(int *)(iVar6 + 4 + iVar9) + 0x35) == '\x01')) {
            if (iVar7 != -1) {
              FUN_00448700(*(undefined4 *)piVar10[2]);
            }
            break;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar7 < *(int *)(param_1 + 0x10));
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != local_24);
  }
  piVar3 = local_24;
  local_4 = 0xffffffff;
  piVar10 = (int *)*local_24;
  while (piVar10 != piVar3) {
    piVar2 = (int *)*piVar10;
    FUN_00516f70(&param_2,piVar10);
    piVar10 = piVar2;
  }
  FUN_005b7e1d(local_24);
  ExceptionList = local_c;
  return;
}

