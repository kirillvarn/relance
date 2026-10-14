
void __thiscall FUN_004c6b80(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  GoodInfo *pGVar6;
  Equipment *pEVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  int *piVar16;
  int local_a8;
  undefined4 *local_a4;
  int local_98;
  list<EquipDesc,std::allocator<EquipDesc>_> *local_94;
  undefined4 local_90 [36];
  
  local_94 = (list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 7);
  std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
            (local_94,&local_98,*(undefined4 *)param_1[8],(undefined4 *)param_1[8]);
  local_a8 = *(int *)(param_2 + 8);
  local_98 = local_a8;
  puVar5 = operator_new(local_a8 * 0x90);
  local_a4 = (undefined4 *)**(undefined4 **)(param_2 + 4);
  iVar8 = local_a8;
  if (0 < local_a8) {
    puVar12 = puVar5 + 3;
    do {
      pGVar6 = GoodList::find_by_archetype(local_a4[3]);
      puVar12[-3] = local_a4 + 2;
      puVar12[-2] = pGVar6;
      pEVar7 = Archetype::GetEquipment(local_a4[3]);
      puVar12[-1] = pEVar7;
      *(undefined1 *)puVar12 = 1;
      *(undefined1 *)((int)puVar12 + 1) = 0;
      iVar8 = FUN_0047e460(local_a4[3]);
      if ((pGVar6 != (GoodInfo *)0x0) && (*param_1 != 0)) {
        if ((iVar8 == 0) || (iVar8 == 2)) {
          iVar9 = FUN_00585f20(*(undefined4 *)(pGVar6 + 0x48),1);
          if (iVar9 == 0) {
            *(undefined1 *)puVar12 = 0;
          }
        }
        else if (iVar8 == 1) {
          uVar4 = FUN_00482d80(param_2,local_a4[3]);
          *(undefined1 *)puVar12 = uVar4;
        }
        if ((((*param_1 != 0) && (iVar8 == 4)) && (puVar12[-1] != 0)) &&
           (*(char *)(local_a4 + 8) == '\0')) {
          *(undefined1 *)((int)puVar12 + 1) = 1;
          FUN_004347e0(DAT_0067eca8,*(undefined4 *)(puVar12[-1] + 0x14),
                       (undefined1 *)((int)puVar12 + 2),0x40);
        }
      }
      local_a4 = (undefined4 *)*local_a4;
      puVar12 = puVar12 + 0x24;
      local_a8 = local_a8 + -1;
      iVar8 = local_98;
    } while (local_a8 != 0);
  }
  do {
    local_a8 = iVar8 + -1;
    bVar3 = true;
    if (local_a8 < 1) break;
    pcVar11 = (char *)((int)puVar5 + 0x9d);
    do {
      cVar1 = pcVar11[-0x90];
      iVar9 = 0;
      iVar13 = 0;
      if (cVar1 == '\0') {
LAB_004c6d2a:
        if (*pcVar11 == '\0') {
          if ((pcVar11[-0x91] == '\0') && (pcVar11[-1] != '\0')) {
LAB_004c6da3:
            pcVar14 = pcVar11 + -0x9d;
            puVar12 = local_90;
            for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              puVar12 = puVar12 + 1;
            }
            pcVar14 = pcVar11 + -0xd;
            pcVar15 = pcVar11 + -0x9d;
            for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            bVar3 = false;
            puVar12 = local_90;
            pcVar14 = pcVar11 + -0xd;
            for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined4 *)pcVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              pcVar14 = pcVar14 + 4;
            }
          }
          else if (pcVar11[-0x91] == pcVar11[-1]) {
            if ((*(char *)(*(int *)(pcVar11 + -0x9d) + 0x18) == '\0') &&
               (*(char *)(*(int *)(pcVar11 + -0xd) + 0x18) != '\0')) goto LAB_004c6da3;
            if (*(char *)(*(int *)(pcVar11 + -0x9d) + 0x18) ==
                *(char *)(*(int *)(pcVar11 + -0xd) + 0x18)) {
              if (*(int **)(pcVar11 + -0x95) != (int *)0x0) {
                iVar9 = (**(code **)(**(int **)(pcVar11 + -0x95) + 0x10))();
              }
              if (*(int **)(pcVar11 + -5) != (int *)0x0) {
                iVar13 = (**(code **)(**(int **)(pcVar11 + -5) + 0x10))();
              }
              if ((iVar13 < iVar9) ||
                 ((iVar9 == iVar13 &&
                  (*(uint *)(*(int *)(pcVar11 + -0xd) + 4) <
                   *(uint *)(*(int *)(pcVar11 + -0x9d) + 4))))) goto LAB_004c6da3;
            }
          }
        }
      }
      else {
        if (*pcVar11 == '\0') goto LAB_004c6da3;
        if (cVar1 == '\0') goto LAB_004c6d2a;
        if (*pcVar11 == '\0') {
          if (cVar1 == '\0') goto LAB_004c6d2a;
        }
        else {
          iVar9 = _wcsicmp((wchar_t *)(pcVar11 + -0x8f),(wchar_t *)(pcVar11 + 1));
          if (0 < iVar9) goto LAB_004c6da3;
        }
      }
      pcVar11 = pcVar11 + 0x90;
      local_a8 = local_a8 + -1;
    } while (local_a8 != 0);
  } while (!bVar3);
  puVar12 = puVar5;
  local_a8 = iVar8;
  if (0 < iVar8) {
    do {
      iVar8 = *(int *)(local_94 + 4);
      uVar2 = *puVar12;
      piVar16 = *(int **)(iVar8 + 4);
      piVar10 = operator_new(0x28);
      *piVar10 = iVar8;
      if (piVar16 == (int *)0x0) {
        piVar16 = piVar10;
      }
      piVar10[1] = (int)piVar16;
      *(int **)(iVar8 + 4) = piVar10;
      *(int **)piVar10[1] = piVar10;
      FUN_004b7390(piVar10 + 2,uVar2);
      *(int *)(local_94 + 8) = *(int *)(local_94 + 8) + 1;
      local_a8 = local_a8 + -1;
      puVar12 = puVar12 + 0x24;
    } while (local_a8 != 0);
  }
  FUN_005b7e1d(puVar5);
  return;
}

