
void __fastcall FUN_005a3db0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c5138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e614c;
  param_1[0x1f] = &PTR_OnReceive_005e613c;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0xe2) & 1) != 0) {
    FUN_0059d960(param_1);
  }
  iVar2 = param_1[0xdb];
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

