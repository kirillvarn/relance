
void FUN_00475dd0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  Equipment *pEVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 local_98 [4];
  undefined1 local_94 [8];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bbc96;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 + 8);
  iVar13 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  uVar7 = FUN_005995f0();
  if (uVar7 < uVar1) {
    puVar15 = local_94;
    iVar8 = FUN_005995f0(puVar15);
    FUN_00578690(0,uVar1 - iVar8,puVar15);
  }
  else {
    uVar7 = FUN_005995f0();
    if (uVar1 < uVar7) {
      FUN_00477190(uVar1 * 8,0);
    }
  }
  uVar7 = FUN_004771d0();
  if (uVar7 < uVar1) {
    puVar15 = local_8c;
    iVar8 = FUN_004771d0(puVar15);
    FUN_004771f0(0,uVar1 - iVar8,puVar15);
  }
  else {
    uVar7 = FUN_004771d0();
    if (uVar1 < uVar7) {
      FUN_004774c0(uVar1 * 0x80,0);
    }
  }
  piVar14 = (int *)**(int **)(param_1 + 4);
  if (piVar14 != *(int **)(param_1 + 4)) {
    puVar12 = (undefined2 *)0x0;
    do {
      puVar2 = (uint *)piVar14[2];
      *(uint **)(iVar13 * 8) = puVar2;
      *(int *)(iVar13 * 8 + 4) = iVar13;
      uVar7 = Good2Arch(*puVar2);
      pEVar9 = Archetype::GetEquipment(uVar7);
      if (pEVar9 == (Equipment *)0x0) {
        *puVar12 = 0;
      }
      else {
        FUN_004347e0(DAT_0067eca8,*(undefined4 *)(pEVar9 + 0x14),puVar12,0x40);
      }
      piVar14 = (int *)*piVar14;
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 0x40;
    } while (piVar14 != (int *)*(int *)(param_1 + 4));
  }
  do {
    iVar13 = 0;
    bVar6 = true;
    if ((int)(uVar1 - 1) < 1) break;
    do {
      iVar8 = _wcsicmp((wchar_t *)(*(int *)(iVar13 * 8 + 4) * 0x80),
                       (wchar_t *)(*(int *)(iVar13 * 8 + 0xc) * 0x80));
      if (0 < iVar8) {
        uVar3 = *(undefined4 *)(iVar13 * 8);
        uVar4 = *(undefined4 *)(iVar13 * 8 + 4);
        *(undefined4 *)(iVar13 * 8) = *(undefined4 *)(iVar13 * 8 + 8);
        ((undefined4 *)(iVar13 * 8))[1] = *(undefined4 *)(iVar13 * 8 + 0xc);
        *(undefined4 *)(iVar13 * 8 + 8) = uVar3;
        *(undefined4 *)(iVar13 * 8 + 0xc) = uVar4;
        bVar6 = false;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)(uVar1 - 1));
  } while (!bVar6);
  piVar14 = *(int **)(param_1 + 4);
  piVar5 = (int *)*piVar14;
  while (piVar5 != piVar14) {
    puVar10 = (undefined4 *)FUN_0053ab20(local_98,0);
    FUN_00516f70(local_94,*puVar10);
  }
  iVar13 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar8 = *(int *)(param_1 + 4);
      iVar11 = FUN_0042a7e0(iVar8,*(undefined4 *)(iVar8 + 4));
      *(int *)(iVar8 + 4) = iVar11;
      **(int **)(iVar11 + 4) = iVar11;
      FUN_005999b0(iVar11 + 8,iVar13 * 8);
      iVar13 = iVar13 + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    } while (iVar13 < (int)uVar1);
  }
  FUN_005b7e1d(0);
  FUN_005b7e1d(0);
  ExceptionList = local_c;
  return;
}

