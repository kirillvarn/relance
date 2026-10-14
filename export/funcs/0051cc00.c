
/* WARNING: Removing unreachable block (ram,0x0051ce49) */
/* WARNING: Removing unreachable block (ram,0x0051ce54) */
/* WARNING: Removing unreachable block (ram,0x0051ce6b) */
/* WARNING: Removing unreachable block (ram,0x0051ce80) */
/* WARNING: Removing unreachable block (ram,0x0051ce96) */
/* WARNING: Removing unreachable block (ram,0x0051cead) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051cc00(float param_1)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  CSolar *this;
  ISystem *pIVar11;
  CEquip *this_00;
  undefined4 *puVar12;
  undefined4 *unaff_EBX;
  undefined4 *puVar13;
  uint uVar14;
  float10 fVar15;
  float fVar16;
  float unaff_retaddr;
  float in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  FUN_005b7e90();
  cVar5 = FUN_0041a3e0();
  if (cVar5 == '\0') {
    fVar15 = (float10)FUN_0042d680();
    fVar2 = (float10)_DAT_00675298;
    _DAT_00675298 = (float)(fVar15 + fVar2);
    if ((float10)_DAT_005c75dc <= fVar15 + fVar2) {
      _DAT_00675298 = _DAT_00675298 - _DAT_005c75dc;
      puVar7 = (undefined4 *)FUN_0054baf0();
      uVar14 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        pfVar8 = (float *)(**(code **)*puVar7)();
        fVar16 = *pfVar8;
        fVar1 = pfVar8[1];
        piVar9 = (int *)(**(code **)(*(int *)PTR_DAT_00613ed0 + 0xc))();
        in_stack_00000030 = 0;
        in_stack_0000002c = 0x800;
        in_stack_00000020 = 0x469c4000;
        in_stack_0000001c = fVar1;
        iVar10 = (**(code **)(*piVar9 + 0x1c))();
        puVar13 = puVar7;
        if ((iVar10 != 0) && (in_stack_00000028 != 0)) {
          puVar12 = &stack0x0000002c;
          do {
            this = (CSolar *)(**(code **)(*(int *)*puVar12 + 0x150))();
            if ((this == (CSolar *)0x0) || ((*(uint *)(this + 0x4c) & 0x303) != 0x303)) {
              this = (CSolar *)0x0;
            }
            bVar6 = CSolar::GetVisitValue(this);
            if ((bVar6 & 0x81) == 0) {
              FUN_00422b80();
              fVar3 = *(float *)(this + 0x38) * _DAT_005d8850;
              if (fVar3 < _DAT_005ca218) {
                fVar3 = _DAT_005ca218;
              }
              if ((bVar6 & 0x10) != 0) {
                fVar3 = _DAT_005db0b4;
              }
              if (SQRT(fVar16 * fVar16 + (float)puVar7 * (float)puVar7 + fVar1 * fVar1) -
                  *(float *)(this + 0x38) < fVar3) {
                FUN_004c4e00();
              }
            }
            uVar14 = uVar14 + 1;
            puVar12 = puVar12 + 1;
            puVar13 = unaff_EBX;
          } while (uVar14 < in_stack_00000028);
        }
        uVar14 = FUN_004c4830();
        pIVar11 = Universe::get_system(uVar14);
        piVar9 = (int *)(**(code **)(*(int *)pIVar11 + 0x1c))();
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0x1c))();
        }
        fVar16 = DAT_00612434;
        if (((puVar13 == (undefined4 *)0xfffffff4) || (iVar10 = puVar13[4], iVar10 == 0)) ||
           ((*(uint *)(iVar10 + 0x4c) & 0x503) != 0x503)) {
          iVar10 = 0;
        }
        this_00 = CEquipManager::FindFirst((CEquipManager *)(iVar10 + 0xe4),0x80000);
        if (this_00 != (CEquip *)0x0) {
          fVar16 = CEScanner::GetRadarRange((CEScanner *)this_00);
        }
        in_stack_00000020 = 1;
        for (puVar12 = (undefined4 *)FUN_00540fc0(); puVar12 != (undefined4 *)0x0;
            puVar12 = (undefined4 *)puVar12[5]) {
          cVar5 = FUN_0053a9c0();
          if ((cVar5 == '\0') && (puVar12 != puVar13)) {
            if (((puVar12 == (undefined4 *)0x0) ||
                ((puVar12 == (undefined4 *)0xfffffff4 || (iVar10 = puVar12[4], iVar10 == 0)))) ||
               ((*(uint *)(iVar10 + 0x4c) & 0x503) != 0x503)) {
              iVar10 = 0;
            }
            if ((*(float *)(iVar10 + 0x140) < _DAT_005c75dc) &&
               (fVar1 = *(float *)(iVar10 + 0x2c) - unaff_retaddr,
               fVar4 = *(float *)(iVar10 + 0x30) - param_1,
               fVar3 = *(float *)(iVar10 + 0x34) - (float)puVar7,
               fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3 < fVar16 * fVar16)) {
              FUN_0053a9d0();
              in_stack_0000001c = *(float *)(iVar10 + 0x104);
              iVar10 = Reputation::Vibe::GetAffiliation
                                 ((int *)&stack0x0000001c,(uint *)&stack0xfffffffc,false);
              if (iVar10 == 0) {
                FUN_004c4da0();
                FUN_004c4e00();
              }
            }
          }
        }
      }
    }
  }
  return;
}

