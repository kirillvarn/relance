
void FUN_00483230(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  Equipment *pEVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint *puVar18;
  byte local_41;
  int local_40;
  int local_3c;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined1 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc028;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 8);
  local_1c = (undefined1)param_1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (iVar3 == 0) {
    ExceptionList = &pvStack_c;
    iVar11 = FUN_004cecd0();
    if (iVar11 != 0) {
      FUN_00501f80(local_18,local_14);
    }
  }
  else {
    puVar18 = &local_2c;
    ExceptionList = &pvStack_c;
    iVar11 = FUN_004cecd0(puVar18);
    FUN_00501c60(0,iVar3 - iVar11,puVar18);
  }
  piVar17 = (int *)**(int **)(param_1 + 4);
  if (piVar17 != *(int **)(param_1 + 4)) {
    local_3c = 0;
    do {
      iVar11 = 0;
      puVar18 = (uint *)piVar17[2];
      local_41 = 0;
      local_2c = FUN_0047f040(*puVar18);
      uStack_28 = 0;
      uVar8 = (ulonglong)local_2c;
      uVar9 = FUN_00482e00(*puVar18);
      *(undefined1 *)(puVar18 + 9) = uVar9;
      uVar12 = Good2Arch(*puVar18);
      pEVar13 = Archetype::GetEquipment(uVar12);
      if (pEVar13 != (Equipment *)0x0) {
        iVar11 = (**(code **)(*(int *)pEVar13 + 0x10))();
        if (iVar11 == 0x11) {
          if (pEVar13[0xba] == (Equipment)0x0) {
            bVar10 = ID_String::IsEmpty((ID_String *)(pEVar13 + 0x98));
            if ((((bVar10) ||
                 (pEVar13 = Archetype::GetEquipmentByName((ID_String *)(pEVar13 + 0x98)),
                 pEVar13 == (Equipment *)0x0)) ||
                (iVar14 = (**(code **)(*(int *)pEVar13 + 0x10))(), iVar14 != 0x1f)) ||
               (*(int *)(pEVar13 + 0x90) == 0)) goto LAB_0048339e;
          }
        }
        else if ((iVar11 != 0x1f) ||
                ((*(int *)(pEVar13 + 0xa8) != 10 && (*(int *)(pEVar13 + 0xa8) != 0x23))))
        goto LAB_0048339e;
        local_41 = 1;
      }
LAB_0048339e:
      *(uint **)(local_18 + local_3c) = puVar18;
      *(int *)(local_18 + 4 + local_3c) = iVar11;
      *(uint *)(local_18 + 8 + local_3c) = (uint)local_41;
      local_3c = local_3c + 0x10;
      *(float *)(local_18 + -4 + local_3c) = (float)uVar8;
      piVar17 = (int *)*piVar17;
    } while (piVar17 != (int *)*(int *)(param_1 + 4));
  }
  do {
    local_3c = iVar3 + -1;
    bVar10 = true;
    if (local_3c < 1) break;
    iVar11 = 0;
    do {
      cVar2 = *(char *)(*(int *)(iVar11 + local_18) + 0x24);
      puVar1 = (undefined4 *)(iVar11 + local_18);
      if (((cVar2 == '\0') &&
          (puVar16 = (undefined4 *)(iVar11 + 0x10 + local_18),
          *(char *)(*(int *)(iVar11 + 0x10 + local_18) + 0x24) != '\0')) ||
         ((puVar16 = (undefined4 *)(iVar11 + 0x10 + local_18),
          cVar2 == *(char *)(*(int *)(iVar11 + 0x10 + local_18) + 0x24) &&
          (((int)puVar1[5] < (int)puVar1[1] ||
           ((puVar1[1] == puVar1[5] &&
            (((int)puVar1[6] < (int)puVar1[2] ||
             ((puVar1[2] == puVar1[6] && ((float)puVar1[7] < (float)puVar1[3])))))))))))) {
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uStack_20 = puVar1[3];
        *puVar1 = *puVar16;
        puVar1[1] = puVar16[1];
        puVar1[2] = puVar16[2];
        puVar1[3] = puVar16[3];
        puVar1 = (undefined4 *)(local_18 + 0x10 + iVar11);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uStack_20;
        bVar10 = false;
      }
      iVar11 = iVar11 + 0x10;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  } while (!bVar10);
  piVar17 = *(int **)(param_1 + 4);
  piVar15 = (int *)*piVar17;
  while (piVar15 != piVar17) {
    piVar7 = (int *)*piVar15;
    *(int *)piVar15[1] = *piVar15;
    *(int *)(*piVar15 + 4) = piVar15[1];
    FUN_005b7e1d(piVar15);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar15 = piVar7;
  }
  if (0 < iVar3) {
    local_40 = 0;
    local_3c = iVar3;
    do {
      iVar11 = local_18;
      iVar3 = *(int *)(param_1 + 4);
      piVar17 = *(int **)(iVar3 + 4);
      piVar15 = operator_new(0xc);
      *piVar15 = iVar3;
      if (piVar17 == (int *)0x0) {
        piVar17 = piVar15;
      }
      piVar15[1] = (int)piVar17;
      *(int **)(iVar3 + 4) = piVar15;
      *(int **)piVar15[1] = piVar15;
      if (piVar15 + 2 != (int *)0x0) {
        piVar15[2] = *(int *)(local_40 + iVar11);
      }
      local_40 = local_40 + 0x10;
      local_3c = local_3c + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    } while (local_3c != 0);
  }
  FUN_005b7e1d(local_18);
  ExceptionList = pvStack_c;
  return;
}

