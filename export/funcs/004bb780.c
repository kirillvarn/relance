
void __fastcall FUN_004bb780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd3d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d5b74;
  param_1[0x1f] = &PTR_OnReceive_005d5b64;
  DAT_006723fc = 0;
  DAT_0066d359 = 0;
  local_4 = 0;
  if (*(char *)(param_1 + 0xe3) != '\0') {
    FUN_004a7690(*(undefined1 *)((int)param_1 + 0x37d));
    *(undefined1 *)(param_1 + 0xe3) = 0;
    DAT_0067dcc8 = 0;
  }
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

