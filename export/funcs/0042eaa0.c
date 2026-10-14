
int FUN_0042eaa0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  CacheString local_8c [8];
  CacheString local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  IDPMsgHandler local_64 [4];
  uchar *local_60;
  ulong local_5c;
  undefined4 local_58;
  int local_54 [2];
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 local_44 [32];
  int local_24;
  undefined4 local_20;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8dd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CacheString::clear(local_8c);
  CacheString::clear(local_84);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0xffffffff;
  local_60 = (uchar *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_48 = *param_1;
  local_4 = 0;
  FUN_0042ee70(local_8c);
  local_4._0_1_ = 1;
  FUN_0042f0f0(local_54,&local_48);
  local_4c = local_44;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0 < local_24) {
    uVar3 = 0;
    iVar1 = FUN_005ad970();
    if (iVar1 != 0) {
      do {
        FUN_0041b030(local_18 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        uVar2 = FUN_005ad970();
      } while (uVar3 < uVar2);
    }
    FUN_0042ec80();
    FUN_00401300(local_20);
    local_20 = 0xffffffff;
  }
  FUN_004de730();
  FUN_004de730();
  local_4 = 5;
  if (0 < local_6c) {
    uVar3 = 0;
    iVar1 = FUN_005ad970();
    if (iVar1 != 0) {
      do {
        FUN_0041b030(local_60 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        uVar2 = FUN_005ad970();
      } while (uVar3 < uVar2);
    }
    FUN_0042ec80();
    FUN_00401300(local_68);
    local_68 = 0xffffffff;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  IDPMsgHandler::OnReceive(local_64,local_60,local_5c);
  FUN_005b7e1d(local_60);
  local_60 = (uchar *)0x0;
  local_5c = 0;
  local_58 = 0;
  FUN_004de730();
  ExceptionList = local_c;
  return local_54[0] + 0x10;
}

