
void __fastcall FUN_004c94b0(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bd8e9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d6fac;
  param_1[0x3d] = &PTR_LAB_005d6f78;
  local_4 = 1;
  cVar2 = FUN_00420d60();
  if (cVar2 != '\0') {
    FUN_0059eee0();
  }
  piVar1 = (int *)param_1[3];
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_0059dc00(param_1);
  param_1[0x3d] = &PTR_FUN_005d6eac;
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(param_1 + 0x47) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x47),(Watchable *)0x0);
  }
  local_4 = 2;
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

