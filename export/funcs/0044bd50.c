
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0044bd50(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint in_EAX;
  int iVar7;
  undefined4 uVar8;
  undefined2 extraout_var;
  float unaff_EBX;
  int iVar9;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar10;
  int *piVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint local_5c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float afStack_30 [2];
  float fStack_28;
  undefined1 local_10 [8];
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar9 = 0;
  if (*(int *)(iVar1 + 0x138) == 0) {
    local_5c = 0;
  }
  else {
    in_EAX = *(int *)(iVar1 + 0x13c) - *(int *)(iVar1 + 0x138) >> 2;
    local_5c = in_EAX;
  }
  if (0 < (int)local_5c) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(iVar1 + 0x138) + iVar9 * 4);
      iVar7 = stricmp(param_2,(char *)*puVar2);
      if (iVar7 == 0) {
        if (DAT_00668ac0 == (int *)0x0) {
          DAT_00668ac0 = (int *)FUN_005b73e0();
        }
        puVar16 = puVar2 + 4;
        puVar15 = local_10;
        (**(code **)(*DAT_00668ac0 + 0x50))(DAT_00668ac0);
        fVar3 = (float)puVar2[3];
        uStack_8 = puVar2[0xd];
        fVar4 = (float)puVar2[0xe];
        uVar8 = (**(code **)(**(int **)(param_1 + 0x500) + 0x10))(*(int **)(param_1 + 0x500));
        if (DAT_00668ac0 == (int *)0x0) {
          DAT_00668ac0 = (int *)FUN_005b73e0();
        }
        pfVar12 = afStack_30;
        piVar11 = DAT_00668ac0;
        (**(code **)(*DAT_00668ac0 + 0x50))(DAT_00668ac0,pfVar12,uVar8);
        (**(code **)(**(int **)(param_1 + 0x500) + 0xc))(*(int **)(param_1 + 0x500));
        fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x18))
                                    (*(int **)(param_1 + 0x500));
        fVar13 = (float)fVar10;
        fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x20))
                                    (*(int **)(param_1 + 0x500));
        fVar14 = (float)fVar10;
        fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x24))
                                    (*(int **)(param_1 + 0x500));
        fVar5 = ABS((float)puVar15 - unaff_ESI);
        fVar6 = (float)_DAT_005cbfc0;
        in_EAX = CONCAT22(extraout_var,
                          (ushort)(fVar5 < fVar6) << 8 | (ushort)(NAN(fVar5) || NAN(fVar6)) << 10 |
                          (ushort)(fVar5 == fVar6) << 0xe);
        if (fVar5 < fVar6) {
          fVar4 = ABS((float)puVar16 - fVar4);
          fVar5 = (float)_DAT_005cbfc0;
          in_EAX = CONCAT22(extraout_var,
                            (ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10
                            | (ushort)(fVar4 == fVar5) << 0xe);
          if (fVar4 < fVar5) {
            fVar4 = ABS(unaff_EDI - unaff_EBX);
            fVar5 = (float)_DAT_005cbfc0;
            in_EAX = CONCAT22(extraout_var,
                              (ushort)(fVar4 < fVar5) << 8 |
                              (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                              (ushort)(fVar4 == fVar5) << 0xe);
            if (fVar4 < fVar5) {
              fVar4 = ABS(fStack_28 - (float)piVar11);
              fVar5 = (float)_DAT_005cbfb8;
              in_EAX = CONCAT22(extraout_var,
                                (ushort)(fVar4 < fVar5) << 8 |
                                (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                                (ushort)(fVar4 == fVar5) << 0xe);
              if (fVar4 < fVar5) {
                fVar4 = ABS((float)pfVar12 - fVar13);
                fVar13 = (float)_DAT_005cbfc0;
                in_EAX = CONCAT22(extraout_var,
                                  (ushort)(fVar4 < fVar13) << 8 |
                                  (ushort)(NAN(fVar4) || NAN(fVar13)) << 10 |
                                  (ushort)(fVar4 == fVar13) << 0xe);
                if (fVar4 < fVar13) {
                  fVar4 = ABS(fVar14 - (float)fVar10);
                  fVar13 = (float)_DAT_005cbfc0;
                  in_EAX = CONCAT22(extraout_var,
                                    (ushort)(fVar4 < fVar13) << 8 |
                                    (ushort)(NAN(fVar4) || NAN(fVar13)) << 10 |
                                    (ushort)(fVar4 == fVar13) << 0xe);
                  if (fVar4 < fVar13) {
                    fVar4 = ABS(fStack_48 - fStack_38);
                    fVar13 = (float)_DAT_005cbfb0;
                    in_EAX = CONCAT22(extraout_var,
                                      (ushort)(fVar4 < fVar13) << 8 |
                                      (ushort)(NAN(fVar4) || NAN(fVar13)) << 10 |
                                      (ushort)(fVar4 == fVar13) << 0xe);
                    if (fVar4 < fVar13) {
                      fVar4 = ABS(fStack_44 - fStack_34);
                      fVar13 = (float)_DAT_005cbfb0;
                      in_EAX = CONCAT22(extraout_var,
                                        (ushort)(fVar4 < fVar13) << 8 |
                                        (ushort)(NAN(fVar4) || NAN(fVar13)) << 10 |
                                        (ushort)(fVar4 == fVar13) << 0xe);
                      if (fVar4 < fVar13) {
                        fVar4 = ABS(fStack_40 - afStack_30[0]);
                        fVar13 = (float)_DAT_005cbfb0;
                        in_EAX = CONCAT22(extraout_var,
                                          (ushort)(fVar4 < fVar13) << 8 |
                                          (ushort)(NAN(fVar4) || NAN(fVar13)) << 10 |
                                          (ushort)(fVar4 == fVar13) << 0xe);
                        if (fVar4 < fVar13) {
                          fVar3 = ABS(fVar3 - fStack_3c);
                          fVar4 = (float)_DAT_005cbfb0;
                          in_EAX = CONCAT22(extraout_var,
                                            (ushort)(fVar3 < fVar4) << 8 |
                                            (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                            (ushort)(fVar3 == fVar4) << 0xe);
                          if (fVar3 < fVar4) {
                            return CONCAT31((int3)(in_EAX >> 8),1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      }
      iVar9 = iVar9 + 1;
      in_EAX = local_5c;
    } while (iVar9 < (int)local_5c);
  }
  return in_EAX & 0xffffff00;
}

