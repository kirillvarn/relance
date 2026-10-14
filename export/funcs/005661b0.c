
void __fastcall FUN_005661b0(undefined4 *param_1)

{
  int *piVar1;
  BOOL BVar2;
  DWORD DVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c202a;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if ((HMODULE)param_1[0x153] != (HMODULE)0x0) {
    ExceptionList = &pvStack_c;
    BVar2 = FreeLibrary((HMODULE)param_1[0x153]);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      ErrorHandler::log_last_error
                ("E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x17ed,2,
                 "%s(%d) : WARNING:LastError:%s",DVar3);
    }
    param_1[0x153] = 0;
  }
  param_1[0x154] = 0;
  local_4._0_1_ = 1;
  FUN_005b7ec6(param_1 + 0x21,0xf0,5,thunk_FUN_005a1af0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00576010();
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar1 = (int *)param_1[3];
  local_4 = 0xffffffff;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  ExceptionList = pvStack_c;
  return;
}

