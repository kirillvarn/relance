
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b0920(int param_1,int param_2)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int unaff_EBP;
  int *piVar10;
  int *piVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  float *pfVar16;
  bool bVar17;
  wchar_t *pwVar18;
  ulonglong uVar19;
  undefined4 uStack_27c;
  int local_270;
  int local_26c;
  int aiStack_268 [5];
  char cStack_254;
  char cStack_253;
  char cStack_252;
  undefined4 local_250;
  float local_24c;
  int local_248;
  undefined4 uStack_244;
  undefined4 uStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  float afStack_22c [2];
  wchar_t *pwStack_224;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  wchar_t awStack_204 [40];
  undefined1 auStack_1b4 [12];
  undefined1 auStack_1a8 [128];
  undefined4 auStack_128 [4];
  int aiStack_118 [38];
  wchar_t awStack_80 [6];
  undefined1 auStack_74 [40];
  wchar_t awStack_4c [6];
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 0x32e) == '\0') {
    FUN_00595e30(0x3e75c28f,0x3c656042);
    local_250 = 0;
    local_24c = 0.0;
    local_248 = 0;
    (**(code **)(**(int **)(param_1 + 0x654) + 0x14))();
    FUN_0058a790();
    FUN_0058b730();
  }
  local_270 = 0;
  local_26c = 0;
  piVar10 = (int *)(param_1 + 0x5e4);
  do {
    fVar2 = uStack_27c;
    uStack_27c = (float)((uint)uStack_27c & 0xffffff);
    fVar3 = uStack_27c;
    if (*(char *)(param_1 + 0x32e) == '\0') {
      *(byte *)(*piVar10 + 0x331) = *(byte *)(*piVar10 + 0x331) | 2;
    }
    iVar9 = *(int *)(param_1 + 0x7f4);
    aiStack_268[0] = -1;
    cStack_254 = '\0';
    cStack_253 = '\0';
    cStack_252 = '\0';
    if (iVar9 == 1) {
      iVar9 = *(int *)(param_1 + 0x508);
LAB_004b0a0e:
      piVar11 = (int *)(iVar9 + local_26c);
      piVar14 = aiStack_268;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar14 = piVar14 + 1;
      }
      uStack_27c._0_3_ = SUB43(fVar2,0);
      if (aiStack_268[0] == 0x534) {
        (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,1);
        uStack_27c = (float)CONCAT13(1,(undefined3)uStack_27c);
        fVar3 = uStack_27c;
      }
      else if (aiStack_268[0] == 0x657) {
        (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,8);
        uStack_27c = (float)CONCAT13(1,(undefined3)uStack_27c);
        fVar3 = uStack_27c;
      }
      else {
        if (aiStack_268[0] == 0x67f) {
          puVar13 = &DAT_00679bc0;
          puVar15 = auStack_128;
          for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          bVar17 = aiStack_118[0] == 0x20;
        }
        else {
          if (aiStack_268[0] != 0x57f) goto LAB_004b0ab5;
          bVar17 = SinglePlayer();
          bVar17 = !bVar17;
        }
        if (bVar17) {
          uStack_27c = (float)CONCAT13(1,(undefined3)uStack_27c);
          fVar3 = uStack_27c;
        }
      }
    }
    else {
      if (iVar9 == 2) {
        iVar9 = *(int *)(param_1 + 0x548);
        goto LAB_004b0a0e;
      }
      if (iVar9 == 3) {
        iVar9 = *(int *)(param_1 + 0x528);
        goto LAB_004b0a0e;
      }
    }
