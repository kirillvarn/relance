
void __fastcall FUN_0048a440(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc2d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d24f4;
  param_1[0x1f] = &PTR_OnReceive_005d24e4;
  DAT_00671ff4 = 0;
  local_4 = 0;
  if (*(char *)(param_1 + 0xda) != '\0') {
    *(undefined1 *)(param_1 + 0xda) = 0;
    FUN_004a7690(*(undefined1 *)(param_1 + 0xcb));
  }
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

