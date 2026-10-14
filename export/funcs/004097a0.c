
void __fastcall FUN_004097a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8579;
  local_c = ExceptionList;
  iVar1 = param_1[0x1a];
  iVar2 = param_1[0x19];
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar2 != iVar1) {
    puVar3 = (undefined4 *)(iVar2 + 0x18);
    ExceptionList = &local_c;
    do {
      IDPMsgHandler::OnReceive((IDPMsgHandler *)(puVar3 + -1),(uchar *)*puVar3,puVar3[1]);
      FUN_005b7e1d(*puVar3);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      FUN_004de730();
      iVar2 = iVar2 + 0x24;
      puVar3 = puVar3 + 9;
    } while (iVar2 != iVar1);
  }
  FUN_005b7e1d(param_1[0x19]);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_005c7734;
  local_4 = 3;
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

