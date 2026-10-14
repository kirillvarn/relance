
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047af30(int param_1)

{
  undefined2 uVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  Equipment *pEVar8;
  int iVar9;
  EquipDesc *pEVar10;
  char *pcVar11;
  int iVar12;
  float *pfVar13;
  int *piVar14;
  float10 fVar15;
  undefined4 uVar16;
  char *local_24;
  int local_20;
  undefined2 *local_1c;
  EquipDescList *local_18;
  Ship *local_14;
  int iStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(int *)(param_1 + 0x360) != 0) &&
     (local_14 = Archetype::GetShip(*(uint *)(param_1 + 0x348)), local_14 != (Ship *)0x0)) {
    uVar16 = 0;
    uVar5 = FUN_004c4060(0);
    FUN_004c62b0(uVar5,uVar16);
    iVar9 = *(int *)(param_1 + 0x360);
    iVar12 = *(int *)(iVar9 + 0x354);
    local_18 = (EquipDescList *)(iVar9 + 0x34c);
    local_20 = iVar12;
    puVar6 = operator_new(iVar12 * 8);
    local_24 = (char *)0x0;
    local_1c = puVar6;
    if (DAT_0066873c != 0) {
      local_24 = (char *)FUN_0043a510(DAT_0066873c);
    }
    piVar14 = (int *)**(int **)(iVar9 + 0x350);
    if (piVar14 != *(int **)(iVar9 + 0x350)) {
      do {
        fVar15 = (float10)_DAT_005d15b8;
        *puVar6 = *(undefined2 *)((int)piVar14 + 10);
        if (local_24 == (char *)0x0) {
LAB_0047b063:
          *(float *)(puVar6 + 2) = (float)fVar15;
        }
        else {
          uVar7 = Arch2Good(piVar14[3]);
          pEVar8 = Archetype::GetEquipment(piVar14[3]);
          iVar9 = (**(code **)(*(int *)pEVar8 + 0x10))();
          if ((((uVar7 != 0) && (iVar9 != 0xc)) && (iVar9 != 0x14)) &&
             ((iVar9 != 0x16 && (iVar9 != 0xb)))) {
            fVar15 = (float10)FUN_00438060(uVar7);
            if (fVar15 == (float10)_DAT_005c7474) {
              fVar15 = (float10)_DAT_005d15b8;
            }
            goto LAB_0047b063;
          }
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 2) = 0;
        }
        piVar14 = (int *)*piVar14;
        puVar6 = puVar6 + 4;
        iVar12 = local_20;
      } while (piVar14 != (int *)*(int *)(local_18 + 4));
    }
    do {
      bVar3 = true;
      if (iVar12 + -1 < 1) break;
      pfVar13 = (float *)(local_1c + 2);
      iVar9 = iVar12 + -1;
      do {
        if (*pfVar13 < pfVar13[2]) {
          uVar1 = *(undefined2 *)(pfVar13 + -1);
          *(undefined2 *)(pfVar13 + -1) = *(undefined2 *)(pfVar13 + 1);
          fVar2 = pfVar13[2];
          pfVar13[2] = *pfVar13;
          *pfVar13 = fVar2;
          *(undefined2 *)(pfVar13 + 1) = uVar1;
          bVar3 = false;
        }
        pfVar13 = pfVar13 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    } while (!bVar3);
    iStack_10 = 0;
    if (0 < local_20) {
      do {
        if ((local_1c[iStack_10 * 4] != 0) &&
           (pEVar10 = EquipDescList::find_equipment_item(local_18,local_1c[iStack_10 * 4]),
           pEVar10 != (EquipDesc *)0x0)) {
          pcVar11 = (char *)FUN_00585ef0(pEVar10,0);
          local_24 = StringAlloc(pcVar11,false);
          if (*local_24 == '\0') {
            local_24 = *(char **)CARGO_BAY_HP_NAME_exref;
          }
          iVar9 = *(int *)(pEVar10 + 0x14);
          if (*(int *)(pEVar10 + 4) == DAT_00674a8c) {
            iVar12 = *(int *)(local_14 + 0x140);
LAB_0047b16e:
            if ((iVar12 < iVar9) && (-1 < iVar12)) {
              iVar9 = iVar12;
            }
          }
          else if (*(int *)(pEVar10 + 4) == DAT_00674a88) {
            iVar12 = *(int *)(local_14 + 0x144);
            goto LAB_0047b16e;
          }
          cVar4 = FUN_004c6530(pEVar10,&local_24,iVar9,0);
          if (cVar4 == '\0') {
            if (1 < *(int *)(pEVar10 + 0x14)) {
              FUN_004c63e0(&fStack_c,&fStack_8);
              fStack_4 = fStack_c - fStack_8;
              if (((*(uint *)(pEVar10 + 4) != 0) &&
                  (pEVar8 = Archetype::GetEquipment(*(uint *)(pEVar10 + 4)),
                  pEVar8 != (Equipment *)0x0)) && (_DAT_005c7474 < *(float *)(pEVar8 + 0x5c))) {
                iVar12 = ftol();
                if (iVar9 < iVar12) {
                  iVar12 = iVar9;
                }
                if ((0 < iVar12) &&
                   (cVar4 = FUN_004c6530(pEVar10,&local_24,iVar12,0), cVar4 != '\0')) {
                  FUN_004c6430(pEVar10,iVar12);
                }
              }
            }
          }
          else {
            FUN_004c6430(pEVar10,iVar9);
          }
        }
        iStack_10 = iStack_10 + 1;
      } while (iStack_10 < local_20);
    }
    FUN_005b7e1d(local_1c);
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    FUN_004c6a50(0,0,5);
    FUN_004795f0(0);
    if (*(int *)(param_1 + 0x360) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
    }
    iVar9 = *(int *)(param_1 + 0x360);
    *(undefined4 *)(iVar9 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x4f4) = 0;
    FUN_004c6a50(0,0,5);
    FUN_004795f0(0);
    if (*(int *)(iVar9 + 0x360) != 0) {
      *(undefined4 *)(*(int *)(iVar9 + 0x360) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(iVar9 + 0x360) + 0x4ec) = 0;
    }
  }
  return;
}

