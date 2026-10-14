
/* WARNING: Removing unreachable block (ram,0x00501706) */
/* WARNING: Removing unreachable block (ram,0x00501698) */
/* WARNING: Removing unreachable block (ram,0x005016b2) */
/* WARNING: Removing unreachable block (ram,0x005016c1) */
/* WARNING: Removing unreachable block (ram,0x005016ca) */
/* WARNING: Removing unreachable block (ram,0x005016d0) */
/* WARNING: Removing unreachable block (ram,0x005016db) */

void __thiscall FUN_00501530(IDPMsgHandler *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 8) - iVar3 >> 2;
  }
  if (uVar2 < param_2) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 2;
    }
    puVar5 = *(undefined4 **)(param_1 + 8);
    param_2 = param_2 - iVar6;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar5 >> 2) < param_2) {
      if ((iVar3 == 0) || (uVar2 = (int)puVar5 - iVar3 >> 2, uVar2 <= param_2)) {
        uVar2 = param_2;
      }
      iVar6 = FUN_005ad970();
      iVar6 = iVar6 + uVar2;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = 0;
      }
      pvVar4 = operator_new(iVar3 * 4);
      iVar3 = FUN_00597c70(*(undefined4 *)(param_1 + 4),puVar5,pvVar4);
      FUN_00427730(iVar3,param_2,param_3);
      FUN_00597c70(puVar5,*(undefined4 *)(param_1 + 8),iVar3 + param_2 * 4);
      IDPMsgHandler::OnReceive(param_1,*(uchar **)(param_1 + 4),*(ulong *)(param_1 + 8));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
      *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar6 * 4);
      iVar3 = FUN_005ad970();
      *(void **)(param_1 + 4) = pvVar4;
      *(void **)(param_1 + 8) = (void *)((int)pvVar4 + (iVar3 + param_2) * 4);
      return;
    }
    if (param_2 != 0) {
      FUN_00597c70(puVar5,puVar5,puVar5 + param_2);
      FUN_00427730(*(int *)(param_1 + 8),param_2 - (*(int *)(param_1 + 8) - (int)puVar5 >> 2),
                   param_3);
      puVar1 = *(undefined4 **)(param_1 + 8);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        *puVar5 = *param_3;
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2 * 4;
      return;
    }
  }
  else if ((iVar3 != 0) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar3 >> 2))) {
    *(uint *)(param_1 + 8) = iVar3 + param_2 * 4;
  }
  return;
}

