
/* WARNING: Removing unreachable block (ram,0x0058677e) */
/* WARNING: Removing unreachable block (ram,0x00586793) */
/* WARNING: Removing unreachable block (ram,0x005867a2) */
/* WARNING: Removing unreachable block (ram,0x005867a9) */
/* WARNING: Removing unreachable block (ram,0x005867b0) */

uint __thiscall FUN_00586560(int param_1,char *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uchar *puVar3;
  Ship *pSVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  puVar3 = (uchar *)FUN_00527820(*(undefined4 *)(param_1 + 0x554),*(undefined4 *)(param_1 + 0x554),
                                 *(undefined4 *)(param_1 + 0x550));
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x54c),puVar3,*(ulong *)(param_1 + 0x554));
  *(uchar **)(param_1 + 0x554) = puVar3;
  uVar9 = 0;
  if (param_2 != (char *)0x0) {
    bVar2 = ID_String::IsEmpty((ID_String *)(param_1 + 0x32c));
    uVar9 = (uint)bVar2;
    if (!bVar2) {
      pSVar4 = Archetype::GetShipByName((ID_String *)(param_1 + 0x32c));
      if (*(int *)(pSVar4 + 0x134) == 0) {
        local_c = 0;
        uVar9 = 0;
      }
      else {
        local_c = *(int *)(pSVar4 + 0x138) - *(int *)(pSVar4 + 0x134);
        uVar9 = local_c * 0x66666667;
        local_c = local_c / 0x14;
      }
      if (0 < local_c) {
        local_10 = 0;
        do {
          iVar5 = *(int *)(local_10 + 8 + *(int *)(pSVar4 + 0x134));
          if (iVar5 == 0) {
            local_1c = 0;
          }
          else {
            local_1c = *(int *)(local_10 + *(int *)(pSVar4 + 0x134) + 0xc) - iVar5 >> 2;
          }
          local_18 = 0;
          if (0 < local_1c) {
            do {
              iVar5 = stricmp(param_2,*(char **)(*(int *)(local_10 + 8 + *(int *)(pSVar4 + 0x134)) +
                                                local_18 * 4));
              if (iVar5 == 0) {
                puVar8 = *(undefined4 **)(param_1 + 0x554);
                puVar10 = (undefined4 *)(*(int *)(pSVar4 + 0x134) + local_10);
                if (*(int *)(param_1 + 0x558) - (int)puVar8 >> 2 == 0) {
                  iVar5 = *(int *)(param_1 + 0x550);
                  if ((iVar5 == 0) || (uVar9 = (int)puVar8 - iVar5 >> 2, uVar9 < 2)) {
                    uVar9 = 1;
                  }
                  if (iVar5 == 0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = (int)puVar8 - iVar5 >> 2;
                  }
                  iVar5 = iVar5 + uVar9;
                  iVar6 = iVar5;
                  if (iVar5 < 0) {
                    iVar6 = 0;
                  }
                  pvVar7 = operator_new(iVar6 * 4);
                  iVar6 = FUN_00597c70(*(undefined4 *)(param_1 + 0x550),puVar8,pvVar7);
                  FUN_00427730(iVar6,1,puVar10);
                  FUN_00597c70(puVar8,*(undefined4 *)(param_1 + 0x554),iVar6 + 4);
                  IDPMsgHandler::OnReceive
                            ((IDPMsgHandler *)(param_1 + 0x54c),*(uchar **)(param_1 + 0x550),
                             *(ulong *)(param_1 + 0x554));
                  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x550));
                  *(void **)(param_1 + 0x558) = (void *)((int)pvVar7 + iVar5 * 4);
                  iVar5 = FUN_005ad970();
                  *(void **)(param_1 + 0x550) = pvVar7;
                  *(int *)(param_1 + 0x554) = (int)pvVar7 + iVar5 * 4 + 4;
                }
                else {
                  FUN_00597c70(puVar8,puVar8,puVar8 + 1);
                  FUN_00427730(*(int *)(param_1 + 0x554),
                               1 - (*(int *)(param_1 + 0x554) - (int)puVar8 >> 2),puVar10);
                  puVar1 = *(undefined4 **)(param_1 + 0x554);
                  for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
                    *puVar8 = *puVar10;
                  }
                  *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x554) + 4;
                }
              }
              local_18 = local_18 + 1;
            } while (local_18 < local_1c);
          }
          local_10 = local_10 + 0x14;
          local_c = local_c + -1;
        } while (local_c != 0);
        uVar9 = 0;
      }
    }
  }
  return uVar9;
}

