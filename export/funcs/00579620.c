
void __fastcall FUN_00579620(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_14;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c3d0f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e459c;
  param_1[0x1f] = &PTR_OnReceive_005e4590;
  local_4 = 0;
  puVar5 = (undefined4 *)param_1[0xcb];
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_LAB_005e465c;
    if ((HWND)puVar5[2] != (HWND)0x0) {
      DestroyWindow((HWND)puVar5[2]);
      puVar5[2] = 0;
    }
    FUN_005b7e1d(puVar5);
    param_1[0xcb] = 0;
  }
  local_14 = param_1 + 0x107;
  local_4._0_1_ = 8;
  FUN_004144f0();
  local_4._0_1_ = 7;
  FUN_00445d70();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00444e20();
  if ((void *)param_1[0x105] != (void *)0x0) {
    free((void *)param_1[0x105]);
    param_1[0x105] = 0;
    param_1[0x106] = 0;
  }
  piVar1 = (int *)param_1[0xfb];
  local_4 = CONCAT31(local_4._1_3_,4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xfb] = 0;
  }
  if ((HDC)param_1[0xf5] != (HDC)0x0) {
    if ((HGDIOBJ)param_1[0xf7] != (HGDIOBJ)0x0) {
      SelectObject((HDC)param_1[0xf5],(HGDIOBJ)param_1[0xf7]);
    }
    if ((HGDIOBJ)param_1[0xf6] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0xf6]);
    }
    DeleteDC((HDC)param_1[0xf5]);
  }
  param_1[0xf9] = 0xffffffff;
  param_1[0xf8] = 0xffffffff;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  local_4._0_1_ = 2;
  DeviceTRC::~DeviceTRC((DeviceTRC *)(param_1 + 0xe1));
  piVar1 = (int *)param_1[0xde];
  piVar2 = (int *)*piVar1;
  local_4._0_1_ = 1;
  while (piVar2 != piVar1) {
    puVar5 = (undefined4 *)FUN_0053ab20(&local_14,0);
    FUN_0046d680(auStack_10,*puVar5);
  }
  FUN_005b7e1d(param_1[0xde]);
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  puVar5 = (undefined4 *)param_1[0xdb];
  local_4 = (uint)local_4._1_3_ << 8;
  puVar4 = (undefined4 *)*puVar5;
  while (puVar4 != puVar5) {
    puVar3 = (undefined4 *)*puVar4;
    FUN_0046d680(auStack_10,puVar4);
    puVar4 = puVar3;
  }
  FUN_005b7e1d(param_1[0xdb]);
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = pvStack_c;
  return;
}

