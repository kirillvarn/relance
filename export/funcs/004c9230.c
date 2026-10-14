
void __fastcall FUN_004c9230(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd898;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0059ef20();
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

