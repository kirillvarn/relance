
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443b60(void)

{
  char cVar1;
  DetailSwitchTable *this;
  bool bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  float *pfVar11;
  int *unaff_EBP;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  float fVar16;
  undefined4 uVar17;
  int iStack00000004;
  undefined4 uStack0000000c;
  int *in_stack_00001380;
  int *in_stack_00001398;
  int iVar18;
  float *pfVar19;
  int iVar20;
  
  FUN_005b7e90();
  uStack0000000c = 2;
  uVar17 = 0;
  bVar2 = RtcSlider::is_enabled("low_character_lod");
  if (bVar2) {
    uVar17 = 2;
    uStack0000000c = 3;
  }
  puVar3 = (undefined4 *)&stack0x0000003c;
  iVar8 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xffffffff;
    puVar3 = puVar3 + 6;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iStack00000004 = 0;
  pcVar10 = &stack0x00000394;
  puVar3 = (undefined4 *)&stack0x00000038;
  puVar15 = &stack0x00000094;
  do {
    iVar8 = in_stack_00001398[iStack00000004];
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0xc) != 0)) {
      pcVar4 = *(code **)(iVar8 + 8);
      if (*(code **)(iVar8 + 8) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      pcVar5 = GetFullFilename((char *)pcVar4);
      pcVar9 = pcVar10;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar9 = cVar1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      puVar6 = (undefined4 *)(puVar15 + 4);
      iVar8 = 0x10;
      do {
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      puVar3[-1] = 0x10;
      *puVar3 = puVar15;
      puVar3[1] = 0;
      puVar3[2] = pcVar10;
      puVar3[3] = uVar17;
      uVar7 = uStack0000000c;
      if (iStack00000004 == 0) {
        uVar7 = 0xffffffff;
      }
      puVar3[4] = uVar7;
      puVar15 = puVar15 + 0xc0;
      pcVar10 = pcVar10 + 0x400;
      puVar3 = puVar3 + 6;
    }
    iStack00000004 = iStack00000004 + 1;
  } while (iStack00000004 < 4);
  RefreshLoadingProgress();
  iVar8 = 4;
  piVar13 = in_stack_00001398;
  do {
    if ((*piVar13 != 0) && (*(int *)(*piVar13 + 0xc) != 0)) {
      uVar17 = FUN_0041aa50();
      *(undefined4 *)((int)piVar13 + (int)(&stack0x00000024 + -(int)in_stack_00001398)) = uVar17;
    }
    piVar13 = piVar13 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  RefreshLoadingProgress();
  (**(code **)(**(int **)Deform_exref + 0xc))();
  RefreshLoadingProgress();
  iVar8 = 4;
  do {
    if ((*in_stack_00001398 != 0) && (*(int *)(*in_stack_00001398 + 0xc) != 0)) {
      FUN_0041b030();
    }
    in_stack_00001398 = in_stack_00001398 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  RefreshLoadingProgress();
  pfVar19 = (float *)(unaff_EBP + 5);
  iVar20 = 0;
  iVar8 = 0;
  piVar13 = unaff_EBP;
  do {
    piVar14 = piVar13 + 1;
    iVar12 = 0;
    if ((*in_stack_00001380 == 0) || (*(int *)(*in_stack_00001380 + 0xc) == 0)) {
      *piVar14 = 0;
      piVar13[0x45] = 0;
    }
    else {
      iVar18 = *(int *)(iVar8 + iStack00000004);
      *piVar14 = iVar18;
      if (0 < iVar18) {
        iVar18 = 0;
        pfVar11 = pfVar19;
        do {
          this = *(DetailSwitchTable **)(*in_stack_00001380 + 0x18);
          fVar16 = DetailSwitchTable::get_switch_distance
                             (this,*(float *)(*(int *)(iVar8 + 4 + iStack00000004) + 8 + iVar18) *
                                   (float)_DAT_005ca320);
          *pfVar11 = fVar16;
          iVar12 = iVar12 + 1;
          iVar18 = iVar18 + 0xc;
          pfVar11 = pfVar11 + 1;
          piVar13[0x45] = (int)this;
        } while (iVar12 < *piVar14);
      }
      if (0 < *piVar14) {
        fVar16 = DetailSwitchTable::get_switch_distance
                           (*(DetailSwitchTable **)(*in_stack_00001380 + 0x18),0.0);
        unaff_EBP[*piVar14 + iVar20 + 4] = (int)fVar16;
      }
      iVar8 = iVar8 + 0x18;
    }
    iVar20 = iVar20 + 0x10;
    pfVar19 = pfVar19 + 0x10;
    in_stack_00001380 = in_stack_00001380 + 1;
    piVar13 = piVar14;
  } while (iVar20 < 0x40);
  return;
}

