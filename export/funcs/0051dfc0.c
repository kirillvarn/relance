
void __fastcall FUN_0051dfc0(IDPMsgHandler *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bff30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_005dc164;
  puVar1 = *(undefined4 **)(param_1 + 0xfc);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_005dc140;
    FUN_005b7e1d(puVar1);
  }
  iVar2 = *(int *)(param_1 + 0x100);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      BaseWatcher::set_pointer((BaseWatcher *)(iVar2 + 8),(Watchable *)0x0);
    }
    FUN_005b7e1d(iVar2);
  }
  local_4 = 1;
  if (*(int *)(param_1 + 0xc0) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xc0),(Watchable *)0x0);
  }
  local_4 = 0xffffffff;
  *(undefined ***)param_1 = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect(param_1);
  ExceptionList = local_c;
  return;
}

