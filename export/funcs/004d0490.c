
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d0490(CSolar *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,int *param_7,int param_8,float param_9,float param_10,float param_11,
                 int *param_12,float param_13,float param_14,float param_15,float param_16,
                 int *param_17,float param_18,float param_19,float param_20,BaseWatcher *param_21,
                 undefined4 param_22,CShip *param_23,undefined4 param_24,int param_25)

{
  CShip *this;
  Watchable *pWVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  float *pfVar8;
  IObjRW *pIVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  ID_String *pIVar13;
  CSolar *pCVar14;
  CSolar *pCVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int extraout_ECX;
  BaseWatcher *pBVar20;
  int iVar21;
  ushort uVar22;
  float10 fVar23;
  float fVar24;
  undefined4 *puVar25;
  CSolar *in_stack_00000078;
  float in_stack_0000007c;
  float in_stack_00000080;
  float in_stack_00000084;
  float in_stack_00000098;
  float in_stack_0000009c;
  float in_stack_000000a0;
  int in_stack_000000b8;
  int in_stack_000000d4;
  int in_stack_000000f0;
  int in_stack_0000010c;
  int in_stack_00000128;
  int in_stack_00000144;
  int in_stack_00000160;
  int in_stack_0000018c;
  int in_stack_000001a8;
  int in_stack_000001c4;
  undefined4 in_stack_000001f4;
  int *in_stack_000001fc;
  void *in_stack_00002200;
  undefined4 uStack_c;
  undefined *local_8;
  undefined3 uStack_4;
  char cStack_1;
  
  uStack_4 = 0xffffff;
  cStack_1 = 0xff;
  local_8 = &DAT_005bdf10;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  local_8 = (undefined *)extraout_ECX;
  cVar5 = FUN_0042d740();
  if (cVar5 == '\0') {
    FUN_004d47a0();
    piVar7 = (int *)FUN_0054baf0();
    if ((((piVar7 != (int *)0x0) && (piVar7 != (int *)0xfffffff4)) &&
        (this = (CShip *)piVar7[4], this != (CShip *)0x0)) &&
       ((*(uint *)(this + 0x4c) & 0x503) == 0x503)) {
      param_7 = piVar7;
      param_23 = this;
      pfVar8 = (float *)(**(code **)*piVar7)();
      _DAT_00674904 = *pfVar8;
      _DAT_00674908 = pfVar8[1];
      _DAT_0067490c = pfVar8[2];
      DAT_00674900 = 0;
      DAT_006748fc = '\0';
      param_8 = 0;
      param_2 = _DAT_00674904;
      param_3 = _DAT_00674908;
      param_4 = _DAT_0067490c;
      if ((*(int *)(extraout_ECX + 0x438) == 0) || (*(int *)(extraout_ECX + 0x438) == 4)) {
        pIVar9 = CShip::get_target(this);
        if (pIVar9 != (IObjRW *)0x0) {
          iVar10 = (**(code **)(*(int *)pIVar9 + 0x150))();
          if ((iVar10 == 0) || (((byte)*(undefined4 *)(iVar10 + 0x4c) & 3) != 3)) {
            iVar10 = 0;
          }
          DAT_00674900 = *(undefined4 *)(iVar10 + 0xb0);
        }
        iVar10 = FUN_004c4fb0();
        if (((0 < iVar10) && (iVar10 = FUN_004c4ff0(), iVar10 != 0)) &&
           (piVar11 = (int *)FUN_004c5110(), piVar11 != (int *)0x0)) {
          param_8 = (**(code **)(*piVar11 + 0x20))();
        }
      }
      fVar24 = DAT_00612434;
      if (*(CEScanner **)(extraout_ECX + 0x440) != (CEScanner *)0x0) {
        fVar24 = CEScanner::GetRadarRange(*(CEScanner **)(extraout_ECX + 0x440));
      }
      cStack_1 = fVar24 < DAT_00612434;
      param_5 = 1e+30;
      if ((bool)cStack_1) {
        param_5 = fVar24;
      }
      param_16 = fVar24 * fVar24;
      iVar10 = FUN_004e5470();
      if (iVar10 == 2) {
        if (((piVar7 != (int *)0xfffffff4) && (iVar10 = piVar7[4], iVar10 != 0)) &&
           ((*(uint *)(iVar10 + 0x4c) & 0x503) == 0x503)) {
          bVar6 = SinglePlayer();
          if (bVar6) {
            if ((((*(int *)(iVar10 + 0x1b8) != 0) &&
                 (piVar7 = (int *)(*(int *)(iVar10 + 0x1b8) + -8), piVar7 != (int *)0x0)) &&
                (iVar10 = (**(code **)(*piVar7 + 0x150))(), iVar10 != 0)) &&
               ((*(uint *)(iVar10 + 0x4c) & 0x503) == 0x503)) {
              (**(code **)(*piVar7 + 0x20))();
              FUN_005416c0();
              FUN_004d0250();
              iVar21 = 0;
              if (*(int *)(iVar10 + 0x1d4) == 0) {
                param_5 = 0.0;
              }
              else {
                param_5 = (float)(*(int *)(iVar10 + 0x1d8) - *(int *)(iVar10 + 0x1d4) >> 3);
              }
              if (0 < (int)param_5) {
                do {
                  iVar12 = *(int *)(*(int *)(iVar10 + 0x1d4) + iVar21 * 8);
                  if ((iVar12 != 0) && (piVar7 = (int *)(iVar12 + -8), piVar7 != (int *)0x0)) {
                    (**(code **)(*piVar7 + 0x20))();
                    piVar7 = (int *)FUN_005416c0();
                    if ((piVar7 != (int *)0x0) &&
                       ((iVar12 = (**(code **)(*piVar7 + 0x150))(), iVar12 != 0 &&
                        ((*(uint *)(iVar12 + 0x4c) & 0x503) == 0x503)))) {
                      FUN_004d0250();
                    }
                  }
                  iVar21 = iVar21 + 1;
                } while (iVar21 < (int)param_5);
              }
            }
          }
          else {
            iVar21 = FUN_004c5890();
            if ((((*(int *)(iVar10 + 0x1b8) != 0) && (*(int *)(iVar10 + 0x1b8) != 8)) ||
                ((iVar21 != 0 && (iVar12 = FUN_004c58b0(), iVar12 == *(int *)(iVar10 + 0xb0))))) &&
               (iVar10 = 0, 0 < iVar21)) {
              do {
                iVar12 = FUN_004c58b0();
                if (((iVar12 != 0) && (piVar7 = (int *)FUN_005416c0(), piVar7 != (int *)0x0)) &&
                   ((iVar12 = (**(code **)(*piVar7 + 0x150))(), iVar12 != 0 &&
                    ((*(uint *)(iVar12 + 0x4c) & 0x503) == 0x503)))) {
                  FUN_004d0250();
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar21);
            }
          }
        }
      }
      else {
        iVar10 = *(int *)(extraout_ECX + 0x438);
        if (((iVar10 == 0) || (iVar10 == 1)) || (iVar10 == 4)) {
          for (piVar7 = (int *)FUN_00540fc0(); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[5]) {
            iVar10 = (**(code **)(*piVar7 + 0x150))();
            if ((((iVar10 != 0) && ((*(uint *)(iVar10 + 0x4c) & 0x503) == 0x503)) &&
                ((*(float *)(iVar10 + 0x140) < _DAT_005c75dc && (*(int *)(iVar10 + 0xb0) != param_8)
                 ))) && (((FUN_00422b80(), piVar7 != param_7 &&
                          (param_9 * param_9 + param_11 * param_11 + param_10 * param_10 < param_16)
                          ) || ((*(char *)(iVar10 + 0x2bd) != '\0' && (piVar7 != param_7)))))) {
              iVar21 = FUN_0053a960();
              if (*(char *)(iVar10 + 0x2bd) == '\0') {
                param_6 = *(float *)(iVar10 + 0x104);
                iVar12 = Reputation::Vibe::GetAffiliation((int *)&param_6,(uint *)&param_1,false);
                if ((iVar12 != 0) || (param_1 == (CSolar *)0xffffffff)) goto LAB_004d0e7b;
              }
              uVar17 = *(uint *)(iVar10 + 0xe0);
              if (*(char *)(iVar10 + 0x2bd) == '\0') {
                if ((uVar17 & 0x420000) == 0) {
                  if ((uVar17 & 0x100000) == 0) {
                    if ((uVar17 & 0x200000) == 0) {
                      if ((((*(uint *)(iVar10 + 0x4c) & 0x103) == 0x103) &&
                          (*(int *)(iVar10 + 0x88) != 0)) &&
                         (*(char *)(*(int *)(iVar10 + 0x88) + 0x80) != '\0')) {
                        if (iVar21 == -1) {
                          FUN_004cf030();
                          FUN_004d4740();
                          if (in_stack_00000128 != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x00000128;
                            goto LAB_004d0e73;
                          }
                        }
                        else if ((*(int *)((int)local_8 + 0x438) == 1) ||
                                (*(int *)((int)local_8 + 0x438) == 4)) {
                          FUN_004cf030();
                          FUN_004d4740();
                          if (in_stack_00000160 != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x00000160;
                            goto LAB_004d0e73;
                          }
                        }
                      }
                      else if (iVar21 == -1) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (in_stack_000000b8 != 0) {
                          pBVar20 = (BaseWatcher *)&stack0x000000b8;
                          goto LAB_004d0e73;
                        }
                      }
                      else if ((*(int *)((int)local_8 + 0x438) == 1) ||
                              (*(int *)((int)local_8 + 0x438) == 4)) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (param_25 != 0) {
                          pBVar20 = (BaseWatcher *)&param_25;
                          goto LAB_004d0e73;
                        }
                      }
                    }
                    else if (iVar21 == -1) {
                      FUN_004cf030();
                      FUN_004d4740();
                      if (in_stack_00000144 != 0) {
                        pBVar20 = (BaseWatcher *)&stack0x00000144;
                        goto LAB_004d0e73;
                      }
                    }
                    else if ((*(int *)((int)local_8 + 0x438) == 1) ||
                            (*(int *)((int)local_8 + 0x438) == 4)) {
                      FUN_004cf030();
                      FUN_004d4740();
                      if (in_stack_000000f0 != 0) {
                        pBVar20 = (BaseWatcher *)&stack0x000000f0;
                        goto LAB_004d0e73;
                      }
                    }
                  }
                  else if (iVar21 == -1) {
                    FUN_004cf030();
                    FUN_004d4740();
                    if (in_stack_000000d4 != 0) {
                      pBVar20 = (BaseWatcher *)&stack0x000000d4;
                      goto LAB_004d0e73;
                    }
                  }
                  else if ((*(int *)((int)local_8 + 0x438) == 1) ||
                          (*(int *)((int)local_8 + 0x438) == 4)) {
                    FUN_004cf030();
                    FUN_004d4740();
                    if (in_stack_0000010c != 0) {
                      pBVar20 = (BaseWatcher *)&stack0x0000010c;
                      goto LAB_004d0e73;
                    }
                  }
                }
                else if (iVar21 == -1) {
                  FUN_004cf030();
                  FUN_004d4740();
                  if (in_stack_000001c4 != 0) {
                    pBVar20 = (BaseWatcher *)&stack0x000001c4;
                    goto LAB_004d0e73;
                  }
                }
                else if ((*(int *)((int)local_8 + 0x438) == 1) ||
                        (*(int *)((int)local_8 + 0x438) == 4)) {
                  FUN_004cf030();
                  FUN_004d4740();
                  if (in_stack_000001a8 != 0) {
                    pBVar20 = (BaseWatcher *)&stack0x000001a8;
                    goto LAB_004d0e73;
                  }
                }
              }
              else if ((*(int *)((int)local_8 + 0x438) == 0) ||
                      (*(int *)((int)local_8 + 0x438) == 4)) {
                if (*(int *)(iVar10 + 0x1b4) != 0) {
                  if (((param_7 == (int *)0xfffffff4) || (iVar21 = param_7[4], iVar21 == 0)) ||
                     ((*(uint *)(iVar21 + 0x4c) & 0x503) != 0x503)) {
                    iVar21 = 0;
                  }
                  if (*(int *)(iVar21 + 0x1b4) == *(int *)(iVar10 + 0x1b4)) {
                    FUN_004cf030();
                    FUN_004d4740();
                    if (in_stack_00000080 != 0.0) {
                      pBVar20 = (BaseWatcher *)&stack0x00000080;
                      goto LAB_004d0e73;
                    }
                    goto LAB_004d0e7b;
                  }
                }
                FUN_004cf030();
                FUN_004d4740();
                if (in_stack_0000018c != 0) {
                  pBVar20 = (BaseWatcher *)&stack0x0000018c;
LAB_004d0e73:
                  BaseWatcher::set_pointer(pBVar20,(Watchable *)0x0);
                }
              }
            }
LAB_004d0e7b:
          }
        }
        if ((*(int *)((int)local_8 + 0x438) == 3) || (*(int *)((int)local_8 + 0x438) == 4)) {
          param_1 = (CSolar *)0x7;
          for (piVar7 = (int *)FUN_00540fc0(); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[5]) {
            iVar10 = (**(code **)(*piVar7 + 0x20))();
            if (iVar10 != param_8) {
              if (cStack_1 == '\0') {
                (**(code **)*piVar7)();
                FUN_00422b80();
                fVar24 = param_15 * param_15 + param_14 * param_14 + param_13 * param_13;
                uVar22 = (ushort)(fVar24 < _DAT_005d7968) << 8 |
                         (ushort)(fVar24 == _DAT_005d7968) << 0xe;
              }
              else {
                piVar11 = (int *)(**(code **)(*piVar7 + 0x150))();
                fVar23 = (float10)(**(code **)(*piVar11 + 100))();
                param_6 = (float)fVar23;
                FUN_00422b80();
                fVar24 = ABS(SQRT(param_11 * param_11 + param_10 * param_10 + param_9 * param_9) -
                             param_6);
                uVar22 = (ushort)(fVar24 < param_5) << 8 | (ushort)(fVar24 == param_5) << 0xe;
              }
              if (uVar22 != 0) {
                FUN_004cf030();
                FUN_004d4740();
                if (param_25 != 0) {
                  BaseWatcher::set_pointer((BaseWatcher *)&param_25,(Watchable *)0x0);
                }
              }
            }
          }
        }
        iVar10 = *(int *)((int)local_8 + 0x438);
        if (((iVar10 == 0) || (iVar10 == 2)) || ((iVar10 == 4 || (iVar10 == 3)))) {
          piVar7 = (int *)FUN_00540a00();
          while (piVar7 != (int *)0x0) {
            if (((piVar7 == (int *)0xfffffff4) ||
                (pCVar15 = (CSolar *)piVar7[4], pCVar15 == (CSolar *)0x0)) ||
               ((*(uint *)(pCVar15 + 0x4c) & 0x103) != 0x103)) {
              pCVar15 = (CSolar *)0x0;
LAB_004d1084:
              pCVar14 = (CSolar *)0x0;
LAB_004d10a2:
              if (*(int *)(pCVar14 + 0xb0) != param_8) {
                uStack_c = (void *)((uint)uStack_c & 0xffffff);
                if (cStack_1 != '\0') {
                  piVar7 = (int *)(**(code **)(*piVar7 + 0x150))();
                  fVar23 = (float10)(**(code **)(*piVar7 + 100))();
                  param_1 = (CSolar *)(float)fVar23;
                  FUN_00422b80();
                  if (param_5 < ABS(SQRT(param_15 * param_15 +
                                         param_14 * param_14 + param_13 * param_13) - (float)param_1
                                   )) goto LAB_004d16db;
                }
                param_6 = (float)FUN_0053a960();
                if (((param_6 == -NAN) && (FUN_00422b80(), *(int *)((int)local_8 + 0x438) == 0)) &&
                   (param_11 * param_11 + param_10 * param_10 + param_9 * param_9 < _DAT_005d7968))
                {
                  uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
                }
                pCVar14 = *(CSolar **)(pCVar15 + 0xe0);
                param_1 = pCVar14;
                if (((uint)pCVar14 & 0x600de3) == 0) {
                  FUN_00422b80();
                  if (param_20 * param_20 + param_19 * param_19 + param_18 * param_18 <
                      _DAT_005d7968) {
                    if ((((*(uint *)(pCVar15 + 0x4c) & 0x103) == 0x103) &&
                        (*(int *)(pCVar15 + 0x88) != 0)) &&
                       ((*(char *)(*(int *)(pCVar15 + 0x88) + 0x80) != '\0' &&
                        (iVar10 = *(int *)((int)local_8 + 0x438), iVar10 != 3)))) {
                      if (param_6 == -NAN) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (in_stack_000000f0 != 0) {
                          pBVar20 = (BaseWatcher *)&stack0x000000f0;
LAB_004d16d3:
                          BaseWatcher::set_pointer(pBVar20,(Watchable *)0x0);
                        }
                      }
                      else if ((iVar10 == 2) || (iVar10 == 4)) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (in_stack_00000144 != 0) {
                          pBVar20 = (BaseWatcher *)&stack0x00000144;
                          goto LAB_004d16d3;
                        }
                      }
                    }
                    else if (((uint)pCVar14 & 0x9010) == 0) {
                      if (((((uint)pCVar14 & 0x2000) != 0) &&
                          (cVar5 = FUN_004d4c70(), cVar5 == '\0')) &&
                         ((*(int *)((int)local_8 + 0x438) == 2 ||
                          ((*(int *)((int)local_8 + 0x438) == 4 || (uStack_c._3_1_ != '\0')))))) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (in_stack_000000d4 != 0) {
                          pBVar20 = (BaseWatcher *)&stack0x000000d4;
                          goto LAB_004d16d3;
                        }
                      }
                    }
                    else {
                      cVar5 = FUN_004d4c70();
                      if ((cVar5 == '\0') &&
                         (((*(int *)((int)local_8 + 0x438) == 2 ||
                           (*(int *)((int)local_8 + 0x438) == 4)) || (uStack_c._3_1_ != '\0')))) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (in_stack_0000010c != 0) {
                          pBVar20 = (BaseWatcher *)&stack0x0000010c;
                          goto LAB_004d16d3;
                        }
                      }
                    }
                  }
                }
                else {
                  cVar5 = FUN_004d4c70();
                  if (cVar5 == '\0') {
                    if ((char)pCVar14 < '\0') {
                      FUN_00422b80();
                      if ((in_stack_000000a0 * in_stack_000000a0 +
                           in_stack_0000009c * in_stack_0000009c +
                           in_stack_00000098 * in_stack_00000098 < _DAT_005d7968) &&
                         (((*(int *)((int)local_8 + 0x438) == 2 ||
                           (*(int *)((int)local_8 + 0x438) == 4)) || (uStack_c._3_1_ != '\0')))) {
                        FUN_004cf030();
                        FUN_004d4740();
                        if (param_25 != 0) {
                          pBVar20 = (BaseWatcher *)&param_25;
                          goto LAB_004d16d3;
                        }
                      }
                    }
                    else if (((uint)pCVar14 & 3) == 0) {
                      if (((uint)pCVar14 & 0x200000) == 0) {
                        if (((uint)pCVar14 & 0xc40) == 0) {
                          if (((uStack_c._3_1_ != '\0') || (*(int *)((int)local_8 + 0x438) == 2)) ||
                             (*(int *)((int)local_8 + 0x438) == 4)) {
                            FUN_004cf030();
                            FUN_004d4740();
                            if (in_stack_00000128 != 0) {
                              pBVar20 = (BaseWatcher *)&stack0x00000128;
                              goto LAB_004d16d3;
                            }
                          }
                        }
                        else if (((*(int *)((int)local_8 + 0x438) == 2) ||
                                 (*(int *)((int)local_8 + 0x438) == 4)) || (uStack_c._3_1_ != '\0'))
                        {
                          FUN_004cf030();
                          FUN_004d4740();
                          if (in_stack_00000160 != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x00000160;
                            goto LAB_004d16d3;
                          }
                        }
                      }
                    }
                    else if (((*(int *)((int)local_8 + 0x438) == 2) ||
                             (*(int *)((int)local_8 + 0x438) == 4)) || (uStack_c._3_1_ != '\0')) {
                      FUN_004cf030();
                      FUN_004d4740();
                      if (in_stack_000000b8 != 0) {
                        pBVar20 = (BaseWatcher *)&stack0x000000b8;
                        goto LAB_004d16d3;
                      }
                    }
                  }
                }
              }
            }
            else if (*(float *)(pCVar15 + 0x140) < _DAT_005c75dc) {
              if ((*(uint *)(pCVar15 + 0x4c) & 0x303) != 0x303) goto LAB_004d1084;
              param_1 = pCVar15;
              pIVar13 = CSolar::GetParentNickname(pCVar15);
              bVar6 = ID_String::IsEmpty(pIVar13);
              pCVar14 = param_1;
              if (!bVar6) goto LAB_004d16db;
              goto LAB_004d10a2;
            }
LAB_004d16db:
            piVar7 = (int *)FUN_00540a20();
          }
          piVar7 = (int *)(**(code **)(*(int *)PTR_DAT_00613ed0 + 0xc))();
          in_stack_00000078 = param_1;
          in_stack_00000080 = param_3;
          in_stack_000001f4 = 0x800;
          in_stack_0000007c = param_2;
          in_stack_00000084 = 14000.0;
          iVar10 = (**(code **)(*piVar7 + 0x1c))();
          if ((iVar10 != 0) && (param_7 = (int *)0x0, in_stack_000001fc != (int *)0x0)) {
            puVar25 = (undefined4 *)&stack0x00000200;
            do {
              if (param_7 < in_stack_000001fc) {
                piVar7 = (int *)*puVar25;
              }
              else {
                piVar7 = (int *)0x0;
              }
              cVar5 = FUN_00540990();
              if ((cVar5 == '\0') && (iVar10 = (**(code **)(*piVar7 + 0x20))(), iVar10 != param_8))
              {
                pCVar15 = (CSolar *)(**(code **)(*piVar7 + 0x150))();
                if ((pCVar15 == (CSolar *)0x0) || ((*(uint *)(pCVar15 + 0x4c) & 0x103) != 0x103)) {
                  pCVar15 = (CSolar *)0x0;
                }
                else if (_DAT_005c75dc <= *(float *)(pCVar15 + 0x140)) goto LAB_004d1ebd;
                iVar10 = (**(code **)(*piVar7 + 0x150))();
                if ((iVar10 != 0) && (((byte)*(undefined4 *)(iVar10 + 0x4c) & 3) == 3)) {
                  if ((pCVar15 != (CSolar *)0x0) && ((*(uint *)(pCVar15 + 0x4c) & 0x303) == 0x303))
                  {
                    pIVar13 = CSolar::GetParentNickname(pCVar15);
                    bVar6 = ID_String::IsEmpty(pIVar13);
                    if (!bVar6) goto LAB_004d1ebd;
                  }
                  bVar6 = false;
                  uStack_c = (void *)((uint)uStack_c & 0xffffff);
                  if (cStack_1 != '\0') {
                    piVar7 = (int *)(**(code **)(*piVar7 + 0x150))();
                    fVar23 = (float10)(**(code **)(*piVar7 + 100))();
                    if ((float10)param_5 <
                        ABS(SQRT(((float10)in_stack_00000084 - (float10)param_4) *
                                 ((float10)in_stack_00000084 - (float10)param_4) +
                                 ((float10)in_stack_00000080 - (float10)param_3) *
                                 ((float10)in_stack_00000080 - (float10)param_3) +
                                 ((float10)in_stack_0000007c - (float10)param_2) *
                                 ((float10)in_stack_0000007c - (float10)param_2)) - fVar23))
                    goto LAB_004d1ebd;
                  }
                  iVar21 = FUN_0053a960();
                  if (iVar21 == -1) {
                    fVar24 = *(float *)(iVar10 + 0x34) - param_4;
                    fVar3 = *(float *)(iVar10 + 0x30) - param_3;
                    fVar2 = *(float *)(iVar10 + 0x2c) - param_2;
                    if ((*(int *)((int)local_8 + 0x438) == 0) &&
                       (fVar24 * fVar24 + fVar3 * fVar3 + fVar2 * fVar2 < _DAT_005d7968)) {
                      bVar6 = true;
                      uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
                    }
                  }
                  param_1 = *(CSolar **)(iVar10 + 0xe0);
                  if (((uint)param_1 & 0x600de3) == 0) {
                    fVar24 = *(float *)(iVar10 + 0x34) - param_4;
                    fVar3 = *(float *)(iVar10 + 0x30) - param_3;
                    fVar2 = *(float *)(iVar10 + 0x2c) - param_2;
                    if (fVar24 * fVar24 + fVar3 * fVar3 + fVar2 * fVar2 < _DAT_005d7968) {
                      if (((((*(uint *)(iVar10 + 0x4c) & 0x103) == 0x103) &&
                           (*(int *)(iVar10 + 0x88) != 0)) &&
                          (*(char *)(*(int *)(iVar10 + 0x88) + 0x80) != '\0')) &&
                         (iVar10 = *(int *)((int)local_8 + 0x438), iVar10 != 3)) {
                        if (iVar21 == -1) {
                          FUN_004cf030();
                          iVar10 = *(int *)(extraout_ECX + 0x414);
                          iVar21 = FUN_004d48f0();
                          *(int *)(iVar10 + 4) = iVar21;
                          **(int **)(iVar21 + 4) = iVar21;
                          FUN_004d49b0();
                          *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                          if (in_stack_000000f0 != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x000000f0;
LAB_004d1eb5:
                            BaseWatcher::set_pointer(pBVar20,(Watchable *)0x0);
                          }
                        }
                        else if ((iVar10 == 2) || (iVar10 == 4)) {
                          FUN_004cf030();
                          iVar10 = *(int *)(extraout_ECX + 0x414);
                          iVar21 = FUN_004d48f0();
                          *(int *)(iVar10 + 4) = iVar21;
                          **(int **)(iVar21 + 4) = iVar21;
                          FUN_004d49b0();
                          *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                          if (in_stack_00000144 != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x00000144;
                            goto LAB_004d1eb5;
                          }
                        }
                      }
                      else if (((uint)param_1 & 0x9010) == 0) {
                        if (((((uint)param_1 & 0x2000) != 0) &&
                            (cVar5 = FUN_004d4c70(), cVar5 == '\0')) &&
                           ((*(int *)((int)local_8 + 0x438) == 3 ||
                            ((*(int *)((int)local_8 + 0x438) == 4 || (bVar6)))))) {
                          FUN_004cf030();
                          iVar10 = *(int *)(extraout_ECX + 0x414);
                          iVar21 = FUN_004d48f0();
                          *(int *)(iVar10 + 4) = iVar21;
                          **(int **)(iVar21 + 4) = iVar21;
                          FUN_004d49b0();
                          *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                          if (in_stack_000000d4 != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x000000d4;
                            goto LAB_004d1eb5;
                          }
                        }
                      }
                      else {
                        cVar5 = FUN_004d4c70();
                        if ((cVar5 == '\0') &&
                           (((*(int *)((int)local_8 + 0x438) == 2 ||
                             (*(int *)((int)local_8 + 0x438) == 4)) || (bVar6)))) {
                          FUN_004cf030();
                          iVar10 = *(int *)(extraout_ECX + 0x414);
                          iVar21 = FUN_004d48f0();
                          *(int *)(iVar10 + 4) = iVar21;
                          **(int **)(iVar21 + 4) = iVar21;
                          FUN_004d49b0();
                          *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                          if (in_stack_0000010c != 0) {
                            pBVar20 = (BaseWatcher *)&stack0x0000010c;
                            goto LAB_004d1eb5;
                          }
                        }
                      }
                    }
                  }
                  else {
                    cVar5 = FUN_004d4c70();
                    if (cVar5 == '\0') {
                      if ((char)param_1 < '\0') {
                        fVar24 = *(float *)(iVar10 + 0x34) - param_4;
                        fVar3 = *(float *)(iVar10 + 0x30) - param_3;
                        fVar2 = *(float *)(iVar10 + 0x2c) - param_2;
                        if ((fVar24 * fVar24 + fVar3 * fVar3 + fVar2 * fVar2 < _DAT_005d7968) &&
                           (((*(int *)((int)local_8 + 0x438) == 2 ||
                             (*(int *)((int)local_8 + 0x438) == 4)) || (uStack_c._3_1_ != '\0')))) {
                          FUN_004cf030();
                          iVar10 = *(int *)(extraout_ECX + 0x414);
                          iVar21 = FUN_004d48f0();
                          *(int *)(iVar10 + 4) = iVar21;
                          **(int **)(iVar21 + 4) = iVar21;
                          FUN_004d49b0();
                          *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                          if (param_25 != 0) {
                            pBVar20 = (BaseWatcher *)&param_25;
                            goto LAB_004d1eb5;
                          }
                        }
                      }
                      else if (((uint)param_1 & 3) == 0) {
                        if (((uint)param_1 & 0x200000) == 0) {
                          if (((uint)param_1 & 0xc40) == 0) {
                            if (((uStack_c._3_1_ != '\0') || (*(int *)((int)local_8 + 0x438) == 2))
                               || (*(int *)((int)local_8 + 0x438) == 4)) {
                              FUN_004cf030();
                              iVar10 = *(int *)(extraout_ECX + 0x414);
                              iVar21 = FUN_004d48f0();
                              *(int *)(iVar10 + 4) = iVar21;
                              **(int **)(iVar21 + 4) = iVar21;
                              FUN_004d49b0();
                              *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                              if (in_stack_00000128 != 0) {
                                pBVar20 = (BaseWatcher *)&stack0x00000128;
                                goto LAB_004d1eb5;
                              }
                            }
                          }
                          else if (((*(int *)((int)local_8 + 0x438) == 2) ||
                                   (*(int *)((int)local_8 + 0x438) == 4)) ||
                                  (uStack_c._3_1_ != '\0')) {
                            FUN_004cf030();
                            iVar10 = *(int *)(extraout_ECX + 0x414);
                            iVar21 = FUN_004d48f0();
                            *(int *)(iVar10 + 4) = iVar21;
                            **(int **)(iVar21 + 4) = iVar21;
                            FUN_004d49b0();
                            *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                            if (in_stack_00000160 != 0) {
                              pBVar20 = (BaseWatcher *)&stack0x00000160;
                              goto LAB_004d1eb5;
                            }
                          }
                        }
                      }
                      else if (((*(int *)((int)local_8 + 0x438) == 2) ||
                               (*(int *)((int)local_8 + 0x438) == 4)) || (uStack_c._3_1_ != '\0')) {
                        FUN_004cf030();
                        iVar10 = *(int *)(extraout_ECX + 0x414);
                        iVar21 = FUN_004d48f0();
                        *(int *)(iVar10 + 4) = iVar21;
                        **(int **)(iVar21 + 4) = iVar21;
                        FUN_004d49b0();
                        *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                        if (in_stack_000000b8 != 0) {
                          pBVar20 = (BaseWatcher *)&stack0x000000b8;
                          goto LAB_004d1eb5;
                        }
                      }
                    }
                  }
                }
              }
LAB_004d1ebd:
              param_7 = (int *)((int)param_7 + 1);
              puVar25 = puVar25 + 1;
            } while (param_7 < in_stack_000001fc);
          }
        }
        if ((*(int *)((int)local_8 + 0x438) == 0) || (*(int *)((int)local_8 + 0x438) == 4)) {
          iVar10 = FUN_004c4690();
          iVar21 = 0;
          if (0 < iVar10) {
            do {
              iVar12 = FUN_004c46a0();
              if ((iVar12 != 0) && (iVar16 = FUN_004c4830(), *(int *)(iVar12 + 0xc) == iVar16)) {
                FUN_004cf030();
                iVar10 = *(int *)(extraout_ECX + 0x414);
                iVar21 = FUN_004d48f0();
                *(int *)(iVar10 + 4) = iVar21;
                **(int **)(iVar21 + 4) = iVar21;
                FUN_004d49b0();
                *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                if (param_25 != 0) {
                  BaseWatcher::set_pointer((BaseWatcher *)&param_25,(Watchable *)0x0);
                }
                break;
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar10);
          }
          iVar10 = FUN_004c4fb0();
          if (1 < iVar10) {
            iVar10 = 1;
          }
          uVar17 = FUN_004c4830();
          param_1 = (CSolar *)Universe::get_system(uVar17);
          iVar21 = 0;
          if (0 < iVar10) {
            do {
              FUN_004c4ff0();
              iVar12 = FUN_004c5110();
              if (iVar12 == 0) {
                cVar5 = FUN_004c52d0();
                if ((cVar5 != '\0') &&
                   (fVar24 = (float)(*(code *)**(undefined4 **)param_1)(), param_6 == fVar24)) {
                  FUN_004cf030();
                  iVar12 = *(int *)(extraout_ECX + 0x414);
                  iVar16 = FUN_004d48f0();
                  *(int *)(iVar12 + 4) = iVar16;
                  **(int **)(iVar16 + 4) = iVar16;
                  FUN_004d49b0();
                  *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                  if (in_stack_000000b8 != 0) {
                    pBVar20 = (BaseWatcher *)&stack0x000000b8;
                    goto LAB_004d20ed;
                  }
                }
              }
              else {
                FUN_004cf030();
                iVar12 = *(int *)(extraout_ECX + 0x414);
                iVar16 = FUN_004d48f0();
                *(int *)(iVar12 + 4) = iVar16;
                **(int **)(iVar16 + 4) = iVar16;
                FUN_004d49b0();
                *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
                if (param_25 != 0) {
                  pBVar20 = (BaseWatcher *)&param_25;
LAB_004d20ed:
                  BaseWatcher::set_pointer(pBVar20,(Watchable *)0x0);
                }
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar10);
          }
        }
      }
      piVar7 = (int *)*DAT_0066d33c;
      cStack_1 = '\0';
      if (piVar7 != DAT_0066d33c) {
        do {
          if ((piVar7[2] == 0) || (piVar11 = (int *)(piVar7[2] + -8), piVar11 == (int *)0x0)) {
            cStack_1 = '\x01';
          }
          else {
            iVar10 = (**(code **)(*piVar11 + 0x150))();
            puVar4 = local_8;
            if ((((iVar10 != 0) && (((byte)*(undefined4 *)(iVar10 + 0x4c) & 3) == 3)) &&
                (*(int *)(iVar10 + 0xb0) != param_8)) && (iVar10 = FUN_004d3fd0(), -1 < iVar10)) {
              iVar21 = *(int *)((int)puVar4 + 0x438);
              if (iVar21 == 3) {
                bVar6 = iVar10 == 0xb;
LAB_004d21c8:
                if (!bVar6) goto LAB_004d22d0;
              }
              else if (iVar21 == 1) {
                if ((((iVar10 != 0) && (iVar10 != 5)) && (iVar10 != 8)) && (iVar10 != 9)) {
                  bVar6 = iVar10 == 10;
                  goto LAB_004d21c8;
                }
              }
              else if ((((iVar21 == 2) && (iVar10 != 1)) &&
                       ((iVar10 != 2 && ((iVar10 != 6 && (iVar10 != 7)))))) && (iVar10 != 0xc)) {
                bVar6 = iVar10 == 0xd;
                goto LAB_004d21c8;
              }
              if (piVar7[2] == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = piVar7[2] + -8;
              }
              for (puVar25 = (undefined4 *)**(undefined4 **)((int)local_8 + 0x414);
                  puVar25 != *(undefined4 **)((int)local_8 + 0x414);
                  puVar25 = (undefined4 *)*puVar25) {
                if (puVar25[3] == 0) {
                  iVar21 = 0;
                }
                else {
                  iVar21 = puVar25[3] + -8;
                }
                if (iVar21 == iVar10) {
                  *(undefined1 *)(puVar25 + 8) = 1;
                  goto LAB_004d22d0;
                }
              }
              piVar19 = (int *)FUN_004cf030();
              iVar10 = *(int *)(extraout_ECX + 0x414);
              piVar11 = *(int **)(iVar10 + 4);
              piVar18 = operator_new(0x24);
              *piVar18 = iVar10;
              if (piVar11 == (int *)0x0) {
                piVar11 = piVar18;
              }
              piVar18[1] = (int)piVar11;
              *(int **)(iVar10 + 4) = piVar18;
              param_12 = piVar18 + 2;
              *(int **)piVar18[1] = piVar18;
              param_17 = param_12;
              if (param_12 != (int *)0x0) {
                *param_12 = *piVar19;
                FUN_004d4a40();
                piVar18[5] = piVar19[3];
                piVar18[6] = piVar19[4];
                piVar18[7] = piVar19[5];
                *(char *)(piVar18 + 8) = (char)piVar19[6];
              }
              *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
              if (param_25 != 0) {
                BaseWatcher::set_pointer((BaseWatcher *)&param_25,(Watchable *)0x0);
              }
              *(undefined1 *)(*(int *)(*(int *)((int)local_8 + 0x414) + 4) + 0x20) = 1;
            }
          }
LAB_004d22d0:
          piVar7 = (int *)*piVar7;
        } while (piVar7 != DAT_0066d33c);
        if (cStack_1 != '\0') {
          FUN_0045a990();
        }
      }
      iVar10 = FUN_004e5470();
      if ((((iVar10 != 2) &&
           ((*(int *)((int)local_8 + 0x438) == 0 || (*(int *)((int)local_8 + 0x438) == 4)))) &&
          (pIVar9 = CShip::get_target(param_23), pIVar9 != (IObjRW *)0x0)) && (DAT_006748fc == '\0')
         ) {
        (**(code **)(*(int *)pIVar9 + 0x150))();
        iVar10 = FUN_004d3fd0();
        if ((-1 < iVar10) && (iVar10 = FUN_005416c0(), iVar10 != 0)) {
          piVar11 = (int *)FUN_004cf030();
          iVar10 = *(int *)(extraout_ECX + 0x414);
          piVar7 = *(int **)(iVar10 + 4);
          piVar19 = operator_new(0x24);
          *piVar19 = iVar10;
          if (piVar7 == (int *)0x0) {
            piVar7 = piVar19;
          }
          piVar19[1] = (int)piVar7;
          *(int **)(iVar10 + 4) = piVar19;
          param_12 = piVar19 + 2;
          *(int **)piVar19[1] = piVar19;
          param_17 = param_12;
          if (param_12 != (int *)0x0) {
            param_21 = (BaseWatcher *)(piVar19 + 3);
            *param_12 = *piVar11;
            *(undefined4 *)param_21 = 0;
            piVar19[4] = 0;
            pWVar1 = (Watchable *)piVar11[1];
            if (((pWVar1 != (Watchable *)0x0) && (pWVar1 != (Watchable *)0x8)) &&
               (pWVar1 != (Watchable *)0x0)) {
              BaseWatcher::set_pointer(param_21,pWVar1);
            }
            piVar19[5] = piVar11[3];
            piVar19[6] = piVar11[4];
            piVar19[7] = piVar11[5];
            *(char *)(piVar19 + 8) = (char)piVar11[6];
          }
          *(int *)(extraout_ECX + 0x418) = *(int *)(extraout_ECX + 0x418) + 1;
          FUN_004d4920();
          FUN_004d0470();
        }
      }
      iVar10 = FUN_004e5470();
      if (iVar10 != 2) {
        FUN_004d4340();
      }
    }
  }
  ExceptionList = in_stack_00002200;
  return;
}