LAB_004b0ab5:
    uStack_27c = fVar3;
    iVar9 = aiStack_268[0];
    if ((param_2 != -1) && (param_2 != aiStack_268[0])) goto LAB_004b1409;
    (**(code **)(*(int *)piVar10[0x1c] + 0xa8))(0x37,0);
    *(byte *)(*piVar10 + 0x6c) = *(byte *)(*piVar10 + 0x6c) & 0xfc;
    *(byte *)(piVar10[-0x1c] + 0x6c) = *(byte *)(piVar10[-0x1c] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0x1c] + 0x6c) = *(byte *)(piVar10[0x1c] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0x46] + 0x6c) = *(byte *)(piVar10[0x46] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0x2a] + 0x6c) = *(byte *)(piVar10[0x2a] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0x38] + 0x6c) = *(byte *)(piVar10[0x38] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0x54] + 0x6c) = *(byte *)(piVar10[0x54] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0x62] + 0x6c) = *(byte *)(piVar10[0x62] + 0x6c) & 0xfc;
    *(byte *)(piVar10[0xe] + 0x6c) = *(byte *)(piVar10[0xe] + 0x6c) & 0xfc;
    if (iVar9 == -1) {
      iVar9 = piVar10[-0xe];
      bVar7 = *(byte *)(iVar9 + 0x6c) & 0xfc;
LAB_004b1406:
      *(byte *)(iVar9 + 0x6c) = bVar7;
    }
    else {
      if (cStack_252 != '\0') {
        *(byte *)(piVar10[-0xe] + 0x6c) = *(byte *)(piVar10[-0xe] + 0x6c) & 0xfc;
        FUN_004347e0();
        (**(code **)(*(int *)piVar10[-0x1c] + 0xa8))(0x1d,auStack_1a8);
        iVar9 = piVar10[-0x1c];
LAB_004b1400:
        bVar7 = *(byte *)(iVar9 + 0x6c) | 3;
        goto LAB_004b1406;
      }
      if (uStack_27c._3_1_ == '\0') {
        if ((cStack_253 == '\0') || (*(char *)(param_1 + 0x32d) == '\0')) {
          *(undefined4 *)(piVar10[-0xe] + 0x348) = DAT_00679bb0;
          *(undefined4 *)(piVar10[0x62] + 0x348) = DAT_00679bb0;
          *(undefined1 *)(piVar10[0x54] + 0x37c) = 0;
          *(byte *)(piVar10[0x54] + 0x388) = *(byte *)(piVar10[0x54] + 0x388) | 4;
          *(undefined4 *)(piVar10[0xe] + 0x348) = DAT_00679bb0;
          *(undefined1 *)(*piVar10 + 0x336) = 0;
          *(byte *)(*piVar10 + 0x331) = *(byte *)(*piVar10 + 0x331) | 2;
          *(undefined4 *)(piVar10[0x2a] + 0x348) = DAT_00679bb0;
          *(undefined4 *)(piVar10[0x38] + 0x348) = DAT_00679bb0;
          *(undefined4 *)(piVar10[0x46] + 0x348) = DAT_00679bb0;
          *(undefined1 *)(piVar10[0x1c] + 0x32d) = 0;
          *(undefined1 *)(piVar10[0x1c] + 0x32c) = 1;
        }
        else {
          *(undefined4 *)(piVar10[-0xe] + 0x348) = DAT_00679b94;
          *(undefined4 *)(piVar10[0x62] + 0x348) = DAT_00679b94;
          *(undefined1 *)(piVar10[0x54] + 0x37c) = 1;
          *(byte *)(piVar10[0x54] + 0x388) = *(byte *)(piVar10[0x54] + 0x388) & 0xfb;
          *(undefined4 *)(piVar10[0xe] + 0x348) = DAT_00679b94;
          *(undefined1 *)(*piVar10 + 0x336) = 1;
          *(byte *)(*piVar10 + 0x331) = *(byte *)(*piVar10 + 0x331) & 0xfd;
          *(undefined4 *)(piVar10[0x2a] + 0x348) = DAT_00679b94;
          *(undefined4 *)(piVar10[0x38] + 0x348) = DAT_00679b94;
          *(undefined4 *)(piVar10[0x46] + 0x348) = DAT_00679b94;
          *(undefined1 *)(piVar10[0x1c] + 0x32d) = 1;
          *(undefined1 *)(piVar10[0x1c] + 0x32c) = 0;
        }
        *(byte *)(piVar10[-0xe] + 0x6c) = *(byte *)(piVar10[-0xe] + 0x6c) | 3;
        FUN_004347e0();
        (**(code **)(*(int *)piVar10[-0xe] + 0xa8))(0x1d,auStack_1a8);
        iVar8 = FUN_005b3770();
        if (iVar8 != 0) {
          if (cStack_254 == '\0') {
            (**(code **)(*(int *)*piVar10 + 0xa8))
                      (0x30,(float)_DAT_005c8b68 < *(float *)(iVar8 + 0x14));
            *(byte *)(*piVar10 + 0x6c) = *(byte *)(*piVar10 + 0x6c) | 3;
            if (unaff_EBP == 0) {
              uVar4 = 0x67a;
            }
            else {
              uVar4 = 0x65f;
            }
            FUN_004347e0(DAT_0067eca8,uVar4,CONCAT44(0x40,auStack_1b4));
            (**(code **)(*(int *)piVar10[0xe] + 0xa8))(0x1d,auStack_1b4);
            iVar5 = piVar10[0xe];
          }
          else {
            iVar5 = *(int *)piVar10[0x1c];
            uVar4 = ftol();
            (**(code **)(iVar5 + 0xa8))(0x38,uVar4);
            iVar5 = piVar10[0x1c];
          }
          *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) | 3;
        }
        if (0x57f < iVar9) {
          if (iVar9 == 0x687) {
            if (iVar8 != 0) {
              (**(code **)(*(int *)piVar10[0x1c] + 0xa8))(0x37,8);
              iVar8 = FUN_005b3860();
              iVar9 = *(int *)piVar10[0x1c];
              uVar4 = ftol();
              (**(code **)(iVar9 + 0xa8))(0x38,uVar4);
              *(byte *)(piVar10[0x1c] + 0x6c) = *(byte *)(piVar10[0x1c] + 0x6c) | 3;
              swprintf(awStack_4c,0x5d5048,SUB84((double)iVar8,0));
              if (-1 < local_26c) {
                puVar6 = auStack_40;
                goto LAB_004b13e7;
              }
            }
          }
          else if (iVar9 == 0x767) {
            FUN_00595e30(0x3eb4bc6a,0x3c9374bc);
            iStack_21c = -0x421eb852;
            uStack_218 = 0;
            uStack_214 = 0;
            (**(code **)(*(int *)piVar10[0x1c] + 0x14))();
            if (*(char *)(param_1 + 0x8c8) == '\0') {
              FUN_005b36b0();
              iVar9 = *(int *)piVar10[0x1c];
              uVar4 = ftol();
              (**(code **)(iVar9 + 0xa8))(0x38,uVar4);
            }
            *(byte *)(piVar10[0x1c] + 0x6c) = *(byte *)(piVar10[0x1c] + 0x6c) | 3;
            FUN_0058b730();
            FUN_0058a790();
          }
          else {
LAB_004b128c:
            if (iVar8 == 0) {
              *(byte *)(piVar10[-0xe] + 0x6c) = *(byte *)(piVar10[-0xe] + 0x6c) & 0xfc;
              FUN_004347e0();
              (**(code **)(*(int *)piVar10[-0xe] + 0xa8))(0x1d,auStack_1a8);
              iVar9 = piVar10[-0xe];
              goto LAB_004b1400;
            }
          }
          goto LAB_004b1409;
        }
        if (iVar9 == 0x57f) {
          uStack_244 = *(undefined4 *)(iVar8 + 0x14);
          (**(code **)(*(int *)piVar10[0x1c] + 0xa8))(0x37,0);
          piVar11 = (int *)piVar10[0x1c];
          uVar4 = ftol();
          (**(code **)(*piVar11 + 0xa8))(0x38,uVar4);
          *(byte *)(piVar10[0x1c] + 0x6c) = *(byte *)(piVar10[0x1c] + 0x6c) | 3;
          switch(uVar4) {
          case 0:
            uVar4 = 0x702;
            break;
          case 1:
            uVar4 = 0x703;
            break;
          case 2:
            uVar4 = 0x704;
            break;
          case 3:
            uVar4 = 0x705;
            break;
          default:
            goto switchD_004b11f4_default;
          }
          FUN_004347e0(DAT_0067eca8,uVar4,aiStack_118,0x40);
switchD_004b11f4_default:
          (**(code **)(*(int *)piVar10[0x46] + 0xa8))(0x1d,aiStack_118,0);
        }
        else {
          if (iVar9 != 0x534) {
            if (iVar9 == 0x536) {
              local_250 = 0;
              local_24c = (float)local_270 * _DAT_005d4e78;
              local_248 = 0;
              (**(code **)(**(int **)(param_1 + 0x564) + 0x14))();
              afStack_22c[1] = uStack_27c + uStack_27c;
              afStack_22c[0] = 0.0;
              pwStack_224 = (wchar_t *)0x0;
              (**(code **)(**(int **)(param_1 + 0x568) + 0x14))(afStack_22c);
              fStack_238 = uStack_27c;
              uStack_23c = 0;
              uStack_234 = 0;
              (**(code **)(**(int **)(param_1 + 0x56c) + 0x14))();
              local_24c = 0.0;
              uStack_244 = 0;
              local_248 = unaff_EBP;
              (**(code **)(**(int **)(param_1 + 0x570) + 0x14))();
              (**(code **)(**(int **)(param_1 + 0x564) + 0xa8))
                        (0x37,0,*(int *)(param_1 + 0x950) + -1);
              pfVar12 = (float *)&DAT_00679bc0;
              pfVar16 = afStack_22c;
              for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
                *pfVar16 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                pfVar16 = pfVar16 + 1;
              }
              iVar9 = 0;
              bVar17 = false;
              puVar13 = (undefined4 *)(param_1 + 0x954);
              uVar19 = (ulonglong)(param_1 + 0x8cc);
              do {
                if (*(char *)(param_1 + 0x944 + iVar9) != '\0') {
                  pwVar18 = (wchar_t *)*(undefined4 *)uVar19;
                  iVar9 = ((undefined4 *)uVar19)[2];
                  if ((pwStack_224 == pwVar18) && (iStack_21c == iVar9)) {
                    *(wchar_t **)(param_1 + 0x8b8) = pwVar18;
                    *(wchar_t **)(param_1 + 0x330) = pwVar18;
                    *(bool *)(param_1 + 0x334) = iVar9 == 0x20;
                    swprintf(awStack_204,0x5d5190,pwVar18);
                    (**(code **)(**(int **)(param_1 + 0x564) + 0xa8))(0x38,*puVar13,0);
                    bVar17 = true;
                  }
                }
                iVar9 = (int)(uVar19 >> 0x20) + 1;
                puVar13 = puVar13 + 1;
                uVar19 = CONCAT44(iVar9,(int)uVar19 + 0xc);
              } while (iVar9 < 10);
              if (!bVar17) {
                *(wchar_t **)(param_1 + 0x8b8) = pwStack_224;
                *(wchar_t **)(param_1 + 0x330) = pwStack_224;
                *(bool *)(param_1 + 0x334) = iStack_21c == 0x20;
                swprintf(awStack_204,0x5d5190,pwStack_224);
                (**(code **)(**(int **)(param_1 + 0x564) + 0xa8))(0x38,0,0);
              }
              if (*(char *)(param_1 + 0x97c) != '\0') {
                if (*(char *)(param_1 + 0x334) == '\0') {
                  pwVar18 = L"%s x 16";
                }
                else {
                  pwVar18 = L"%s x 32";
                }
                swprintf(awStack_204,(size_t)pwVar18,awStack_204);
              }
              (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(0x1d,awStack_204,0);
              pbVar1 = (byte *)(*(int *)(param_1 + 0x564) + 0x6c);
              *pbVar1 = *pbVar1 | 3;
              pbVar1 = (byte *)(*(int *)(param_1 + 0x568) + 0x6c);
              *pbVar1 = *pbVar1 | 3;
              pbVar1 = (byte *)(*(int *)(param_1 + 0x56c) + 0x6c);
              *pbVar1 = *pbVar1 | 3;
              iVar9 = *(int *)(param_1 + 0x570);
              goto LAB_004b1400;
            }
            if (iVar9 != 0x57e) goto LAB_004b128c;
            *(byte *)(piVar10[0x54] + 0x6c) = *(byte *)(piVar10[0x54] + 0x6c) | 3;
            *(byte *)(piVar10[0x62] + 0x6c) = *(byte *)(piVar10[0x62] + 0x6c) | 3;
            FUN_004347e0();
            (**(code **)(*(int *)piVar10[0x62] + 0xa8))(0x1d,auStack_1a8);
            if ((*(int *)(param_1 + 0x330) == *(int *)(param_1 + 0x8b8)) &&
               (*(char *)(param_1 + 0x334) == *(char *)(param_1 + 0x8bc))) {
              *(undefined4 *)(piVar10[0x62] + 0x348) = DAT_00679b94;
              *(undefined1 *)(piVar10[0x54] + 0x37c) = 1;
              *(byte *)(piVar10[0x54] + 0x388) = *(byte *)(piVar10[0x54] + 0x388) & 0xfb;
            }
            else {
              *(undefined4 *)(piVar10[0x62] + 0x348) = DAT_00679bb0;
              *(undefined1 *)(piVar10[0x54] + 0x37c) = 0;
              *(byte *)(piVar10[0x54] + 0x388) = *(byte *)(piVar10[0x54] + 0x388) | 4;
            }
            goto LAB_004b1409;
          }
          if (iVar8 == 0) goto LAB_004b1409;
          swprintf(awStack_80,0x5d5164,SUB84((double)*(float *)(iVar8 + 0x14),0));
          puVar6 = auStack_74;
LAB_004b13e7:
          (**(code **)(*(int *)piVar10[0x46] + 0xa8))(0x1d,puVar6);
        }
        iVar9 = piVar10[0x46];
        goto LAB_004b1400;
      }
    }
LAB_004b1409:
    local_26c = local_26c + 0x18;
    piVar10 = piVar10 + 1;
    local_270 = local_270 + -1;
    if (0x14f < local_26c) {
      return;
    }
  } while( true );
}

