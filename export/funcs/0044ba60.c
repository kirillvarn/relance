
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0044ba60(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined2 uVar9;
  int iVar10;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar11;
  uint local_14;
  
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x1338));
  if (*(char *)(param_1 + 0x1338) == '\0') {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar10 = 0;
    if (*(int *)(iVar1 + 0x138) == 0) {
      local_14 = 0;
    }
    else {
      uVar5 = *(int *)(iVar1 + 0x13c) - *(int *)(iVar1 + 0x138) >> 2;
      local_14 = uVar5;
    }
    if (0 < (int)local_14) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(iVar1 + 0x138) + iVar10 * 4);
        iVar6 = stricmp(param_2,(char *)*puVar2);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 0x1338) = 1;
          DAT_0066d359 = 1;
          *(undefined4 *)(param_1 + 0x1344) = 0;
          *(undefined4 *)(param_1 + 0x133c) = 0x40000000;
          if (DAT_00668ac0 == (int *)0x0) {
            DAT_00668ac0 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_00668ac0 + 0x50))(DAT_00668ac0,param_1 + 0x1348,puVar2 + 4);
          *(float *)(param_1 + 0x1358) = (float)puVar2[1];
          *(undefined4 *)(param_1 + 0x135c) = puVar2[2];
          *(undefined4 *)(param_1 + 0x1360) = puVar2[3];
          *(undefined4 *)(param_1 + 0x1364) = puVar2[0xd];
          *(undefined4 *)(param_1 + 0x1368) = puVar2[0xe];
          *(undefined4 *)(param_1 + 0x136c) = puVar2[0xf];
          uVar7 = (**(code **)(**(int **)(param_1 + 0x500) + 0x10))(*(int **)(param_1 + 0x500));
          if (DAT_00668ac0 == (int *)0x0) {
            DAT_00668ac0 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_00668ac0 + 0x50))(DAT_00668ac0,(float *)(param_1 + 0x1370),uVar7);
          pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0x500) + 0xc))
                                      (*(int **)(param_1 + 0x500));
          *(float *)(param_1 + 0x1380) = *pfVar8;
          *(float *)(param_1 + 0x1384) = pfVar8[1];
          *(float *)(param_1 + 5000) = pfVar8[2];
          fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x18))
                                      (*(int **)(param_1 + 0x500));
          *(float *)(param_1 + 0x138c) = (float)fVar11;
          fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x20))
                                      (*(int **)(param_1 + 0x500));
          *(float *)(param_1 + 0x1390) = (float)fVar11;
          fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x500) + 0x24))
                                      (*(int **)(param_1 + 0x500));
          *(float *)(param_1 + 0x1394) = (float)fVar11;
          *(undefined4 *)(param_1 + 0x1398) = unaff_EDI;
          *(undefined4 *)(param_1 + 0x139c) = unaff_ESI;
          *(undefined4 *)(param_1 + 0x13a0) = unaff_EBP;
          fVar3 = ABS(*(float *)(param_1 + 0x1358) - *(float *)(param_1 + 0x1380));
          fVar4 = (float)_DAT_005cbfc0;
          uVar9 = (undefined2)((uint)unaff_EDI >> 0x10);
          uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                 (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                 (ushort)(fVar3 == fVar4) << 0xe);
          if (fVar3 < fVar4) {
            fVar3 = ABS(*(float *)(param_1 + 0x135c) - *(float *)(param_1 + 0x1384));
            fVar4 = (float)_DAT_005cbfc0;
            uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                   (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                   (ushort)(fVar3 == fVar4) << 0xe);
            if (fVar3 < fVar4) {
              fVar3 = ABS(*(float *)(param_1 + 0x1360) - *(float *)(param_1 + 5000));
              fVar4 = (float)_DAT_005cbfc0;
              uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                     (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                     (ushort)(fVar3 == fVar4) << 0xe);
              if (fVar3 < fVar4) {
                fVar3 = ABS(*(float *)(param_1 + 0x1364) - *(float *)(param_1 + 0x138c));
                fVar4 = (float)_DAT_005cbfb8;
                uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                       (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                       (ushort)(fVar3 == fVar4) << 0xe);
                if (fVar3 < fVar4) {
                  fVar3 = ABS(*(float *)(param_1 + 0x1368) - *(float *)(param_1 + 0x1390));
                  fVar4 = (float)_DAT_005cbfc0;
                  uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                         (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                         (ushort)(fVar3 == fVar4) << 0xe);
                  if (fVar3 < fVar4) {
                    fVar3 = ABS(*(float *)(param_1 + 0x136c) - (float)fVar11);
                    fVar4 = (float)_DAT_005cbfc0;
                    uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                           (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                           (ushort)(fVar3 == fVar4) << 0xe);
                    if (fVar3 < fVar4) {
                      fVar3 = ABS(*(float *)(param_1 + 0x1374) - *(float *)(param_1 + 0x134c));
                      fVar4 = (float)_DAT_005cbfb0;
                      uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                             (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                             (ushort)(fVar3 == fVar4) << 0xe);
                      if (fVar3 < fVar4) {
                        fVar3 = ABS(*(float *)(param_1 + 0x1378) - *(float *)(param_1 + 0x1350));
                        fVar4 = (float)_DAT_005cbfb0;
                        uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                               (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                               (ushort)(fVar3 == fVar4) << 0xe);
                        if (fVar3 < fVar4) {
                          fVar3 = ABS(*(float *)(param_1 + 0x137c) - *(float *)(param_1 + 0x1354));
                          fVar4 = (float)_DAT_005cbfb0;
                          uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                                 (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                                 (ushort)(fVar3 == fVar4) << 0xe);
                          if (fVar3 < fVar4) {
                            fVar3 = ABS(*(float *)(param_1 + 0x1370) - *(float *)(param_1 + 0x1348))
                            ;
                            fVar4 = (float)_DAT_005cbfb0;
                            uVar7 = CONCAT22(uVar9,(ushort)(fVar3 < fVar4) << 8 |
                                                   (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                                                   (ushort)(fVar3 == fVar4) << 0xe);
                            if (fVar3 < fVar4) {
                              *(undefined1 *)(param_1 + 0x1338) = 0;
                              DAT_0066d359 = 0;
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
          return CONCAT31((int3)((uint)uVar7 >> 8),*(undefined1 *)(param_1 + 0x1338));
        }
        iVar10 = iVar10 + 1;
        uVar5 = local_14;
      } while (iVar10 < (int)local_14);
    }
  }
  return uVar5 & 0xffffff00;
}

