
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_005163e0(int param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  CEquip *pCVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 *puVar13;
  ID_String *this;
  undefined4 *puVar14;
  undefined4 uVar15;
  byte bStack_139;
  float fStack_138;
  float fStack_134;
  int local_130;
  float fStack_12c;
  int *local_128;
  int *local_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  int *local_104;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [12];
  undefined4 auStack_f0 [9];
  undefined4 auStack_cc [9];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [156];
  
  piVar9 = (int *)**(int **)(param_1 + 0xc);
  local_124 = (int *)0x0;
  local_120 = 1e+07;
  if (*(int **)(param_1 + 0xc) == piVar9) {
    return (int *)0x0;
  }
  do {
    local_128 = (int *)*piVar9;
    local_104 = piVar9;
    piVar4 = (int *)FUN_005416c0(piVar9[2],1);
    if (piVar4 == (int *)0x0) {
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
LAB_005164b9:
      FUN_005b7e1d(piVar9);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
      if ((((iVar5 == 0) || (iVar5 == 8)) || (iVar5 == -4)) ||
         ((iVar5 = *(int *)(iVar5 + 8), iVar5 == 0 || ((*(uint *)(iVar5 + 0x4c) & 0x303) != 0x303)))
         ) {
        iVar5 = 0;
      }
      pCVar6 = CEquipManager::FindFirst((CEquipManager *)(iVar5 + 0xe4),0x800000);
      if (pCVar6 == (CEquip *)0x0) {
        local_130 = 0;
      }
      else if (*(int *)(pCVar6 + 0xc) == 0) {
        local_130 = 0;
      }
      else {
        local_130 = *(int *)(*(int *)(pCVar6 + 0xc) + 4);
      }
      if (piVar4[0x58] != param_1) {
        *(int *)piVar9[1] = *piVar9;
        *(int *)(*piVar9 + 4) = piVar9[1];
        goto LAB_005164b9;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13 = (undefined4 *)(*(int *)(param_1 + 0x14) + -8);
      }
      pfVar7 = (float *)(**(code **)*puVar13)();
      pfVar8 = (float *)(**(code **)*piVar4)();
      FUN_00422b80(*pfVar8 - *pfVar7,pfVar8[1] - pfVar7[1],pfVar8[2] - pfVar7[2]);
      fStack_134 = fStack_110 * fStack_110 + fStack_10c * fStack_10c + fStack_108 * fStack_108;
      fStack_138 = (float)(0x5f3759df - ((int)fStack_134 >> 1));
      fStack_134 = (_DAT_005ca220 - fStack_138 * fStack_138 * fStack_134 * _DAT_005c75e0) *
                   fStack_138 * fStack_134;
      fVar12 = _DAT_005db7d8;
      if (-1 < (char)piVar4[0x61]) {
        (**(code **)(*piVar4 + 4))(&fStack_11c);
        fVar12 = fStack_11c * fStack_11c + fStack_114 * fStack_114 + fStack_118 * fStack_118;
        fStack_138 = (float)(0x5f3759df - ((int)fVar12 >> 1));
        fVar12 = (_DAT_005ca220 - fStack_138 * fStack_138 * fVar12 * _DAT_005c75e0) * fStack_138 *
                 fVar12;
      }
      fStack_12c = 100.0;
      if (_DAT_005c75dc < fVar12) {
        fStack_12c = fStack_134 / fVar12;
      }
      if (fStack_12c < *(float *)(local_130 + 0x94)) {
        piVar9 = (int *)FUN_0054baf0();
        if (*(int *)(param_1 + 0x14) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x14) + -8;
        }
        iVar5 = FUN_005140c0(iVar5);
        if ((*(byte *)((int)piVar4 + 0x185) & 2) == 0) {
          *(byte *)((int)piVar4 + 0x185) = *(byte *)((int)piVar4 + 0x185) | 3;
          if (piVar4 == piVar9) {
            this = (ID_String *)(iVar5 + 0x54);
            bVar3 = ID_String::IsEmpty(this);
            if (bVar3) goto LAB_0051666d;
            uVar15 = 0;
            uVar10 = FUN_004b5150(0);
            uVar11 = (**(code **)(*piVar4 + 0x1c))(uVar10);
          }
          else {
LAB_0051666d:
            uVar15 = 0;
            uVar10 = FUN_004b5150(0);
            uVar11 = (**(code **)(*piVar4 + 0x1c))(uVar10);
            this = (ID_String *)(iVar5 + 0x68);
          }
          FUN_00514070(this,piVar4,uVar11,uVar10,uVar15);
        }
        if (DAT_00675200 != '\0') {
          piVar9 = (int *)FUN_0054baf0();
          if (*(int *)(param_1 + 0x14) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x14) + -8;
          }
          fVar12 = (float)FUN_005140c0(iVar5);
          fStack_138 = fVar12;
          if ((*(byte *)(piVar4 + 0x61) & 0x20) == 0) {
            *(byte *)(piVar4 + 0x61) = *(byte *)(piVar4 + 0x61) | 0x20;
            if (piVar4 == piVar9) {
              if (*(int *)(param_1 + 0x14) == 0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = (int *)(*(int *)(param_1 + 0x14) + -8);
              }
              puVar13 = (undefined4 *)(**(code **)(*piVar9 + 0xc))();
              bVar1 = *(byte *)(piVar4 + 0x61);
              puVar14 = auStack_f0;
              for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              }
              if ((bVar1 & 1) == 0) {
                FUN_004cbfa0(auStack_9c);
                FUN_00411350(auStack_fc);
                FUN_00411f70(auStack_fc);
              }
              puVar13 = (undefined4 *)(**(code **)*piVar4)();
              uStack_a8 = *puVar13;
              uStack_a4 = puVar13[1];
              uStack_a0 = puVar13[2];
              puVar13 = auStack_f0;
              puVar14 = auStack_cc;
              for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              }
              piVar9 = piVar4 + 0x5d;
              puVar13 = auStack_cc;
              uVar10 = 0xffffffff;
              iVar5 = (int)fStack_138 + 0x58;
            }
            else {
              piVar9 = piVar4 + 0x59;
              puVar13 = (undefined4 *)FUN_004b5150(piVar9);
              uVar10 = (**(code **)(*piVar4 + 0x1c))(puVar13);
              iVar5 = (int)fVar12 + 0x6c;
            }
            FUN_00514070(iVar5,piVar4,uVar10,puVar13,piVar9);
          }
        }
      }
      if ((char)piVar4[0x61] < '\0') {
        iVar5 = FUN_00514260();
        if (iVar5 == 0) {
          if (fStack_12c < *(float *)(local_130 + 0x98)) {
            FUN_00514bf0(piVar4,1);
          }
        }
        else if (fStack_12c < *(float *)(local_130 + 0x9c)) {
          FUN_00514960(piVar4);
        }
        bStack_139 = 1;
        if (*(int *)(param_1 + 0x14) == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(*(int *)(param_1 + 0x14) + -8);
        }
        iVar2 = *piVar9;
        uVar10 = (**(code **)(*piVar4 + 0x10))(&bStack_139);
        (**(code **)(iVar2 + 300))(uVar10);
        if ((*(byte *)(piVar4 + 0x61) >> 1 & 1) != bStack_139) {
          FUN_00516f70(auStack_100,local_104);
          piVar4[0x58] = 0;
          if (iVar5 == 0) {
            piVar4[0x61] = 0;
          }
          else {
            FUN_00515200(iVar5,*(undefined1 *)(param_1 + 0x1c),1);
            if (((*(byte *)(piVar4 + 0x61) & 0x20) != 0) &&
               (piVar9 = (int *)FUN_0054baf0(), piVar4 == piVar9)) {
              *(byte *)(piVar4 + 0x61) = *(byte *)(piVar4 + 0x61) | 0x40;
            }
            FUN_005142e0(piVar4);
          }
        }
      }
      else if (fStack_134 < local_120) {
        local_120 = fStack_134;
        local_124 = piVar4;
      }
    }
    piVar9 = local_128;
    if (*(int **)(param_1 + 0xc) == local_128) {
      return local_124;
    }
  } while( true );
}

