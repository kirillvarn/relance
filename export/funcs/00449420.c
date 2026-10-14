
void __fastcall FUN_00449420(undefined4 *param_1)

{
  IDPMsgHandler *this;
  char **ppcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b9b66;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005cbea0;
  param_1[0xc] = &PTR_LAB_005cbe98;
  local_4 = 4;
  FUN_00456930();
  iVar3 = 0;
  if (0 < (int)param_1[0x422]) {
    ppcVar1 = (char **)(param_1 + 0x40e);
    do {
      malloc_strfree(ppcVar1);
      iVar3 = iVar3 + 1;
      ppcVar1 = ppcVar1 + 1;
    } while (iVar3 < (int)param_1[0x422]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x437]) {
    ppcVar1 = (char **)(param_1 + 0x423);
    do {
      malloc_strfree(ppcVar1);
      iVar3 = iVar3 + 1;
      ppcVar1 = ppcVar1 + 1;
    } while (iVar3 < (int)param_1[0x437]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x44c]) {
    ppcVar1 = (char **)(param_1 + 0x438);
    do {
      malloc_strfree(ppcVar1);
      iVar3 = iVar3 + 1;
      ppcVar1 = ppcVar1 + 1;
    } while (iVar3 < (int)param_1[0x44c]);
  }
  FUN_0044d1c0();
  iVar3 = *(int *)(param_1[0x10] + 0x1a8);
  if ((iVar3 != 0) && (0 < *(int *)(param_1[0x10] + 0x1ac) - iVar3 >> 2)) {
    iVar3 = 0;
    if (0 < (int)param_1[0x407]) {
      puVar2 = param_1 + 0x207;
      do {
        this = (IDPMsgHandler *)*puVar2;
        if (this != (IDPMsgHandler *)0x0) {
          IDPMsgHandler::OnDisconnect(this);
          FUN_005b7e1d(this);
        }
        *puVar2 = 0;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < (int)param_1[0x407]);
    }
    param_1[0x407] = 0;
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x206]) {
    piVar4 = param_1 + 0x186;
    do {
      if (*(char *)(*piVar4 + 0x49) == '\x01') {
        param_1[0x16] = 0xffffffff;
        param_1[0x12] = 0xffffffff;
      }
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      *piVar4 = 0;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < (int)param_1[0x206]);
  }
  param_1[0x206] = 0;
  iVar3 = 0;
  do {
    FUN_00449e10(iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  FUN_00556ca0(param_1[0x140]);
  iVar3 = 0;
  param_1[0x140] = 0;
  if (0 < (int)param_1[0xb9]) {
    puVar2 = param_1 + 0x39;
    do {
      FUN_00557130(puVar2);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[0xb9]);
  }
  param_1[0xb9] = 0;
  param_1[0x13a] = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1[0x10] + 0xb4)) {
    puVar2 = param_1 + 0x19;
    do {
      FUN_00555ca0(puVar2);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1[0x10] + 0xb4));
  }
  FUN_00555a90();
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  RoomData::unfixup((RoomData *)param_1[0x10]);
  FUN_00412070(0x3f800000);
  local_4._0_1_ = 3;
  FUN_004488f0();
  local_4._0_1_ = 2;
  FUN_004de730();
  local_4._0_1_ = 1;
  thunk_FUN_00555a90();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_005594b0();
  ExceptionList = pvStack_c;
  return;
}

