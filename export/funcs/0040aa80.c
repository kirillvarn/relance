
void __fastcall FUN_0040aa80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8521;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005c7734;
  local_4 = 2;
  FUN_004024d0(param_1 + 1);
  iVar1 = param_1[0x12];
  iVar2 = param_1[0x11];
  local_4 = CONCAT31(local_4._1_3_,1);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_004de730();
    FUN_004de730();
  }
  FUN_005b7e1d(param_1[0x11]);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_005b7e1d(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_005b7e1d(param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return;
}

