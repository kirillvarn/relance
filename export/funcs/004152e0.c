
undefined4 __thiscall FUN_004152e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  int *piVar5;
  uint uVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = param_1;
  if ((*(int *)(param_1 + 0x20) != DAT_006105b0) && (iVar2 = *(int *)(param_1 + 0x14), iVar2 != 0))
  {
    local_8 = *(int *)(iVar2 + 0x24);
    while( true ) {
      do {
        local_c = *(int *)(iVar2 + 0x20);
        *(undefined4 *)(iVar2 + 0x24) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        piVar5 = DAT_00616648;
        local_10 = iVar2;
        if ((int)DAT_0061664c - (int)DAT_00616648 >> 2 == 0) {
          if ((DAT_00616644 == (uchar *)0x0) ||
             (uVar6 = (int)DAT_00616648 - (int)DAT_00616644 >> 2, uVar6 < 2)) {
            uVar6 = 1;
          }
          if (DAT_00616644 == (uchar *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)DAT_00616648 - (int)DAT_00616644 >> 2;
          }
          iVar2 = iVar2 + uVar6;
          iVar3 = iVar2;
          if (iVar2 < 0) {
            iVar3 = 0;
          }
          puVar4 = operator_new(iVar3 * 4);
          iVar3 = FUN_00597c70(DAT_00616644,piVar5,puVar4);
          FUN_00427730(iVar3,1,&local_10);
          FUN_00597c70(piVar5,DAT_00616648,iVar3 + 4);
          IDPMsgHandler::OnReceive((IDPMsgHandler *)&DAT_00616640,DAT_00616644,(ulong)DAT_00616648);
          FUN_005b7e1d(DAT_00616644);
          DAT_0061664c = puVar4 + iVar2 * 4;
          iVar2 = FUN_005ad970();
          DAT_00616648 = (int *)(puVar4 + iVar2 * 4 + 4);
          param_1 = local_4;
          DAT_00616644 = puVar4;
        }
        else {
          FUN_00597c70(DAT_00616648,DAT_00616648,DAT_00616648 + 1);
          FUN_00427730(DAT_00616648,1 - ((int)DAT_00616648 - (int)piVar5 >> 2),&local_10);
          piVar1 = DAT_00616648;
          for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
            *piVar5 = local_10;
          }
          DAT_00616648 = DAT_00616648 + 1;
        }
        iVar2 = local_c;
      } while (local_c != 0);
      if (local_8 == 0) break;
      iVar2 = local_8;
      local_8 = *(int *)(local_8 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_004127d0(param_2);
  }
  return *(undefined4 *)(param_1 + 0x14);
}

