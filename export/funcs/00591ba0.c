
void __fastcall FUN_00591ba0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c49e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e5384;
  param_1[0x1f] = &PTR_LAB_005e536c;
  param_1[0x20] = &PTR_FUN_005e5364;
  local_4 = 2;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
    param_1[0x22] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00576010();
  param_1[0x1f] = &PTR_LAB_005e534c;
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

