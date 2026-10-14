
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00518f20(int param_1,float param_2,char param_3)

{
  float fVar1;
  IBehaviorManager *this;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  IObjRW *pIVar7;
  IBehaviorManager **ppIVar8;
  int iVar9;
  int *piVar10;
  IBehaviorManager *unaff_EBX;
  IBehaviorManager ***pppIVar11;
  int ********ppppppppiVar12;
  undefined4 *puVar13;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  int *******pppppppiVar17;
  IBehaviorManager **ppIStack_1c8;
  IBehaviorManager **ppIStack_1c4;
  IBehaviorManager **ppIStack_1c0;
  IBehaviorManager *pIStack_1bc;
  float *pfStack_1b8;
  IBehaviorManager *pIStack_1b4;
  IBehaviorManager **ppIStack_1b0;
  IBehaviorManager **ppIStack_1ac;
  IBehaviorManager **ppIStack_1a8;
  IBehaviorManager **ppIStack_1a4;
  IBehaviorManager *pIStack_1a0;
  int *********pppppppppiStack_19c;
  int *******pppppppiStack_198;
  IBehaviorManager *pIStack_194;
  IBehaviorManager *pIStack_190;
  IBehaviorManager *pIStack_18c;
  IBehaviorManager *pIStack_188;
  IBehaviorManager *pIStack_184;
  IBehaviorManager *pIStack_180;
  float fVar18;
  IBehaviorManager *pIVar19;
  IBehaviorManager *pIStack_164;
  IBehaviorManager *pIStack_160;
  IBehaviorManager *apIStack_15c [2];
  IBehaviorManager *pIStack_154;
  IBehaviorManager *pIStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  IBehaviorManager *pIStack_140;
  IBehaviorManager *pIStack_13c;
  IBehaviorManager *pIStack_138;
  IBehaviorManager *pIStack_134;
  float fStack_130;
  IBehaviorManager *pIStack_12c;
  IBehaviorManager **ppIStack_128;
  float fStack_124;
  IBehaviorManager *pIStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  float afStack_114 [4];
  int iStack_104;
  undefined4 *puStack_100;
  float fStack_fc;
  float fStack_f8;
  int *******pppppppiStack_f4;
  IBehaviorManager *apIStack_f0 [2];
  int ********appppppppiStack_e8 [2];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float afStack_d8 [2];
  int *******pppppppiStack_d0;
  float fStack_cc;
  float fStack_c8;
  int *******pppppppiStack_c4;
  IBehaviorManager **ppIStack_c0;
  IBehaviorManager *apIStack_bc [2];
  int ******ppppppiStack_b4;
  IBehaviorManager *pIStack_b0;
  undefined1 auStack_ac [4];
  IBehaviorManager aIStack_a8 [4];
  float fStack_a4;
  IBehaviorManager aIStack_9c [16];
  IBehaviorManager *apIStack_8c [3];
  IBehaviorManager aIStack_80 [4];
  IBehaviorManager *pIStack_7c;
  int iStack_78;
  IBehaviorManager *pIStack_74;
  IBehaviorManager *pIStack_70;
  IBehaviorManager aIStack_68 [12];
  undefined1 auStack_5c [24];
  float afStack_44 [8];
  undefined1 auStack_24 [16];
  float fStack_14;
  int *piStack_10;
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0xc0) != 0) && (uVar3 = 0, *(int *)(param_1 + 0xc0) != 8)) {
    iVar6 = *(int *)(param_1 + 0xc0);
    uVar3 = 0;
    if ((iVar6 != 0) && ((uVar3 = 0, iVar6 != 8 && (uVar3 = 0, iVar6 != -4)))) {
      uVar3 = 0;
      if ((*(int *)(iVar6 + 8) != 0) &&
         (uVar3 = *(uint *)(*(int *)(iVar6 + 8) + 0x4c) & 0x503, uVar3 == 0x503)) {
        if (*(int *)(param_1 + 0xc0) == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)(*(int *)(param_1 + 0xc0) + -8);
        }
        puStack_100 = (undefined4 *)(**(code **)(*piVar10 + 0xc))();
        iVar6 = *(int *)(param_1 + 0xc0);
        ppppppppiVar12 = &pppppppiStack_f4;
        puVar4 = puStack_100;
        for (iVar9 = 9; ppppppppiVar12 = ppppppppiVar12 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppppppppiVar12 = (int *******)*puVar4;
          puVar4 = puVar4 + 1;
        }
        if (iVar6 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)(iVar6 + -8);
        }
        puVar4 = (undefined4 *)(**(code **)*puVar4)();
        uStack_11c = *puVar4;
        uStack_118 = puVar4[1];
        afStack_114[0] = (float)puVar4[2];
        if (*(int *)(param_1 + 0xc0) == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)(*(int *)(param_1 + 0xc0) + -8);
        }
        pfVar5 = (float *)(**(code **)(*piVar10 + 4))();
        pIStack_140 = (IBehaviorManager *)
                      SQRT(pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
        if (_DAT_005c75dc < (float)pIStack_140) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(*(int *)(param_1 + 0xc0) + -8);
          }
          pIStack_180 = (IBehaviorManager *)0x519045;
          (**(code **)(*piVar10 + 4))();
          pIStack_180 = (IBehaviorManager *)0x51904e;
          fVar15 = (float10)FUN_00410190();
          pIStack_164 = (IBehaviorManager *)
                        (float)((float10)(float)pIStack_164 * ((float10)_DAT_005c75dc / fVar15));
          pIStack_160 = (IBehaviorManager *)
                        (float)((float10)(float)pIStack_160 * ((float10)_DAT_005c75dc / fVar15));
          if (*(int *)(param_1 + 0xc0) == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(*(int *)(param_1 + 0xc0) + -8);
          }
          pIStack_180 = (IBehaviorManager *)0x51908a;
          iVar6 = (**(code **)(*piVar10 + 0xc))();
          pIStack_180 = (IBehaviorManager *)-*(float *)(iVar6 + 0x14);
          pIStack_184 = (IBehaviorManager *)-*(float *)(iVar6 + 8);
          pIStack_188 = (IBehaviorManager *)0x5190b0;
          FUN_00422b80();
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          pIVar7 = (IObjRW *)0x0;
        }
        else {
          pIVar7 = (IObjRW *)(*(int *)(param_1 + 0xc0) + -8);
        }
        pIStack_180 = (IBehaviorManager *)0x5190c8;
        apIStack_15c[1] = GetBehaviorManager(pIVar7);
        if (param_3 != '\0') {
          *(IBehaviorManager **)(param_1 + 0x1f8) = pIStack_140;
          piVar10 = (int *)0x0;
          *(IBehaviorManager **)(param_1 + 0x1ec) = pIStack_140;
          *(undefined4 *)(param_1 + 0x1fc) = 0;
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          *(undefined4 *)(param_1 + 0x1a4) = 0;
          *(undefined4 *)(param_1 + 0x1a8) = 0xbf800000;
          if (*(int *)(param_1 + 0xc0) != 0) {
            piVar10 = (int *)(*(int *)(param_1 + 0xc0) + -8);
          }
          puVar4 = (undefined4 *)(**(code **)(*piVar10 + 0xc))();
          pIVar19 = apIStack_15c[1];
          puVar13 = (undefined4 *)(param_1 + 0x158);
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar13 = puVar13 + 1;
          }
          pIStack_164 = *(IBehaviorManager **)(param_1 + 0x15c);
          pIStack_160 = *(IBehaviorManager **)(param_1 + 0x168);
          apIStack_15c[0] = *(IBehaviorManager **)(param_1 + 0x174);
          *(IBehaviorManager **)(param_1 + 0x204) = pIStack_164;
          *(IBehaviorManager **)(param_1 + 0x208) = pIStack_160;
          *(IBehaviorManager **)(param_1 + 0x20c) = apIStack_15c[0];
          if (apIStack_15c[1] != (IBehaviorManager *)0x0) {
            pIStack_180 = (IBehaviorManager *)0x519174;
            IBehaviorManager::set_camera_mode(apIStack_15c[1],1);
            pIStack_154 = *(IBehaviorManager **)(param_1 + 0x15c);
            pIStack_150 = *(IBehaviorManager **)(param_1 + 0x168);
            fStack_14c = *(float *)(param_1 + 0x174);
            pIStack_180 = (IBehaviorManager *)0x519196;
            IBehaviorManager::submit_camera_up(pIVar19,(Vector *)&pIStack_154);
          }
        }
        if (param_2 <= _DAT_005d7e84) {
          fVar18 = (float)_DAT_005c8ba8;
        }
        else {
          fVar18 = ((float)pIStack_140 - *(float *)(param_1 + 0x1ec)) / param_2;
        }
        fVar1 = ((float)pIStack_140 - *(float *)(param_1 + 0x1f8)) * param_2 +
                *(float *)(param_1 + 0x1fc);
        *(float *)(param_1 + 0x1fc) = fVar1;
        if (fVar1 < _DAT_005c7474) {
          *(undefined4 *)(param_1 + 0x1fc) = 0;
        }
        pIVar19 = (IBehaviorManager *)
                  ((*(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x1fc) * _DAT_005d1fe4 +
                   _DAT_005c75dc) * *(float *)(param_1 + 500));
        if (((float)_DAT_005d5138 < *(float *)(param_1 + 0x1fc)) || ((float)pIVar19 < fVar18)) {
          fVar18 = (float)pIVar19 * param_2 + *(float *)(param_1 + 0x1f8);
          *(float *)(param_1 + 0x1f8) = fVar18;
          fVar1 = *(float *)(param_1 + 0x1fc) * _DAT_005d845c;
          pIVar19 = (IBehaviorManager *)(fVar1 * fVar1 * (float)pIStack_140 + (float)pIStack_140);
          if ((float)pIVar19 < fVar18) {
            *(IBehaviorManager **)(param_1 + 0x1f8) = pIVar19;
          }
        }
        else {
          *(IBehaviorManager **)(param_1 + 0x1f8) = pIStack_140;
        }
        fStack_14c = (float)pIStack_140 * *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1fc);
        puStack_100 = *(undefined4 **)(param_1 + 0x100);
        fStack_fc = *(float *)(param_1 + 0x104);
        fStack_f8 = *(float *)(param_1 + 0x108);
        pIStack_180 = (IBehaviorManager *)(param_1 + 0x140);
        pIStack_184 = aIStack_9c;
        pIStack_154 = (IBehaviorManager *)0x0;
        pIStack_150 = (IBehaviorManager *)0x0;
        pIStack_188 = (IBehaviorManager *)0x5192eb;
        FUN_00423b30();
        pIStack_188 = (IBehaviorManager *)&pIStack_154;
        pIStack_18c = aIStack_9c;
        pIStack_190 = (IBehaviorManager *)&pppppppiStack_d0;
        pIStack_194 = (IBehaviorManager *)0x519305;
        FUN_00423b30();
        puStack_100 = (undefined4 *)((float)pppppppiStack_d0 + (float)puStack_100);
        fStack_fc = fStack_fc + fStack_cc;
        fStack_f8 = fStack_f8 + fStack_c8;
        if (((*(char *)(param_1 + 0x13c) != '\0') && (apIStack_15c[1] != (IBehaviorManager *)0x0))
           && (bVar2 = IBehaviorManager::get_camera_level_status(apIStack_15c[1]),
              this = apIStack_15c[1], bVar2)) {
          bVar2 = IBehaviorManager::get_user_turning_input_state(apIStack_15c[1]);
          if (bVar2) {
            pIStack_154 = *(IBehaviorManager **)(param_1 + 0x15c);
            pIStack_150 = *(IBehaviorManager **)(param_1 + 0x168);
            fStack_14c = *(float *)(param_1 + 0x174);
            pIStack_180 = (IBehaviorManager *)0x5193a7;
            IBehaviorManager::submit_camera_up(this,(Vector *)&pIStack_154);
            pIStack_180 = (IBehaviorManager *)&pppppppiStack_f4;
            pIStack_184 = aIStack_68;
            pIStack_188 = (IBehaviorManager *)0x5193c3;
            FUN_00516fe0();
            if (DAT_00675220 == (int *******)0x0) {
              DAT_00675220 = (int *******)FUN_005b73e0();
            }
            pIStack_180 = (IBehaviorManager *)&pppppppiStack_d0;
            pIStack_188 = (IBehaviorManager *)0x5193ea;
            pIStack_184 = (IBehaviorManager *)DAT_00675220;
            (*(code *)(*DAT_00675220)[0x14])();
            pIStack_160 = *(IBehaviorManager **)(param_1 + 0x15c);
            apIStack_15c[0] = *(IBehaviorManager **)(param_1 + 0x168);
            pIStack_188 = (IBehaviorManager *)&pIStack_160;
            pIStack_18c = (IBehaviorManager *)&puStack_100;
            apIStack_15c[1] = *(IBehaviorManager **)(param_1 + 0x174);
            pIStack_190 = (IBehaviorManager *)&pIStack_74;
            pIStack_194 = (IBehaviorManager *)0x519422;
            ppIVar8 = (IBehaviorManager **)FUN_00516fe0();
            if (DAT_00675220 == (int *******)0x0) {
              pIStack_188 = (IBehaviorManager *)0x519435;
              DAT_00675220 = (int *******)FUN_005b73e0();
            }
            pIStack_18c = aIStack_a8;
            pIStack_194 = (IBehaviorManager *)0x519449;
            pIStack_190 = (IBehaviorManager *)DAT_00675220;
            pIStack_188 = (IBehaviorManager *)ppIVar8;
            (*(code *)(*DAT_00675220)[0x14])();
            apIStack_15c[0] = (IBehaviorManager *)(fStack_14 * *(float *)(param_1 + 0x200));
            if (DAT_00675220 == (int *******)0x0) {
              pIStack_194 = (IBehaviorManager *)0x519468;
              DAT_00675220 = (int *******)FUN_005b73e0();
            }
            pIStack_194 = apIStack_15c[0];
            pppppppiStack_198 = &ppppppiStack_b4;
            pppppppppiStack_19c = appppppppiStack_e8;
            pIStack_1a0 = (IBehaviorManager *)&pIStack_12c;
            ppIStack_1a8 = (IBehaviorManager **)0x51948d;
            ppIStack_1a4 = (IBehaviorManager **)DAT_00675220;
            (*(code *)(*DAT_00675220)[0x16])();
            apIStack_15c[0] = pIStack_140;
            pIStack_150 = pIStack_134;
            apIStack_15c[1] = pIStack_13c;
            pIStack_154 = pIStack_138;
            if (DAT_00675220 == (int *******)0x0) {
              ppIStack_1a8 = (IBehaviorManager **)0x5194bb;
              DAT_00675220 = (int *******)FUN_005b73e0();
            }
            ppIStack_1a8 = apIStack_15c;
            ppIStack_1ac = apIStack_bc + 1;
            pIStack_1b4 = (IBehaviorManager *)0x5194d3;
            ppIStack_1b0 = (IBehaviorManager **)DAT_00675220;
            (*(code *)(*DAT_00675220)[0x15])();
            pIStack_164 = apIStack_8c[1];
            pIStack_160 = pIStack_7c;
            ppIVar8 = apIStack_8c;
            ppppppppiVar12 = &pppppppiStack_f4;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *ppppppppiVar12 = (int *******)*ppIVar8;
              ppIVar8 = ppIVar8 + 1;
              ppppppppiVar12 = ppppppppiVar12 + 1;
            }
            *(IBehaviorManager **)(param_1 + 0x204) = apIStack_8c[1];
            apIStack_15c[0] = pIStack_70;
            *(IBehaviorManager **)(param_1 + 0x208) = pIStack_7c;
            *(IBehaviorManager **)(param_1 + 0x20c) = pIStack_70;
          }
          else {
            pIStack_180 = (IBehaviorManager *)0x51952d;
            IBehaviorManager::get_ship_up_direction(this);
            iVar6 = *(int *)(param_1 + 0xc0);
            if ((((iVar6 != 0) && (iVar6 != 8)) &&
                ((*(int *)(iVar6 + 0x150) == 2 || (*(int *)(iVar6 + 0x150) == 3)))) &&
               ((((float)pIStack_164 != _DAT_005c7474 || ((float)pIStack_160 != _DAT_005c75dc)) ||
                ((float)apIStack_15c[0] != _DAT_005c7474)))) {
              pIStack_164 = (IBehaviorManager *)0x0;
              pIStack_160 = (IBehaviorManager *)0x3f800000;
              apIStack_15c[0] = (IBehaviorManager *)0x0;
              pIStack_154 = (IBehaviorManager *)0x0;
              pIStack_150 = (IBehaviorManager *)0x3f800000;
              fStack_14c = 0.0;
              pIStack_180 = (IBehaviorManager *)0x5195c6;
              IBehaviorManager::set_ship_up_direction(this,(Vector *)&pIStack_154);
            }
            pIStack_180 = (IBehaviorManager *)&pppppppiStack_f4;
            pIStack_184 = (IBehaviorManager *)&ppIStack_c0;
            pIStack_188 = (IBehaviorManager *)0x5195e0;
            FUN_00516fe0();
            pfVar5 = (float *)(param_1 + 0x204);
            pIVar19 = (IBehaviorManager *)
                      ((float)pIStack_164 * *pfVar5 +
                      (float)pIStack_160 * *(float *)(param_1 + 0x208) +
                      (float)apIStack_15c[0] * *(float *)(param_1 + 0x20c));
            fStack_144 = (float)apIStack_bc[0] * *(float *)(iStack_104 + 4) +
                         (float)pIStack_b0 * *(float *)(iStack_104 + 0x10) +
                         fStack_a4 * *(float *)(iStack_104 + 0x1c);
            if ((float)pIVar19 <= _DAT_005dbcb0) {
              if ((float)_DAT_005dbca0 < fStack_144) {
                *pfVar5 = (float)pIStack_164;
                *(IBehaviorManager **)(param_1 + 0x208) = pIStack_160;
                *(IBehaviorManager **)(param_1 + 0x20c) = apIStack_15c[0];
              }
            }
            else {
              if (ABS((float)pIVar19) < (float)_DAT_005dbca8) {
                pIStack_180 = (IBehaviorManager *)&pppppppiStack_f4;
                pIStack_184 = aIStack_68;
                pIStack_188 = (IBehaviorManager *)0x519687;
                FUN_00516fe0();
                if (DAT_00675220 == (int *******)0x0) {
                  DAT_00675220 = (int *******)FUN_005b73e0();
                }
                pIStack_180 = aIStack_9c;
                pIStack_188 = (IBehaviorManager *)0x5196b3;
                pIStack_184 = (IBehaviorManager *)DAT_00675220;
                (*(code *)(*DAT_00675220)[0x14])();
                if (DAT_00675220 == (int *******)0x0) {
                  pIStack_188 = (IBehaviorManager *)0x5196c1;
                  DAT_00675220 = (int *******)FUN_005b73e0();
                }
                pIStack_188 = (IBehaviorManager *)&pIStack_74;
                pIStack_18c = (IBehaviorManager *)&pIStack_160;
                pIStack_194 = (IBehaviorManager *)0x5196d9;
                pIStack_190 = (IBehaviorManager *)DAT_00675220;
                (*(code *)(*DAT_00675220)[0x14])();
                if ((float)pIStack_180 < _DAT_005c7474) {
                  pIStack_180 = (IBehaviorManager *)0x0;
                }
                apIStack_15c[0] =
                     (IBehaviorManager *)
                     (((float)pIStack_180 + _DAT_005c75dc) * *(float *)(param_1 + 0x200) * fStack_14
                     * _DAT_005c75e0);
                if (DAT_00675220 == (int *******)0x0) {
                  pIStack_194 = (IBehaviorManager *)0x519721;
                  DAT_00675220 = (int *******)FUN_005b73e0();
                }
                pIStack_194 = apIStack_15c[0];
                pppppppiStack_198 = &ppppppiStack_b4;
                pppppppppiStack_19c = (int *********)&stack0xfffffe94;
                pIStack_1a0 = (IBehaviorManager *)&pIStack_12c;
                ppIStack_1a8 = (IBehaviorManager **)0x519743;
                ppIStack_1a4 = (IBehaviorManager **)DAT_00675220;
                (*(code *)(*DAT_00675220)[0x16])();
                apIStack_15c[0] = pIStack_140;
                pIStack_150 = pIStack_134;
                apIStack_15c[1] = pIStack_13c;
                pIStack_154 = pIStack_138;
                if (DAT_00675220 == (int *******)0x0) {
                  ppIStack_1a8 = (IBehaviorManager **)0x519771;
                  DAT_00675220 = (int *******)FUN_005b73e0();
                }
                ppIStack_1a8 = apIStack_15c;
                ppIStack_1ac = apIStack_bc + 1;
                pIStack_1b4 = (IBehaviorManager *)0x519789;
                ppIStack_1b0 = (IBehaviorManager **)DAT_00675220;
                (*(code *)(*DAT_00675220)[0x15])();
                pIStack_13c = apIStack_8c[1];
                pIStack_138 = pIStack_7c;
                pIStack_134 = pIStack_70;
                ppIVar8 = apIStack_8c;
                pppIVar11 = &ppIStack_c0;
                for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *pppIVar11 = (IBehaviorManager **)*ppIVar8;
                  ppIVar8 = ppIVar8 + 1;
                  pppIVar11 = pppIVar11 + 1;
                }
                pIStack_164 = apIStack_8c[1];
                pIStack_160 = pIStack_7c;
                apIStack_15c[0] = pIStack_70;
              }
              *pfVar5 = (float)pIStack_164;
              *(IBehaviorManager **)(param_1 + 0x208) = pIStack_160;
              pIStack_154 = apIStack_bc[0];
              pIStack_150 = pIStack_b0;
              pppIVar11 = &ppIStack_c0;
              ppppppppiVar12 = &pppppppiStack_f4;
              for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                *ppppppppiVar12 = (int *******)*pppIVar11;
                pppIVar11 = pppIVar11 + 1;
                ppppppppiVar12 = ppppppppiVar12 + 1;
              }
              fStack_14c = fStack_a4;
              *(IBehaviorManager **)(param_1 + 0x20c) = apIStack_15c[0];
              pIStack_180 = (IBehaviorManager *)0x519830;
              IBehaviorManager::submit_camera_up(apIStack_15c[1],(Vector *)&pIStack_154);
            }
          }
        }
        if (param_3 == '\0') {
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          ppppppppiVar12 = &pppppppiStack_f4;
          pIStack_180 = (IBehaviorManager *)auStack_24;
          pIStack_188 = (IBehaviorManager *)0x5198f3;
          pIStack_184 = (IBehaviorManager *)DAT_00675220;
          (*(code *)(*DAT_00675220)[0x14])();
          if (*(int *)(param_1 + 0xc0) == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(*(int *)(param_1 + 0xc0) + -8);
          }
          pIStack_188 = (IBehaviorManager *)&uStack_dc;
          pIStack_18c = (IBehaviorManager *)0x519911;
          (**(code **)(*piVar10 + 0x50))();
          if (DAT_00675220 == (int *******)0x0) {
            pIStack_18c = (IBehaviorManager *)0x51991f;
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          pIStack_18c = (IBehaviorManager *)&uStack_e0;
          pIStack_190 = (IBehaviorManager *)&iStack_104;
          pIStack_194 = (IBehaviorManager *)&stack0xfffffe8c;
          pppppppppiStack_19c = (int *********)0x51993f;
          pppppppiStack_198 = DAT_00675220;
          (*(code *)(*DAT_00675220)[0xe])();
          apIStack_f0[0] = pIStack_184;
          apIStack_f0[1] = pIStack_180;
          appppppppiStack_e8[0] = ppppppppiVar12;
          ppIStack_c0 = (IBehaviorManager **)0x3f800000;
          pppppppiStack_d0 = (int *******)0x3f800000;
          uStack_e0 = 0x3f800000;
          pppppppiStack_c4 = (int *******)0x0;
          fStack_c8 = 0.0;
          fStack_cc = 0.0;
          afStack_d8[1] = 0.0;
          afStack_d8[0] = 0.0;
          uStack_dc = 0;
          iVar6 = 3;
          if ((float)pIStack_184 <= _DAT_005c7474) {
            fVar15 = -((float10)(float)pIStack_184 * (float10)*(float *)(param_1 + 0x1e4));
            fVar16 = (float10)fcos(fVar15);
            fVar15 = (float10)fsin(fVar15);
            pfVar5 = afStack_d8;
            do {
              fVar18 = pfVar5[-1];
              iVar6 = iVar6 + -1;
              pfVar5[-1] = (float)((float10)fVar18 * (float10)(float)fVar16 +
                                  fVar15 * (float10)*pfVar5);
              *pfVar5 = (float)((float10)(float)fVar16 * (float10)*pfVar5 - (float10)fVar18 * fVar15
                               );
              pfVar5 = pfVar5 + 3;
            } while (iVar6 != 0);
            iVar6 = 3;
            fVar16 = -((float10)(float)pIStack_180 * (float10)*(float *)(param_1 + 0x1dc)) *
                     (ABS((float10)(float)pIStack_184) * (float10)_DAT_006135c4 +
                     (float10)_DAT_005c89b8);
            fVar15 = (float10)fcos(fVar16);
            pIStack_188 = (IBehaviorManager *)(float)fVar15;
            fVar15 = (float10)fsin(fVar16);
            pfVar5 = afStack_d8;
            do {
              fVar18 = pfVar5[-2];
              iVar6 = iVar6 + -1;
              pfVar5[-2] = (float)((float10)(float)pIStack_188 * (float10)fVar18 -
                                  fVar15 * (float10)*pfVar5);
              *pfVar5 = (float)((float10)fVar18 * fVar15 +
                               (float10)(float)pIStack_188 * (float10)*pfVar5);
              pfVar5 = pfVar5 + 3;
            } while (iVar6 != 0);
          }
          else {
            fVar15 = -((float10)(float)pIStack_184 * (float10)*(float *)(param_1 + 0x1e0));
            fVar16 = (float10)fcos(fVar15);
            fVar15 = (float10)fsin(fVar15);
            pfVar5 = afStack_d8;
            do {
              fVar18 = pfVar5[-1];
              iVar6 = iVar6 + -1;
              pfVar5[-1] = (float)((float10)fVar18 * (float10)(float)fVar16 +
                                  fVar15 * (float10)*pfVar5);
              *pfVar5 = (float)((float10)(float)fVar16 * (float10)*pfVar5 - (float10)fVar18 * fVar15
                               );
              pfVar5 = pfVar5 + 3;
            } while (iVar6 != 0);
            fVar15 = -((float10)(float)pIStack_180 * (float10)*(float *)(param_1 + 0x1dc));
            fVar16 = (float10)fcos(fVar15);
            pIStack_188 = (IBehaviorManager *)(float)fVar16;
            fVar15 = (float10)fsin(fVar15);
            iVar6 = 3;
            pfVar5 = afStack_d8;
            do {
              fVar18 = pfVar5[-2];
              iVar6 = iVar6 + -1;
              pfVar5[-2] = (float)((float10)(float)pIStack_188 * (float10)fVar18 -
                                  fVar15 * (float10)*pfVar5);
              *pfVar5 = (float)((float10)fVar18 * fVar15 +
                               (float10)(float)pIStack_188 * (float10)*pfVar5);
              pfVar5 = pfVar5 + 3;
            } while (iVar6 != 0);
          }
          pppppppppiStack_19c = (int *********)&uStack_e0;
          pIStack_1a0 = (IBehaviorManager *)afStack_114;
          ppIStack_1a4 = apIStack_8c + 1;
          ppIStack_1a8 = (IBehaviorManager **)0x519b39;
          FUN_0051a140();
          ppIVar8 = apIStack_8c;
          pfVar5 = afStack_114;
          for (iVar6 = 9; ppIVar8 = ppIVar8 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar5 = (float)*ppIVar8;
            pfVar5 = pfVar5 + 1;
          }
          if (DAT_00675220 == (int *******)0x0) {
            pppppppppiStack_19c = (int *********)0x519b5f;
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          pIStack_1a0 = (IBehaviorManager *)fStack_124;
          ppIStack_1a4 = apIStack_15c;
          ppIStack_1ac = (IBehaviorManager **)0x519b7b;
          ppIStack_1a8 = (IBehaviorManager **)DAT_00675220;
          pppppppppiStack_19c = (int *********)(param_1 + 0x1a0);
          (*(code *)(*DAT_00675220)[0xb])();
          pIStack_184 = pIStack_120;
          pIStack_180 = (IBehaviorManager *)afStack_114[0];
          ppIStack_1ac = &pIStack_194;
          ppIStack_1b0 = &pIStack_184;
          pIStack_18c = pIStack_164;
          pIStack_1b4 = (IBehaviorManager *)0x519bc3;
          pIStack_194 = unaff_EBX;
          pIStack_190 = pIVar19;
          fVar15 = (float10)FUN_004cbf40();
          if ((float10)_DAT_005dafa8 <= ABS(fVar15)) {
            pfVar5 = &fStack_124;
            ppIVar8 = apIStack_bc;
            for (iVar6 = 9; fVar18 = afStack_114[3], iVar6 != 0; iVar6 = iVar6 + -1) {
              *ppIVar8 = (IBehaviorManager *)*pfVar5;
              pfVar5 = pfVar5 + 1;
              ppIVar8 = ppIVar8 + 1;
            }
          }
          else {
            ppIStack_1ac = &pIStack_184;
            ppIStack_1b0 = &pIStack_194;
            pIStack_1b4 = (IBehaviorManager *)&fStack_144;
            pfStack_1b8 = (float *)0x519bed;
            pfVar5 = (float *)FUN_0051a0c0();
            unaff_EBX = (IBehaviorManager *)*pfVar5;
            pIVar19 = (IBehaviorManager *)pfVar5[1];
            pIStack_164 = (IBehaviorManager *)pfVar5[2];
            ppIStack_1ac = (IBehaviorManager **)0x519c0d;
            FUN_0041a390();
            ppIStack_1ac = &pIStack_194;
            ppIStack_1b0 = (IBehaviorManager **)&stack0xfffffe94;
            pIStack_1b4 = (IBehaviorManager *)&fStack_cc;
            pfStack_1b8 = (float *)0x519c24;
            FUN_0051a0c0();
            ppIStack_1ac = (IBehaviorManager **)0x519c33;
            FUN_0041a390();
            ppIStack_1ac = (IBehaviorManager **)&stack0xfffffe94;
            ppIStack_1b0 = (IBehaviorManager **)0x519c44;
            FUN_0051a100();
            ppIStack_1ac = (IBehaviorManager **)&fStack_cc;
            ppIStack_1b0 = (IBehaviorManager **)0x519c58;
            FUN_0051a120();
            ppIStack_1ac = &pIStack_160;
            ppIStack_1b0 = (IBehaviorManager **)0x519c66;
            FUN_00411350();
            ppIStack_1ac = &pIStack_160;
            ppIStack_1b0 = (IBehaviorManager **)0x519c77;
            FUN_00411f70();
            fVar18 = afStack_114[3];
          }
          if (DAT_00675220 == (int *******)0x0) {
            ppIStack_1ac = (IBehaviorManager **)0x519c9c;
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          ppIStack_1ac = apIStack_bc;
          ppIStack_1b0 = (IBehaviorManager **)afStack_44;
          pfStack_1b8 = (float *)0x519cb7;
          pIStack_1b4 = (IBehaviorManager *)DAT_00675220;
          (*(code *)(*DAT_00675220)[0x14])();
          if (DAT_00675220 == (int *******)0x0) {
            pfStack_1b8 = (float *)0x519cc5;
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          pfStack_1b8 = &fStack_130;
          pIStack_1bc = (IBehaviorManager *)(apIStack_8c + 3);
          ppIStack_1c4 = (IBehaviorManager **)0x519ce0;
          ppIStack_1c0 = (IBehaviorManager **)DAT_00675220;
          (*(code *)(*DAT_00675220)[0x14])();
          ppIStack_1c4 = (IBehaviorManager **)uStack_11c;
          ppIStack_1c8 = ppIStack_128;
          FUN_00422b80(pIStack_134);
          ppIStack_1c4 = (IBehaviorManager **)ppppppiStack_b4;
          ppIStack_1c8 = ppIStack_c0;
          FUN_00422b80(fStack_cc);
          ppIStack_1b0 = (IBehaviorManager **)
                         ((float)pppppppppiStack_19c * (float)pIStack_184 +
                         (float)pIStack_180 * (float)pppppppiStack_198 + fVar18 * (float)pIStack_194
                         );
          if ((float)_DAT_005c8ba8 <= (float)ppIStack_1b0) {
            if ((float)_DAT_005c89b8 < (float)ppIStack_1b0) {
              ppIStack_1b0 = (IBehaviorManager **)0x3f800000;
            }
          }
          else {
            ppIStack_1b0 = (IBehaviorManager **)0x0;
          }
          ppIStack_1c4 = (IBehaviorManager **)0x519d7b;
          fVar15 = (float10)_CIacos();
          pIStack_1a0 = (IBehaviorManager *)(float)fVar15;
          pIStack_18c = (IBehaviorManager *)(_DAT_005c75dc / afStack_44[0]);
          fVar18 = (float)pIStack_18c * (float)pIStack_1a0;
          if (*(float *)(param_1 + 0x1d4) < fVar18 - *(float *)(param_1 + 0x1ac)) {
            fVar18 = *(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1ac);
          }
          ppIStack_1b0 = (IBehaviorManager **)0x3f800000;
          if ((float)_DAT_005dbc98 < (float)pIStack_1a0) {
            ppIStack_1b0 = (IBehaviorManager **)((afStack_44[0] / (float)pIStack_1a0) * fVar18);
          }
          if (*(float *)(param_1 + 0x1d8) < (float)ppIStack_1b0) {
            ppIStack_1b0 = *(IBehaviorManager ***)(param_1 + 0x1d8);
            fVar18 = (float)pIStack_18c * (float)ppIStack_1b0 * (float)pIStack_1a0;
          }
          *(float *)(param_1 + 0x1ac) = fVar18;
          if (DAT_00675220 == (int *******)0x0) {
            ppIStack_1c4 = (IBehaviorManager **)0x519e1e;
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          ppIStack_1c4 = ppIStack_1b0;
          ppIStack_1c8 = apIStack_8c;
          pppppppiVar17 = DAT_00675220;
          (*(code *)(*DAT_00675220)[0x16])(DAT_00675220,apIStack_15c,auStack_5c);
          pIStack_180 = pIStack_164;
          pIStack_188 = unaff_EBX;
          pIStack_184 = pIVar19;
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          (*(code *)(*DAT_00675220)[0x15])(DAT_00675220);
          ppppppppiVar12 = &pppppppiStack_d0;
          ppIVar8 = apIStack_15c;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppIVar8 = (IBehaviorManager *)*ppppppppiVar12;
            ppppppppiVar12 = ppppppppiVar12 + 1;
            ppIVar8 = ppIVar8 + 1;
          }
          FUN_00423b90(&pIStack_1bc,apIStack_15c,&stack0xfffffe98);
          pIStack_188 = (IBehaviorManager *)((float)pIStack_1bc + (float)pIStack_188);
          pIStack_184 = (IBehaviorManager *)((float)pIStack_184 + (float)pfStack_1b8);
          pIStack_180 = (IBehaviorManager *)((float)pIStack_180 + (float)pIStack_1b4);
          pIStack_1bc = pIStack_154;
          pfStack_1b8 = (float *)uStack_148;
          pIStack_1b4 = pIStack_13c;
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          (*(code *)(*DAT_00675220)[0xe])(DAT_00675220,&ppIStack_1a4,unaff_EBX,&pIStack_1bc);
          FUN_00422b80(-(float)pIStack_1b4,-(float)ppIStack_1b0,-(float)ppIStack_1ac);
          *(int *********)(param_1 + 0x1a0) = &pppppppiStack_c4;
          *(IBehaviorManager ***)(param_1 + 0x1a4) = &pIStack_18c;
          *(int ********)(param_1 + 0x1a8) = pppppppiVar17;
          puVar4 = (undefined4 *)&stack0xfffffe94;
          puVar13 = (undefined4 *)(param_1 + 0x158);
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar13 = puVar13 + 1;
          }
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          (*(code *)(*DAT_00675220)[0x14])(DAT_00675220,auStack_ac,&stack0xfffffe94);
          ppIStack_1c8 = *(IBehaviorManager ***)(param_1 + 0x1e8);
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          (*(code *)(*DAT_00675220)[0x16])
                    (DAT_00675220,&pppppppiStack_198,apIStack_bc + 1,aIStack_a8,ppIStack_1c8);
          ppIStack_1c8 = ppIStack_1ac;
          pIStack_1bc = pIStack_1a0;
          ppIStack_1c4 = ppIStack_1a8;
          ppIStack_1c0 = ppIStack_1a4;
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          (*(code *)(*DAT_00675220)[0x15])(DAT_00675220,&puStack_100,&ppIStack_1c8);
          piVar10 = &iStack_78;
          piVar14 = &iStack_104;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar14 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar14 = piVar14 + 1;
          }
        }
        else {
          ppppppppiVar12 = &pppppppiStack_f4;
          puVar4 = (undefined4 *)(param_1 + 0x158);
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar4 = *ppppppppiVar12;
            ppppppppiVar12 = ppppppppiVar12 + 1;
            puVar4 = puVar4 + 1;
          }
          if (DAT_00675220 == (int *******)0x0) {
            DAT_00675220 = (int *******)FUN_005b73e0();
          }
          pIStack_180 = (IBehaviorManager *)&pppppppiStack_f4;
          pIStack_184 = (IBehaviorManager *)&pIStack_154;
          pIStack_18c = (IBehaviorManager *)0x5198a1;
          pIStack_188 = (IBehaviorManager *)DAT_00675220;
          (*(code *)(*DAT_00675220)[0xb])();
          fStack_130 = (float)pIStack_164 + fStack_130;
          pIStack_12c = (IBehaviorManager *)((float)pIStack_160 + (float)pIStack_12c);
          ppIStack_128 = (IBehaviorManager **)((float)apIStack_15c[0] + (float)ppIStack_128);
        }
        *(float *)(param_1 + 0x130) = fStack_130;
        *(IBehaviorManager **)(param_1 + 0x134) = pIStack_12c;
        *(IBehaviorManager ***)(param_1 + 0x138) = ppIStack_128;
        pIStack_18c = (IBehaviorManager *)&iStack_104;
        *(IBehaviorManager **)(param_1 + 0x1ec) = pIStack_150;
        pIStack_190 = (IBehaviorManager *)0x51a06c;
        FUN_0051dbd0();
        piVar10 = &iStack_104;
        piVar14 = piStack_10;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar14 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar14 = piVar14 + 1;
        }
        piStack_10[9] = (int)*(float *)(param_1 + 0x130);
        piStack_10[10] = *(int *)(param_1 + 0x134);
        piStack_10[0xb] = *(int *)(param_1 + 0x138);
        return CONCAT31((int3)((uint)(piStack_10 + 9) >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}

