
void __fastcall FUN_00597ed0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_005c4b42;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e5744;
  iVar1 = param_1[0x2f];
  iVar3 = param_1[0x2e];
  local_4 = 3;
  for (; iVar3 != iVar1; iVar3 = iVar3 + 8) {
    FUN_00599a60();
  }
  FUN_005b7e1d(param_1[0x2e]);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_005b7e1d(param_1[0x2a]);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_005b7e1d(param_1[0x26]);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_005b7e1d(param_1[0x22]);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = &PTR_FUN_005d5544;
  DAT_0067dcd4 = DAT_0067dcd4 + -1;
  piVar2 = (int *)param_1[3];
  local_4 = 0xffffffff;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*piVar2 + 0x28))();
  }
  FUN_0059dc00(param_1);
  ExceptionList = pvStack_c;
  return;
}

