
void __thiscall FUN_0058d250(int param_1,int param_2)

{
  IDPMsgHandler *this;
  int iVar1;
  uint uVar2;
  uchar *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 2;
  }
  this = (IDPMsgHandler *)(param_1 + 0x4b0);
  if (*(int *)(param_1 + 0x4b4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
  }
  if (iVar5 == iVar1) {
    if (*(int *)(param_2 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
    }
    if (*(int *)(param_1 + 0x4a4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
    }
    if (iVar5 == iVar1) {
      if ((**(float **)(param_2 + 0x14) != **(float **)(param_1 + 0x4b4)) ||
         (**(float **)(param_2 + 0x14) != **(float **)(param_1 + 0x4b4))) {
        (**(code **)FDUMP_exref)
                  (0x100003,"%s(%d) : NOTICE:General:%s",
                   "E:\\FL\\Scratch\\Source\\Client\\Interface\\UIFastTable.cpp",0x1d0,
                   "Table state does not match table.\n");
        return;
      }
      if (this != (IDPMsgHandler *)(param_2 + 0x10)) {
        iVar5 = *(int *)(param_2 + 0x14);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(int *)(param_2 + 0x18) - iVar5 >> 2;
        }
        iVar1 = *(int *)(param_1 + 0x4b4);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(int *)(param_1 + 0x4b8) - iVar1 >> 2;
        }
        if (uVar2 < uVar6) {
          uVar6 = FUN_005ad970();
          uVar2 = FUN_0040d740();
          if (uVar2 < uVar6) {
            IDPMsgHandler::OnReceive(this,*(uchar **)(param_1 + 0x4b4),*(ulong *)(param_1 + 0x4b8));
            FUN_005b7e1d(*(undefined4 *)(param_1 + 0x4b4));
            iVar5 = FUN_005ad970();
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            pvVar4 = operator_new(iVar5 * 4);
            *(void **)(param_1 + 0x4b4) = pvVar4;
            iVar5 = FUN_00597c70(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                                 pvVar4);
            *(int *)(param_1 + 0x4bc) = iVar5;
          }
          else {
            iVar5 = *(int *)(param_2 + 0x14);
            iVar1 = FUN_005ad970();
            iVar5 = iVar5 + iVar1 * 4;
            FUN_00527820(*(undefined4 *)(param_2 + 0x14),iVar5,*(undefined4 *)(param_1 + 0x4b4));
            FUN_00597c70(iVar5,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x4b8));
            iVar5 = FUN_005ad970();
            iVar5 = *(int *)(param_1 + 0x4b4) + iVar5 * 4;
          }
        }
        else {
          puVar3 = (uchar *)FUN_00527820(iVar5,*(undefined4 *)(param_2 + 0x18),iVar1);
          IDPMsgHandler::OnReceive(this,puVar3,*(ulong *)(param_1 + 0x4b8));
          iVar5 = FUN_005ad970();
          iVar5 = *(int *)(param_1 + 0x4b4) + iVar5 * 4;
        }
        *(int *)(param_1 + 0x4b8) = iVar5;
      }
      FUN_005595c0(param_2);
      if (*(int *)(param_1 + 0x4a4) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x4b4) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2 == 0) {
        return;
      }
      FUN_0057a620(1,1);
      return;
    }
  }
  (**(code **)FDUMP_exref)
            (0x100003,"%s(%d) : NOTICE:General:%s",
             "E:\\FL\\Scratch\\Source\\Client\\Interface\\UIFastTable.cpp",0x1c9,
             "Table state does not match table.\n");
  return;
}

