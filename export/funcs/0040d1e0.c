
void __fastcall FUN_0040d1e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8521;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e1d(param_1[0x1e]);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_005b7e1d(param_1[0x1a]);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *param_1 = &PTR_FUN_005c7734;
  local_4 = 2;
  FUN_004024d0(param_1 + 1);
  iVar1 = param_1[0x12];
  for (iVar2 = param_1[0x11]; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_00407000();
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

