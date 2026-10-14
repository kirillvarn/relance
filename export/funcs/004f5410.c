
void __fastcall FUN_004f5410(BaseWatcher *param_1)

{
  char cVar1;
  int iVar2;
  void **ppvVar3;
  uchar *puVar4;
  int iVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf37f;
  local_c = ExceptionList;
  iVar5 = 0;
  local_4 = 2;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (0 < local_14) {
    do {
      ExceptionList = ppvVar3;
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
      if (iVar2 != 0) {
        FUN_004e5620();
        FUN_005b7e1d(iVar2);
      }
      iVar5 = iVar5 + 1;
      ppvVar3 = ExceptionList;
    } while (iVar5 < local_14);
  }
  puVar4 = (uchar *)FUN_00527820(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x10),
                                 *(undefined4 *)(param_1 + 0xc));
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 8),puVar4,*(ulong *)(param_1 + 0x10));
  *(uchar **)(param_1 + 0x10) = puVar4;
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 != 0) {
    cVar1 = *(char *)(iVar5 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar5 + -1));
    }
    else {
      *(char *)(iVar5 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = 0xffffffff;
  if (*(int *)param_1 != 0) {
    BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

