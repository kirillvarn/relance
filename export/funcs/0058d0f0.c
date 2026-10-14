
void __thiscall FUN_0058d0f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  uchar *puVar7;
  uint uVar8;
  
  if ((IDPMsgHandler *)(param_2 + 0x10) != (IDPMsgHandler *)(param_1 + 0x4b0)) {
    puVar3 = *(undefined4 **)(param_1 + 0x4b4);
    if (puVar3 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(int *)(param_1 + 0x4b8) - (int)puVar3 >> 2;
    }
    puVar7 = *(uchar **)(param_2 + 0x14);
    if (puVar7 == (uchar *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x18) - (int)puVar7 >> 2;
    }
    if (uVar2 < uVar8) {
      if (puVar3 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(int *)(param_1 + 0x4b8) - (int)puVar3 >> 2;
      }
      if (puVar7 == (uchar *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(int *)(param_2 + 0x1c) - (int)puVar7 >> 2;
      }
      if (uVar2 < uVar8) {
        IDPMsgHandler::OnReceive
                  ((IDPMsgHandler *)(param_2 + 0x10),puVar7,*(ulong *)(param_2 + 0x18));
        FUN_005b7e1d(*(undefined4 *)(param_2 + 0x14));
        iVar4 = FUN_005ad970();
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        pvVar5 = operator_new(iVar4 * 4);
        *(void **)(param_2 + 0x14) = pvVar5;
        uVar6 = FUN_00597c70(*(undefined4 *)(param_1 + 0x4b4),*(undefined4 *)(param_1 + 0x4b8),
                             pvVar5);
        *(undefined4 *)(param_2 + 0x18) = uVar6;
        *(undefined4 *)(param_2 + 0x1c) = uVar6;
      }
      else {
        iVar4 = FUN_005ad970();
        FUN_00527820(*(undefined4 *)(param_1 + 0x4b4),puVar3 + iVar4,*(undefined4 *)(param_2 + 0x14)
                    );
        FUN_00597c70(puVar3 + iVar4,*(undefined4 *)(param_1 + 0x4b8),*(undefined4 *)(param_2 + 0x18)
                    );
        iVar4 = FUN_005ad970();
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x14) + iVar4 * 4;
      }
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x4b8);
      for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
        *(undefined4 *)puVar7 = *puVar3;
        puVar7 = puVar7 + 4;
      }
      if (*(int *)(param_1 + 0x4b4) == 0) {
        *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
      }
      else {
        *(int *)(param_2 + 0x18) =
             *(int *)(param_2 + 0x14) +
             (*(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2) * 4;
      }
    }
  }
  FUN_005595c0(param_1 + 0x4a0);
  return;
}

