
/* WARNING: Removing unreachable block (ram,0x004cc3a0) */
/* WARNING: Removing unreachable block (ram,0x004cc3c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cc2c0(BaseWatcher *param_1)

{
  byte *pbVar1;
  int *piVar2;
  uchar *puVar3;
  bool bVar4;
  int iVar5;
  
  if ((param_1[0x38] != (BaseWatcher)0x0) && (param_1[0x85] == (BaseWatcher)0x0)) {
    param_1[0x84] = (BaseWatcher)0x0;
    param_1[0x85] = (BaseWatcher)0x1;
    if (*(int *)(param_1 + 0x170) != 0) {
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    if (*(int *)(param_1 + 0x1bc) != 0) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x1bc) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
    }
  }
  bVar4 = SinglePlayer();
  if (bVar4) {
    (**(code **)(*DAT_0067ecd0 + 0xfc))
              (*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8),
               *(undefined4 *)(param_1 + 0x1cc),2);
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 != *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int **)(iVar5 + 4) != (int *)0x0) && (*(char *)(iVar5 + 8) == '\x01')) {
        (**(code **)(**(int **)(iVar5 + 4) + 0x10))();
        *(undefined1 *)(iVar5 + 8) = 0;
      }
      piVar2 = *(int **)(iVar5 + 0xc);
      if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x60))();
        (**(code **)(**(int **)(iVar5 + 0xc) + 8))(*(int **)(iVar5 + 0xc));
        *(undefined4 *)(iVar5 + 0xc) = 0;
      }
      iVar5 = iVar5 + 0x10;
    } while (iVar5 != *(int *)(param_1 + 0x2c));
  }
  puVar3 = *(uchar **)(param_1 + 0x28);
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x24),puVar3,*(ulong *)(param_1 + 0x2c));
  *(uchar **)(param_1 + 0x2c) = puVar3;
  if (param_1[0x14] != (BaseWatcher)0x0) {
    FUN_00428de0();
    DAT_006735b0 = DAT_006735b0 + -1;
    if (DAT_006735b0 == 0) {
      DAT_006735a4 = 0;
      _DAT_006735ac = DAT_006108f8;
    }
    param_1[0x14] = (BaseWatcher)0x0;
  }
  if (*(int *)param_1 != 0) {
    BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = (BaseWatcher)0x0;
  param_1[0x15] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[8] = (BaseWatcher)0x1;
  param_1[0x20] = (BaseWatcher)0x1;
  return;
}

