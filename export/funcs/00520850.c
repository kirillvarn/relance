
/* WARNING: Removing unreachable block (ram,0x00521921) */
/* WARNING: Removing unreachable block (ram,0x005215ee) */
/* WARNING: Removing unreachable block (ram,0x00521607) */
/* WARNING: Removing unreachable block (ram,0x00521612) */
/* WARNING: Removing unreachable block (ram,0x00521650) */
/* WARNING: Removing unreachable block (ram,0x00521655) */
/* WARNING: Removing unreachable block (ram,0x0052165b) */
/* WARNING: Removing unreachable block (ram,0x0052165f) */
/* WARNING: Removing unreachable block (ram,0x0052168f) */
/* WARNING: Removing unreachable block (ram,0x005216bb) */
/* WARNING: Removing unreachable block (ram,0x005216c5) */
/* WARNING: Removing unreachable block (ram,0x005217b3) */
/* WARNING: Removing unreachable block (ram,0x00521776) */
/* WARNING: Removing unreachable block (ram,0x0052177d) */
/* WARNING: Removing unreachable block (ram,0x00521790) */
/* WARNING: Removing unreachable block (ram,0x005217ad) */
/* WARNING: Removing unreachable block (ram,0x005217b5) */
/* WARNING: Removing unreachable block (ram,0x0052182f) */
/* WARNING: Removing unreachable block (ram,0x00521831) */
/* WARNING: Removing unreachable block (ram,0x00521843) */
/* WARNING: Removing unreachable block (ram,0x0052184d) */
/* WARNING: Removing unreachable block (ram,0x00521892) */
/* WARNING: Removing unreachable block (ram,0x0052189c) */
/* WARNING: Removing unreachable block (ram,0x00521907) */
/* WARNING: Removing unreachable block (ram,0x0052190d) */
/* WARNING: Removing unreachable block (ram,0x005219ad) */
/* WARNING: Removing unreachable block (ram,0x005219b3) */
/* WARNING: Removing unreachable block (ram,0x0052193b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520850(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uchar *puVar5;
  char *pcVar6;
  IZone *pIVar7;
  int *piVar8;
  undefined4 uVar9;
  float fVar10;
  int *piVar11;
  void *pvVar12;
  undefined1 *extraout_ECX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  code *pcVar18;
  undefined4 *puVar19;
  char *pcVar20;
  float fVar21;
  int iVar22;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  char *in_stack_000000a0;
  uint in_stack_000000a4;
  uint in_stack_000000a8;
  HANDLE in_stack_000000ac;
  HANDLE in_stack_000000b0;
  LPCVOID in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  char *in_stack_000014c8;
  uint in_stack_000014cc;
  uint in_stack_000014d0;
  HANDLE in_stack_000014d4;
  HANDLE in_stack_000014d8;
  void *in_stack_000014dc;
  void *in_stack_00003b20;
  char *in_stack_00003b30;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  float fStack_4;
  
  fStack_4 = -NAN;
  puStack_8 = &LAB_005c00e3;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x0000009c);
  GetFileSysPath(&stack0x00001604,in_stack_00003b30,*(IFileSystem **)Data_exref);
  *(undefined4 *)(extraout_ECX + 0x20) = 0xfa;
  *(undefined4 *)(extraout_ECX + 0x28) = 0;
  *(undefined4 *)(extraout_ECX + 0xcc) = 0x3f800000;
  extraout_ECX[0xf8] = 0;
  extraout_ECX[0x198] = 0;
  extraout_ECX[0x180] = 0;
  *extraout_ECX = 0;
  if (*(int *)(extraout_ECX + 0x1c) == 0) {
    (**(code **)FDUMP_exref)();
  }
  piVar11 = *(int **)(extraout_ECX + 0x188);
  if ((piVar11 != (int *)0x0) && (*(int *)(extraout_ECX + 0x18c) - (int)piVar11 >> 2 != 0)) {
    piVar8 = *(int **)(extraout_ECX + 0x18c);
    for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
      if (*piVar11 != 0) {
        FUN_0054c600();
        FUN_005b7e1d();
      }
    }
    puVar5 = (uchar *)FUN_00527820();
    IDPMsgHandler::OnReceive
              ((IDPMsgHandler *)(extraout_ECX + 0x184),puVar5,*(ulong *)(extraout_ECX + 0x18c));
    *(uchar **)(extraout_ECX + 0x18c) = puVar5;
  }
  piVar11 = *(int **)(extraout_ECX + 0x224);
  if ((piVar11 != (int *)0x0) && (*(int *)(extraout_ECX + 0x228) - (int)piVar11 >> 2 != 0)) {
    piVar8 = *(int **)(extraout_ECX + 0x228);
    for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
      if (*piVar11 != 0) {
        FUN_00525760();
        FUN_005b7e1d();
      }
    }
    puVar5 = (uchar *)FUN_00527820();
    IDPMsgHandler::OnReceive
              ((IDPMsgHandler *)(extraout_ECX + 0x220),puVar5,*(ulong *)(extraout_ECX + 0x228));
    *(uchar **)(extraout_ECX + 0x228) = puVar5;
  }
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x0000009c,&stack0x00001604,false);
  if (bVar2) {
    extraout_ECX[0x2c] = 1;
    INI_Reader::get_state((INI_Reader *)&stack0x0000009c,(State *)&stack0x00001708);
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000009c);
    pcVar18 = is_value_exref;
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000009c,"TexturePanels");
        if (bVar2) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
          if (bVar2) {
            do {
              cVar3 = (*pcVar18)();
              if (cVar3 != '\0') {
                pcVar6 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000009c);
                GetFullFilename(pcVar6);
                FUN_00425b30();
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
            } while (bVar2);
          }
        }
        else {
          bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000009c,"Field");
          if (bVar2) {
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
            if (bVar2) {
              do {
                cVar3 = (*pcVar18)();
                if (cVar3 == '\0') {
                  cVar3 = (*pcVar18)();
                  if (cVar3 == '\0') {
                    cVar3 = (*pcVar18)();
                    if (cVar3 == '\0') {
                      cVar3 = (*pcVar18)();
                      if (cVar3 == '\0') {
                        cVar3 = (*pcVar18)();
                        if (cVar3 == '\0') {
                          cVar3 = (*pcVar18)();
                          if (cVar3 == '\0') {
                            cVar3 = (*pcVar18)();
                            if (cVar3 == '\0') {
                              cVar3 = (*pcVar18)();
                              if (cVar3 == '\0') {
                                cVar3 = (*pcVar18)();
                                if (cVar3 == '\0') {
                                  cVar3 = (*pcVar18)();
                                  if (cVar3 == '\0') {
                                    cVar3 = (*pcVar18)();
                                    if (cVar3 != '\0') {
                                      extraout_ECX[0xd3] = 1;
                                    }
                                  }
                                  else {
                                    *extraout_ECX = 1;
                                  }
                                }
                                else {
                                  fVar21 = INI_Reader::get_value_float
                                                     ((INI_Reader *)&stack0x0000009c,0);
                                  *(float *)(extraout_ECX + 0xcc) = fVar21;
                                }
                              }
                              else {
                                fVar21 = INI_Reader::get_value_float
                                                   ((INI_Reader *)&stack0x0000009c,0);
                                *(float *)(extraout_ECX + 0x28) = fVar21;
                              }
                            }
                            else {
                              INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                              uVar4 = ftol();
                              extraout_ECX[0xd0] = uVar4;
                              INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,1);
                              uVar4 = ftol();
                              extraout_ECX[0xd1] = uVar4;
                              INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,2);
                              uVar4 = ftol();
                              extraout_ECX[0xd2] = uVar4;
                            }
                          }
                          else {
                            INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                            INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,1);
                            INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,2);
                            FUN_00422b80();
                            *(undefined4 *)(extraout_ECX + 0xc0) = in_stack_00000084;
                            *(undefined4 *)(extraout_ECX + 0xc4) = in_stack_00000088;
                            *(undefined4 *)(extraout_ECX + 200) = in_stack_0000008c;
                          }
                        }
                        else {
                          INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                          INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,1);
                          INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,2);
                          FUN_00422b80();
                          *(undefined4 *)(extraout_ECX + 0xb4) = in_stack_00000060;
                          *(undefined4 *)(extraout_ECX + 0xb8) = in_stack_00000064;
                          *(undefined4 *)(extraout_ECX + 0xbc) = in_stack_00000068;
                        }
                      }
                      else {
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,1);
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,2);
                        FUN_00422b80();
                        *(undefined4 *)(extraout_ECX + 0xb4) = in_stack_00000078;
                        *(undefined4 *)(extraout_ECX + 0xb8) = in_stack_0000007c;
                        *(undefined4 *)(extraout_ECX + 0xbc) = in_stack_00000080;
                        *(undefined4 *)(extraout_ECX + 0xc0) = in_stack_00000078;
                        *(undefined4 *)(extraout_ECX + 0xc4) = in_stack_0000007c;
                        *(undefined4 *)(extraout_ECX + 200) = in_stack_00000080;
                      }
                    }
                    else {
                      INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                      ftol();
                    }
                  }
                  else {
                    INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                    uVar9 = ftol();
                    *(undefined4 *)(extraout_ECX + 0x24) = uVar9;
                  }
                }
                else {
                  INI_Reader::get_value_float((INI_Reader *)&stack0x0000009c,0);
                  uVar9 = ftol();
                  *(undefined4 *)(extraout_ECX + 0x20) = uVar9;
                }
                bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
              } while (bVar2);
            }
          }
          else {
            bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000009c,"Band");
            if (bVar2) {
              extraout_ECX[0xf8] = 1;
              FUN_0054c630();
              FUN_0054d970();
              puStack_8 = (undefined1 *)(uint)(byte)extraout_ECX[0xd0];
              FUN_0054dab0();
            }
            else {
              bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000009c,"ExclusionBand");
              if (bVar2) {
                INI_Reader::get_state((INI_Reader *)&stack0x0000009c,(State *)&stack0x00002f18);
                pvVar12 = operator_new(0x84);
                if (pvVar12 != (void *)0x0) {
                  FUN_0054c580();
                }
                FUN_00537260();
                iVar16 = *(int *)(*(int *)(extraout_ECX + 0x18c) + -4);
                FUN_0054c630();
                INI_Reader::set_state((INI_Reader *)&stack0x0000009c,(State *)&stack0x00002f18);
                bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
                if (bVar2) {
                  do {
                    cVar3 = (*pcVar18)();
                    if (cVar3 != '\0') {
                      pcVar6 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000009c);
                      uVar13 = FUN_00554e90();
                      pIVar7 = Universe::get_zone(uVar13,pcVar6);
                      if (pIVar7 == (IZone *)0x0) {
                        (**(code **)FDUMP_exref)();
                      }
                      else {
                        *(IZone **)(iVar16 + 4) = pIVar7;
                      }
                    }
                    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
                  } while (bVar2);
                }
              }
              else {
                bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000009c,"AsteroidBillboards");
                if (bVar2) {
                  extraout_ECX[0x198] = 1;
                  FUN_00550000();
                  FUN_0054dbe0();
                  FUN_0054fee0();
                }
                else {
                  bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000009c,"DynamicAsteroids");
                  if (bVar2) {
                    INI_Reader::get_state((INI_Reader *)&stack0x0000009c,(State *)&stack0x00002310);
                    pvVar12 = operator_new(0xe8);
                    if (pvVar12 == (void *)0x0) {
                      fStack_4 = 0.0;
                    }
                    else {
                      fStack_4 = (float)FUN_005256a0();
                    }
                    FUN_00537260();
                    piVar11 = *(int **)(*(int *)(extraout_ECX + 0x228) + -4);
                    fVar21 = (_DAT_005c75dc - DAT_00613844) * _DAT_005c75e0 + DAT_00613844;
                    piVar11[0x38] = (int)fVar21;
                    piVar11[0x39] = (int)(_DAT_005c75dc / fVar21);
                    FUN_00525800();
                    INI_Reader::set_state((INI_Reader *)&stack0x0000009c,(State *)&stack0x00002310);
                    uStack_c = (void *)((uint)uStack_c & 0xffffff);
                    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
                    if (bVar2) {
                      do {
                        cVar3 = (*pcVar18)();
                        if (cVar3 != '\0') {
                          pcVar6 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000009c);
                          uVar13 = FUN_00554e90();
                          pIVar7 = Universe::get_zone(uVar13,pcVar6);
                          if (pIVar7 == (IZone *)0x0) {
                            (**(code **)FDUMP_exref)();
                          }
                          else {
                            *piVar11 = (int)pIVar7;
                            uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
                          }
                        }
                        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000009c);
                      } while (bVar2);
                      if (uStack_c._3_1_ == '\0') goto LAB_005211d8;
                    }
                    else {
LAB_005211d8:
                      if (*(int *)(extraout_ECX + 0x1c) != 0) {
                        *piVar11 = *(int *)(extraout_ECX + 0x1c);
                      }
                    }
                    FUN_00422b80();
                    piVar11[0x2f] = in_stack_00000028;
                    piVar11[0x30] = in_stack_0000002c;
                    piVar11[0x31] = in_stack_00000030;
                    piVar8 = (int *)FUN_00522000();
                    piVar11[0x32] = *piVar8;
                    piVar11[0x33] = piVar8[1];
                    piVar11[0x34] = piVar8[2];
                    FUN_00521fa0();
                    FUN_00521fa0();
                    pcVar18 = is_value_exref;
                  }
                }
              }
            }
          }
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000009c);
      } while (bVar2);
    }
    if (*(int *)(extraout_ECX + 4) == 0) {
      (**(code **)FDUMP_exref)();
    }
    else {
      INI_Reader::set_state((INI_Reader *)&stack0x0000009c,(State *)&stack0x00001708);
      CmnAsteroid::CAsteroidField::load
                (*(CAsteroidField **)(extraout_ECX + 4),(INI_Reader *)&stack0x0000009c,
                 *(int *)(extraout_ECX + 0x20));
      uVar9 = ftol();
      *(undefined4 *)(*(int *)(extraout_ECX + 4) + 0x48) = uVar9;
      *(undefined4 *)(*(int *)(extraout_ECX + 4) + 0x4c) = *(undefined4 *)(extraout_ECX + 0x28);
      *(undefined4 *)(extraout_ECX + 0xdc) = *(undefined4 *)(*(int *)(extraout_ECX + 4) + 0x30);
    }
    if (extraout_ECX[0x198] != '\0') {
      fVar21 = *(float *)(extraout_ECX + 0x1ac);
      fStack_4 = fVar21;
      if (*(AsteroidExclusionZoneMgr **)(extraout_ECX + 0xdc) == (AsteroidExclusionZoneMgr *)0x0) {
        *(undefined4 *)(extraout_ECX + 0x1b8) = 0x3f800000;
      }
      else {
        fVar10 = (float)Exclusion::AsteroidExclusionZoneMgr::get_max_billboard_count
                                  (*(AsteroidExclusionZoneMgr **)(extraout_ECX + 0xdc));
        if ((int)fVar21 < (int)fVar10) {
          fVar21 = fVar10;
          fStack_4 = fVar10;
        }
        iVar16 = *(int *)(extraout_ECX + 0x1ac);
        *(float *)(extraout_ECX + 0x1ac) = fVar21;
        *(float *)(extraout_ECX + 0x1b8) = (float)iVar16 / (float)(int)fStack_4;
        Exclusion::AsteroidExclusionZoneMgr::normalize_billboard_density
                  (*(AsteroidExclusionZoneMgr **)(extraout_ECX + 0xdc),(int)fVar21);
      }
    }
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  iVar16 = 0;
  if (extraout_ECX[0xf8] != '\0') {
    *(undefined4 *)(extraout_ECX + 0x100) = *(undefined4 *)(extraout_ECX + 0x1c);
    FUN_0054c8b0();
    iVar16 = *(int *)(extraout_ECX + 0x154);
  }
  *(undefined4 *)(extraout_ECX + 0x194) = 0;
  if ((*(int *)(extraout_ECX + 0x188) != 0) &&
     (*(int *)(extraout_ECX + 0x18c) - *(int *)(extraout_ECX + 0x188) >> 2 != 0)) {
    piVar11 = *(int **)(extraout_ECX + 0x188);
    piVar8 = *(int **)(extraout_ECX + 0x18c);
    extraout_ECX[0x180] = 1;
    for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
      FUN_0054d970();
      puStack_8 = (undefined1 *)(uint)(byte)extraout_ECX[0xd0];
      FUN_0054dab0();
      FUN_0054c8b0();
      *(int *)(*piVar11 + 0x5c) = iVar16;
      iVar16 = iVar16 + *(int *)(*piVar11 + 0x58);
      *(int *)(extraout_ECX + 0x194) = *(int *)(extraout_ECX + 0x194) + *(int *)(*piVar11 + 0x58);
    }
  }
  if (extraout_ECX[0x198] != '\0') {
    *(undefined4 *)(extraout_ECX + 0x1b4) = *(undefined4 *)(extraout_ECX + 0x1c);
    FUN_0054de10();
    fStack_4 = (float)*(int *)(extraout_ECX + 0x24) * *(float *)(extraout_ECX + 0x230);
    FUN_0054feb0();
  }
  if (*(int *)(extraout_ECX + 0xdc) != 0) {
    fVar21 = (float)*(int *)(extraout_ECX + 0x24) * *(float *)(extraout_ECX + 0x230) * _DAT_005c9804
    ;
    *(float *)(*(int *)(extraout_ECX + 0xdc) + 0x14) = fVar21 * fVar21;
    *(undefined4 *)(*(int *)(extraout_ECX + 0xdc) + 0x18) = 0x461c4000;
  }
  piVar11 = operator_new(0x18);
  *piVar11 = (int)piVar11;
  piVar11[1] = (int)piVar11;
  fStack_4 = 0.0;
  if (*(int *)(extraout_ECX + 4) != 0) {
    puVar17 = *(undefined4 **)(*(int *)(extraout_ECX + 4) + 4);
    puVar19 = (undefined4 *)*puVar17;
    if (*(int **)(extraout_ECX + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xa0) + 8))();
    }
    for (; puVar19 != puVar17; puVar19 = (undefined4 *)*puVar19) {
      iVar16 = (**(code **)(**(int **)Engine_exref + 0x48))();
      if (iVar16 < 0) {
        ID_String::get_string((ID_String *)(puVar19[2] + 8));
        (**(code **)FDUMP_exref)();
      }
    }
  }
  if (*(int *)(extraout_ECX + 0xa0) == 0) {
    (**(code **)FDUMP_exref)();
  }
  pvVar12 = operator_new(0);
  if (pvVar12 == (void *)0x0) {
    pvVar12 = (void *)0x0;
  }
  *(void **)(extraout_ECX + 0xa4) = pvVar12;
  pvVar12 = operator_new((int)fStack_4 * 2);
  *(void **)(extraout_ECX + 0xa8) = pvVar12;
  iVar16 = 0;
  iVar22 = 0;
  for (piVar8 = (int *)*piVar11; piVar8 != piVar11; piVar8 = (int *)*piVar8) {
    puVar17 = (undefined4 *)piVar8[2];
    puVar19 = (undefined4 *)(iVar16 * 0x2c + *(int *)(extraout_ECX + 0xa4));
    for (uVar13 = (uint)(piVar8[3] * 0x2c) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
      *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
      puVar17 = (undefined4 *)((int)puVar17 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
    uVar13 = 0;
    if (piVar8[5] != 0) {
      iVar14 = iVar22 * 2;
      do {
        *(short *)(iVar14 + *(int *)(extraout_ECX + 0xa8)) =
             *(short *)(piVar8[4] + uVar13 * 2) + (short)iVar16;
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 2;
      } while (uVar13 < (uint)piVar8[5]);
    }
    iVar22 = iVar22 + piVar8[5];
    iVar16 = iVar16 + piVar8[3];
  }
  FUN_0051feb0();
  *(float *)(extraout_ECX + 0xac) = fStack_4;
  piVar8 = (int *)*piVar11;
  while (piVar8 != piVar11) {
    piVar1 = (int *)*piVar8;
    *(int *)piVar8[1] = *piVar8;
    *(int *)(*piVar8 + 4) = piVar8[1];
    FUN_005b7e1d();
    piVar8[2] = 0;
    piVar8[3] = 0;
    FUN_005b7e1d();
    piVar8[4] = 0;
    piVar8[5] = 0;
    FUN_005b7e1d();
    piVar8 = piVar1;
  }
  FUN_005b7e1d();
  uVar13 = *(uint *)npos_exref;
  pcVar6 = in_stack_000014c8;
  if (((in_stack_000014c8 != (char *)0x0) && (cVar3 = in_stack_000014c8[-1], cVar3 != '\0')) &&
     (cVar3 != -1)) {
    in_stack_000014c8[-1] = cVar3 + -1;
    pcVar6 = (char *)0x0;
    in_stack_000014cc = 0;
    in_stack_000014d0 = 0;
    uVar15 = 0xffffffff;
    pcVar20 = in_stack_000014c8;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      cVar3 = *pcVar20;
      pcVar20 = pcVar20 + 1;
    } while (cVar3 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000014c4,
               in_stack_000014c8,~uVar15 - 1);
  }
  if (in_stack_000014cc < uVar13) {
    uVar13 = in_stack_000014cc;
  }
  if (uVar13 != 0) {
    memmove(pcVar6,pcVar6 + uVar13,in_stack_000014cc - uVar13);
    uVar13 = in_stack_000014cc - uVar13;
    if (0xfffffffd < uVar13) {
      std::_Xlen();
    }
    if (((pcVar6 == (char *)0x0) || (cVar3 = pcVar6[-1], cVar3 == '\0')) || (cVar3 == -1)) {
      if (uVar13 != 0) {
        if (in_stack_000014d0 < uVar13) goto LAB_00521c10;
        goto LAB_00521c25;
      }
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
    }
    else if (uVar13 == 0) {
      pcVar6[-1] = cVar3 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000014c4
                 ,false);
    }
    else {
LAB_00521c10:
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000014c4
                 ,uVar13);
LAB_00521c25:
      pcVar6[uVar13] = '\0';
    }
  }
  if (in_stack_000014d4 != (HANDLE)0xffffffff) {
    if (in_stack_000014d8 != (HANDLE)0x0) {
      if (in_stack_000014dc != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000014dc);
        in_stack_000014dc = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_000014d8);
    }
    CloseHandle(in_stack_000014d4);
  }
  if (in_stack_000014dc != (void *)0x0) {
    free(in_stack_000014dc);
  }
  if (pcVar6 != (char *)0x0) {
    cVar3 = pcVar6[-1];
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005b7e1d();
    }
    else {
      pcVar6[-1] = cVar3 + -1;
    }
  }
  pcVar6 = in_stack_000000a0;
  uVar13 = *(uint *)npos_exref;
  if (((in_stack_000000a0 != (char *)0x0) && (in_stack_000000a0[-1] != '\0')) &&
     (in_stack_000000a0[-1] != -1)) {
    puVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Refcnt
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &stack0x0000009c,in_stack_000000a0);
    if ((*puVar5 == '\0') ||
       (puVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Refcnt
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &stack0x0000009c,in_stack_000000a0), *puVar5 == 0xff)) {
      FUN_00442da0();
    }
    else {
      puVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Refcnt
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &stack0x0000009c,in_stack_000000a0);
      *puVar5 = *puVar5 + 0xff;
    }
    in_stack_000000a0 = (char *)0x0;
    in_stack_000000a4 = 0;
    in_stack_000000a8 = 0;
    uVar15 = std::char_traits<char>::length(pcVar6);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000009c,
               pcVar6,uVar15);
  }
  if (in_stack_000000a4 < uVar13) {
    uVar13 = in_stack_000000a4;
  }
  if (uVar13 == 0) goto LAB_00521eb8;
  memmove(in_stack_000000a0,in_stack_000000a0 + uVar13,in_stack_000000a4 - uVar13);
  uVar13 = in_stack_000000a4 - uVar13;
  uVar15 = FUN_00450870();
  if (uVar15 < 3) {
    uVar15 = 1;
  }
  else {
    uVar15 = uVar15 - 2;
  }
  if (uVar15 < uVar13) {
    std::_Xlen();
  }
  if (((in_stack_000000a0 == (char *)0x0) || (cVar3 = in_stack_000000a0[-1], cVar3 == '\0')) ||
     (cVar3 == -1)) {
    if (uVar13 == 0) {
      if (in_stack_000000a0 != (char *)0x0) {
        uStack_c = (void *)((uint)uStack_c & 0xffffff);
        in_stack_000000a4 = 0;
        std::char_traits<char>::assign(in_stack_000000a0,(char *)((int)&uStack_c + 3));
      }
      goto LAB_00521eb8;
    }
    if (in_stack_000000a8 < uVar13) goto LAB_00521e91;
  }
  else {
    if (uVar13 == 0) {
      in_stack_000000a0[-1] = cVar3 + -1;
      in_stack_000000a0 = (char *)0x0;
      in_stack_000000a4 = 0;
      in_stack_000000a8 = 0;
      goto LAB_00521eb8;
    }
LAB_00521e91:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000009c,
               uVar13);
  }
  in_stack_000000a0[uVar13] = '\0';
  in_stack_000000a4 = uVar13;
LAB_00521eb8:
  if (in_stack_000000ac != (HANDLE)0xffffffff) {
    if (in_stack_000000b0 != (HANDLE)0x0) {
      if (in_stack_000000b4 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000000b4);
        in_stack_000000b4 = (LPCVOID)0x0;
        in_stack_000000b8 = 0;
      }
      CloseHandle(in_stack_000000b0);
      in_stack_000000b0 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_000000ac);
    in_stack_000000ac = (HANDLE)0xffffffff;
  }
  if (in_stack_000000b4 != (void *)0x0) {
    free(in_stack_000000b4);
    in_stack_000000b4 = (void *)0x0;
    in_stack_000000b8 = 0;
  }
  in_stack_000000bc = 0;
  if (in_stack_000000a0 != (char *)0x0) {
    cVar3 = in_stack_000000a0[-1];
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      in_stack_000000a0[-1] = cVar3 + -1;
      ExceptionList = in_stack_00003b20;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_00003b20;
  return;
}

