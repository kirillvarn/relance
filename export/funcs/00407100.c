
/* WARNING: Removing unreachable block (ram,0x004072b7) */
/* WARNING: Removing unreachable block (ram,0x004072ce) */
/* WARNING: Removing unreachable block (ram,0x004072d0) */
/* WARNING: Removing unreachable block (ram,0x004072df) */
/* WARNING: Removing unreachable block (ram,0x004072e6) */

undefined4 __thiscall FUN_00407100(int param_1,char param_2)

{
  undefined4 in_EAX;
  undefined3 uVar4;
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_10;
  void *local_c;
  int local_8;
  int local_4;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x24);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
    local_4 = param_1;
    if (puVar6 != *(undefined4 **)(param_1 + 0x28)) {
      do {
        local_c = (void *)FUN_0041aa50(*puVar6,param_2 == '\0',puVar6[1]);
        if (local_c != (void *)0x0) {
          FUN_00537260(*(undefined4 *)(param_1 + 0x38),1,&local_c);
        }
        puVar6 = puVar6 + 2;
      } while (puVar6 != *(undefined4 **)(param_1 + 0x28));
    }
    local_10 = FUN_0041aa50(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc),param_2 == '\0',
                            0xffffffff);
    piVar3 = (int *)0x0;
    if (local_10 != 0) {
      piVar7 = *(int **)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) - (int)piVar7 >> 2 == 0) {
        iVar1 = *(int *)(param_1 + 0x34);
        if ((iVar1 == 0) || (uVar5 = (int)piVar7 - iVar1 >> 2, uVar5 < 2)) {
          uVar5 = 1;
        }
        if (iVar1 == 0) {
          local_8 = 0;
        }
        else {
          local_8 = (int)piVar7 - iVar1 >> 2;
        }
        local_8 = local_8 + uVar5;
        iVar1 = local_8;
        if (local_8 < 0) {
          iVar1 = 0;
        }
        pvVar2 = operator_new(iVar1 * 4);
        local_c = pvVar2;
        for (piVar3 = *(int **)(param_1 + 0x34); piVar3 != piVar7; piVar3 = piVar3 + 1) {
          FUN_005999b0(pvVar2,piVar3);
          pvVar2 = (void *)((int)pvVar2 + 4);
        }
        FUN_00427730(pvVar2,1,&local_10);
        FUN_00597c70(piVar7,*(undefined4 *)(param_1 + 0x38),(int)pvVar2 + 4);
        IDPMsgHandler::OnReceive
                  ((IDPMsgHandler *)(param_1 + 0x30),*(uchar **)(param_1 + 0x34),
                   *(ulong *)(param_1 + 0x38));
        FUN_005b7e1d(*(undefined4 *)(param_1 + 0x34));
        pvVar2 = local_c;
        *(void **)(param_1 + 0x3c) = (void *)((int)local_c + local_8 * 4);
        piVar3 = (int *)FUN_005ad970();
        *(int *)(param_1 + 0x38) = (int)pvVar2 + (int)piVar3 * 4 + 4;
        *(void **)(param_1 + 0x34) = pvVar2;
        param_1 = local_4;
      }
      else {
        FUN_00597c70(piVar7,piVar7,piVar7 + 1);
        FUN_00427730(*(int *)(param_1 + 0x38),1 - (*(int *)(param_1 + 0x38) - (int)piVar7 >> 2),
                     &local_10);
        piVar3 = *(int **)(param_1 + 0x38);
        for (; piVar7 != piVar3; piVar7 = piVar7 + 1) {
          *piVar7 = local_10;
        }
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
      }
    }
    uVar4 = (undefined3)((uint)piVar3 >> 8);
    if (param_2 == '\0') {
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
    }
  }
  return CONCAT31(uVar4,1);
}

