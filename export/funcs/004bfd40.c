
void __fastcall FUN_004bfd40(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bd5f1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d62ac;
  param_1[0x1f] = &PTR_OnReceive_005d629c;
  param_1[0xcb] = &PTR_LAB_005d6294;
  local_4 = 1;
  if ((undefined4 *)param_1[0xcc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xcc])(1);
    param_1[0xcc] = 0;
  }
  if ((undefined4 *)param_1[0xcd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xcd])(1);
    param_1[0xcd] = 0;
  }
  if ((undefined4 *)param_1[0xce] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xce])(1);
    param_1[0xce] = 0;
  }
  DAT_006724b4 = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = pvStack_c;
  return;
}

