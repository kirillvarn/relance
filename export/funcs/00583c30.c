
void __fastcall FUN_00583c30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c436d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e4bcc;
  param_1[0x1f] = &PTR_OnReceive_005e4bc0;
  local_4 = 6;
  local_10 = param_1;
  for (local_14 = (int *)0x0;
      (param_1[0x14f] != 0 && (local_14 < (int *)((int)(param_1[0x150] - param_1[0x14f]) >> 2)));
      local_14 = (int *)((int)local_14 + 1)) {
    puVar1 = *(undefined4 **)(param_1[0x14f] + (int)local_14 * 4);
    if (puVar1[1] != -1) {
      FUN_0059eee0();
    }
    (**(code **)*puVar1)(1);
  }
  FUN_005995c0(param_1[0x14f],param_1[0x150]);
  iVar2 = 0;
  if (0 < (int)param_1[0x11b]) {
    local_14 = param_1 + 0x113;
    do {
      if ((undefined4 *)*local_14 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*local_14)(1);
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 1;
    } while (iVar2 < (int)param_1[0x11b]);
  }
  iVar2 = param_1[0x135];
  if (iVar2 != 0) {
    FUN_00457dc0();
    FUN_005b7e1d(iVar2);
    param_1[0x135] = 0;
  }
  FUN_0059eee0();
  local_14 = (int *)param_1[0x15a];
  piVar3 = (int *)param_1[0x159];
  local_4._0_1_ = 5;
  if (piVar3 != local_14) {
    do {
      FUN_00587dc0(0);
      piVar3 = piVar3 + 8;
    } while (piVar3 != local_14);
  }
  FUN_005b7e1d(param_1[0x159]);
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  FUN_005b7e1d(param_1[0x154]);
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  FUN_005b7e1d(param_1[0x14f]);
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  local_4._0_1_ = 2;
  std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
            ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x132),&local_14,
             *(undefined4 *)param_1[0x133],(undefined4 *)param_1[0x133]);
  FUN_005b7e1d(param_1[0x133]);
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0xe2) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0xe2));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0059ef20();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = pvStack_c;
  return;
}

