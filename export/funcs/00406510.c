
void __fastcall FUN_00406510(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  uint unaff_EBX;
  int iVar9;
  int iVar10;
  int unaff_ESI;
  int iVar11;
  int *piVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined4 **ppuVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  undefined4 *puStack_10c;
  int iStack_108;
  undefined1 auStack_ec [4];
  int iStack_e8;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 auStack_a4 [4];
  undefined1 auStack_94 [20];
  int iStack_80;
  undefined4 auStack_74 [16];
  int *piStack_34;
  int *piStack_2c;
  undefined4 uStack_28;
  
  piVar12 = *(int **)Pipeline_exref;
  puVar13 = &DAT_005c7608;
  puStack_10c = (undefined4 *)0x89;
  do {
    iStack_108 = *(int *)(puVar13 + 4);
    (**(code **)(*piVar12 + 0xf0))(piVar12);
    puStack_10c = *(undefined4 **)(puVar13 + 8);
    puVar13 = puVar13 + 8;
  } while (puStack_10c != (undefined4 *)0x0);
  iVar10 = 0;
  iStack_108 = 0;
  puStack_10c = (undefined4 *)0x0;
  (**(code **)(**(int **)Pipeline_exref + 0x108))(*(int **)Pipeline_exref);
  piVar12 = *(int **)Pipeline_exref;
  puVar13 = &DAT_005c7628;
  iVar2 = 0x8d;
  do {
    (**(code **)(*piVar12 + 0xf0))(piVar12,iVar2,*(undefined4 *)(puVar13 + 4));
    iVar2 = *(int *)(puVar13 + 8);
    puVar13 = puVar13 + 8;
  } while (iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    uStack_dc = 2;
    uStack_d4 = 0xc;
    uStack_d0 = 0x10;
    uStack_cc = 0;
    uStack_ac = 4;
    uStack_a8 = 0x10;
    auStack_a4[0] = 0;
    auStack_74[0] = 0x42;
    iVar9 = 0;
    (**(code **)(**(int **)VertexBuffer_exref + 0x14))
              (*(int **)VertexBuffer_exref,0x42,iVar2,auStack_ec);
    bVar1 = (byte)unaff_EBX;
    iVar11 = 0;
    if ((bVar1 & 0xc) == 0xc) {
      iVar11 = 0x1c;
    }
    else if ((bVar1 & 4) == 4) {
      iVar11 = 0x10;
    }
    else if ((bVar1 & 2) == 2) {
      iVar11 = 0xc;
    }
    iVar17 = 0;
    if ((unaff_EBX & 0x10) != 0) {
      iVar17 = 0xc;
    }
    iStack_108 = 0;
    if ((unaff_EBX & 0x40) != 0) {
      iStack_108 = 4;
    }
    if ((char)bVar1 < '\0') {
      iStack_108 = iStack_108 + 4;
    }
    iVar3 = FUN_004061a0(unaff_EBX);
    iVar3 = iVar3 + iStack_108;
    piVar12 = (int *)*puStack_10c;
    iVar18 = 0;
    puVar5 = puStack_10c;
    if (0 < (int)puStack_10c[1]) {
      do {
        if (*(char *)((int)piVar12 + 0x19) != '\0') {
          psVar8 = (short *)piVar12[3];
          iVar4 = 0;
          psVar7 = (short *)(puVar5[4] + iVar9 * 2);
          if (0 < piVar12[2]) {
            do {
              *psVar7 = *psVar8 + (short)iVar10;
              iVar4 = iVar4 + 1;
              psVar7 = psVar7 + 1;
              psVar8 = psVar8 + 1;
              iVar9 = unaff_ESI;
            } while (iVar4 < piVar12[2]);
          }
          iStack_d8 = *piVar12;
          iVar9 = iVar9 + piVar12[2];
          iStack_e8 = piVar12[1];
          iStack_c0 = iStack_e8 + 0xc;
          iStack_b0 = iStack_d8;
          iStack_80 = iStack_d8;
          (**(code **)(**(int **)VertexBuffer_exref + 0x20))
                    (*(int **)VertexBuffer_exref,(iVar3 + iVar17 + iVar11) * iVar10,unaff_EBX,
                     auStack_ec,0,iStack_d8);
          iVar10 = iVar10 + *piVar12;
          puVar5 = puStack_10c;
          unaff_ESI = iVar9;
        }
        iVar18 = iVar18 + 1;
        piVar12 = piVar12 + 7;
      } while (iVar18 < (int)puVar5[1]);
    }
    puVar16 = &stack0xffffff04;
    (**(code **)(**(int **)VertexBuffer_exref + 0x18))(*(int **)VertexBuffer_exref,puVar16);
    piVar12 = *(int **)Pipeline_exref;
    puVar13 = &DAT_005c7650;
    iVar11 = 1;
    do {
      (**(code **)(*piVar12 + 0xf8))(piVar12,0,iVar11,*(undefined4 *)(puVar13 + 4));
      iVar11 = *(int *)(puVar13 + 8);
      puVar13 = puVar13 + 8;
    } while (iVar11 != 0);
    ppuVar15 = &puStack_10c;
    puStack_10c = (undefined4 *)0x1;
    (**(code **)(**(int **)Pipeline_exref + 0x18))(*(int **)Pipeline_exref,7,ppuVar15);
    if (iVar2 == 0) {
      piVar12 = *(int **)Pipeline_exref;
      (**(code **)(*piVar12 + 0x6c))(piVar12,uStack_28);
      iVar2 = **(int **)Pipeline_exref;
      uVar6 = (**(code **)(*piStack_34 + 0x40))(piStack_34);
      (**(code **)(iVar2 + 0x74))(*(undefined4 *)Pipeline_exref,uVar6);
    }
    else {
      uVar6 = (**(code **)(*piStack_2c + 0x40))(piStack_2c);
      if (DAT_0061649c == (int *)0x0) {
        DAT_0061649c = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_0061649c + 0x1c))(DAT_0061649c,auStack_94,uVar6);
      puVar5 = auStack_a4;
      puVar14 = auStack_74;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar14 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar14 = puVar14 + 1;
      }
      (**(code **)(**(int **)Pipeline_exref + 0x7c))(*(int **)Pipeline_exref,auStack_74);
      piVar12 = piStack_2c;
    }
    (**(code **)(**(int **)Pipeline_exref + 0x120))
              (*(int **)Pipeline_exref,2,ppuVar15,puVar16,iVar10,piVar12[4],iVar9,0);
    piVar12 = *(int **)Pipeline_exref;
    puVar13 = &DAT_005c7640;
    iVar2 = 0x8d;
    do {
      (**(code **)(*piVar12 + 0xf0))(piVar12,iVar2,*(undefined4 *)(puVar13 + 4));
      iVar2 = *(int *)(puVar13 + 8);
      puVar13 = puVar13 + 8;
    } while (iVar2 != 0);
  }
  return;
}

