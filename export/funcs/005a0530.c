
void __fastcall FUN_005a0530(int param_1)

{
  int iVar1;
  int local_70;
  undefined4 local_6c;
  short *local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_2c;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4f7b;
  local_c = ExceptionList;
  local_68 = (short *)0x0;
  local_64 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004144b0();
  local_2c = 0;
  if ((local_68 != (short *)0x0) && (*local_68 != 0)) {
    *local_68 = 0;
  }
  local_10 = 0;
  local_6c = *(undefined4 *)(param_1 + 0xcc);
  local_4 = 1;
  local_70 = param_1;
  FUN_004be370(&local_70);
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_004144f0();
  local_4 = CONCAT31(local_4._1_3_,3);
  for (iVar1 = local_50; iVar1 != local_4c; iVar1 = iVar1 + 8) {
    FUN_00418f70(0);
  }
  FUN_005b7e1d(local_50);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (local_60 != (void *)0x0) {
    free(local_60);
    local_60 = (void *)0x0;
    local_5c = 0;
  }
  if (local_68 != (short *)0x0) {
    free(local_68);
  }
  ExceptionList = local_c;
  return;
}

