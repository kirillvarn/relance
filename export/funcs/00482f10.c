
void FUN_00482f10(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  Equipment *pEVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined2 **ppuVar17;
  undefined1 *puVar18;
  undefined1 local_98 [4];
  undefined2 *local_94 [2];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc016;
  local_c = ExceptionList;
  uVar2 = *(uint *)(param_1 + 8);
  local_4 = 1;
  ExceptionList = &local_c;
  uVar11 = FUN_005995f0();
  if (uVar11 < uVar2) {
    ppuVar17 = local_94;
    iVar12 = FUN_005995f0(ppuVar17);
    FUN_00578690(0,uVar2 - iVar12,ppuVar17);
  }
  else {
    uVar11 = FUN_005995f0();
    if (uVar2 < uVar11) {
      FUN_00477190(uVar2 * 8,0);
    }
  }
  uVar11 = FUN_004771d0();
  if (uVar11 < uVar2) {
    puVar18 = local_8c;
    iVar12 = FUN_004771d0(puVar18);
    FUN_004771f0(0,uVar2 - iVar12,puVar18);
  }
  else {
    uVar11 = FUN_004771d0();
    if (uVar2 < uVar11) {
      FUN_004774c0(uVar2 * 0x80,0);
    }
  }
  piVar16 = (int *)**(int **)(param_1 + 4);
  iVar12 = 0;
  if (piVar16 != *(int **)(param_1 + 4)) {
    local_94[0] = (undefined2 *)0x0;
    do {
      puVar3 = (uint *)piVar16[2];
      *(uint **)(iVar12 * 8) = puVar3;
      *(int *)(iVar12 * 8 + 4) = iVar12;
      uVar10 = FUN_00482e00(*puVar3);
      *(undefined1 *)(puVar3 + 9) = uVar10;
      uVar11 = Good2Arch(*puVar3);
      pEVar13 = Archetype::GetEquipment(uVar11);
      if (pEVar13 == (Equipment *)0x0) {
        *local_94[0] = 0;
      }
      else {
        FUN_004347e0(DAT_0067eca8,*(undefined4 *)(pEVar13 + 0x14),local_94[0],0x40);
      }
      piVar16 = (int *)*piVar16;
      local_94[0] = local_94[0] + 0x40;
      iVar12 = iVar12 + 1;
    } while (piVar16 != (int *)*(int *)(param_1 + 4));
  }
  do {
    iVar12 = 0;
    bVar8 = true;
    if ((int)(uVar2 - 1) < 1) break;
    do {
      cVar1 = *(char *)(*(int *)(iVar12 * 8) + 0x24);
      if (((cVar1 == '\0') && (*(char *)(*(int *)(iVar12 * 8 + 8) + 0x24) != '\0')) ||
         ((cVar1 == *(char *)(*(int *)(iVar12 * 8 + 8) + 0x24) &&
          (iVar14 = _wcsicmp((wchar_t *)(*(int *)(iVar12 * 8 + 4) * 0x80),
                             (wchar_t *)(*(int *)(iVar12 * 8 + 0xc) * 0x80)), 0 < iVar14)))) {
        uVar4 = *(undefined4 *)(iVar12 * 8);
        uVar5 = *(undefined4 *)(iVar12 * 8 + 4);
        *(undefined4 *)(iVar12 * 8) = *(undefined4 *)(iVar12 * 8 + 8);
        ((undefined4 *)(iVar12 * 8))[1] = *(undefined4 *)(iVar12 * 8 + 0xc);
        *(undefined4 *)(iVar12 * 8 + 8) = uVar4;
        *(undefined4 *)(iVar12 * 8 + 0xc) = uVar5;
        bVar8 = false;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(uVar2 - 1));
  } while (!bVar8);
  puVar6 = *(undefined4 **)(param_1 + 4);
  puVar9 = (undefined4 *)*puVar6;
  while (puVar9 != puVar6) {
    puVar7 = (undefined4 *)*puVar9;
    FUN_00516f70(local_98,puVar9);
    puVar9 = puVar7;
  }
  iVar12 = 0;
  if (0 < (int)uVar2) {
    do {
      iVar14 = *(int *)(param_1 + 4);
      piVar16 = *(int **)(iVar14 + 4);
      piVar15 = operator_new(0xc);
      *piVar15 = iVar14;
      if (piVar16 == (int *)0x0) {
        piVar16 = piVar15;
      }
      piVar15[1] = (int)piVar16;
      *(int **)(iVar14 + 4) = piVar15;
      *(int **)piVar15[1] = piVar15;
      FUN_005999b0(piVar15 + 2,iVar12 * 8);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar2);
  }
  FUN_005b7e1d(0);
  FUN_005b7e1d(0);
  ExceptionList = local_c;
  return;
}

