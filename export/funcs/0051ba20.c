
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051ba20(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  undefined4 *puVar11;
  float unaff_EBX;
  int iVar12;
  float10 fVar13;
  float fStack_78;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float *pfStack_5c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_6c = _DAT_006164d0 * (float)_DAT_005cbf58 * _DAT_006164d0 * (float)_DAT_005cbf58;
  iVar7 = FUN_005792b0(0x25);
  if ((iVar7 != 0) && (iVar7 = FUN_005792b0(0x2c), iVar7 != 0)) {
    iVar7 = FUN_005201d0();
    puVar1 = *(undefined4 **)(iVar7 + 4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      iVar7 = puVar2[2];
      piVar3 = *(int **)(iVar7 + 0x1c);
      iVar8 = FUN_00524730();
      if (iVar8 == 1) {
        pfVar9 = (float *)(**(code **)(*piVar3 + 0x10))();
        fStack_38 = *pfVar9;
        fStack_34 = pfVar9[1];
        fStack_30 = pfVar9[2];
        pfVar9 = (float *)(**(code **)(*param_1 + 0xc))(param_1);
        FUN_00422b80(fStack_3c - *pfVar9,fStack_38 - pfVar9[1],fStack_34 - pfVar9[2]);
        local_6c = fStack_48 * fStack_48 + fStack_40 * fStack_40 + fStack_44 * fStack_44;
        fVar10 = (float)(0x5f3759df - ((int)local_6c >> 1));
        local_6c = (_DAT_005ca220 - fVar10 * fVar10 * local_6c * _DAT_005c75e0) * fVar10 * local_6c;
        fVar10 = _DAT_005c75dc / local_6c;
        fStack_48 = fStack_48 * fVar10;
        fStack_44 = fStack_44 * fVar10;
        fStack_40 = fStack_40 * fVar10;
        fVar13 = (float10)(**(code **)(*piVar3 + 0x40))(&fStack_48);
        fStack_78 = unaff_EBX;
        if ((float10)fStack_70 < fVar13 == ((float10)fStack_70 == fVar13)) {
          fStack_78 = (float)(((float10)fStack_70 - fVar13) * ((float10)fStack_70 - fVar13));
        }
        if (fStack_78 < unaff_EBX) {
          fStack_78 = unaff_EBX;
        }
        if (fStack_68 <= fStack_78) {
          puVar11 = (undefined4 *)FUN_0051ec80(0x10);
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0051f140(0);
          }
          else {
            *puVar11 = &PTR_LAB_005dc034;
            puVar11[2] = iVar7;
            puVar11[1] = fStack_70;
            puVar11[3] = 0;
            FUN_0051f140(puVar11);
          }
        }
        else {
          puVar11 = (undefined4 *)FUN_0051ec80(0x10);
          if (puVar11 == (undefined4 *)0x0) {
            FUN_0051efc0(0);
          }
          else {
            puVar11[1] = fStack_70;
            *puVar11 = &PTR_LAB_005dc034;
            puVar11[2] = iVar7;
            puVar11[3] = 0;
            FUN_0051efc0(puVar11);
          }
        }
      }
      else {
        fVar10 = (float)(**(code **)(*param_1 + 0xc))(param_1);
        fStack_68 = (float)(**(code **)(*param_1 + 0x40))(param_1);
        iVar12 = 0;
        if (0 < iVar8) {
          do {
            FUN_00524740(&fStack_2c,iVar12);
            if (DAT_00675240 == (int *)0x0) {
              DAT_00675240 = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_00675240 + 0x28))(DAT_00675240,&fStack_20,fStack_68,&fStack_2c);
            iVar4 = *param_1;
            fStack_20 = fStack_2c;
            fStack_24 = fStack_30;
            fStack_1c = fStack_28;
            fVar13 = (float10)FUN_005247f0(iVar12);
            uVar6 = (**(code **)(iVar4 + 0x3c))(param_1,&fStack_24,(float)fVar13);
            if (2 < uVar6) {
              fVar5 = (fStack_28 - pfStack_5c[1]) * (fStack_28 - pfStack_5c[1]) +
                      (fStack_2c - *pfStack_5c) * (fStack_2c - *pfStack_5c) +
                      (fStack_24 - pfStack_5c[2]) * (fStack_24 - pfStack_5c[2]);
              if (fVar5 <= fVar10) {
                if (fVar5 < local_6c) {
                  fVar5 = (local_6c - fVar5) * (float)_DAT_005dc028 + local_6c;
                }
                puVar11 = (undefined4 *)FUN_0051ec80(0x10);
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = (undefined4 *)0x0;
                }
                else {
                  *puVar11 = &PTR_LAB_005dc034;
                  puVar11[1] = fVar5;
                  puVar11[2] = iVar7;
                  puVar11[3] = iVar12;
                }
                FUN_0051efc0(puVar11);
              }
              else {
                puVar11 = (undefined4 *)FUN_0051ec80(0x10);
                if (puVar11 == (undefined4 *)0x0) {
                  FUN_0051f140(0);
                }
                else {
                  puVar11[1] = fVar5;
                  *puVar11 = &PTR_LAB_005dc034;
                  puVar11[2] = iVar7;
                  puVar11[3] = iVar12;
                  FUN_0051f140(puVar11);
                }
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar8);
        }
      }
    }
  }
  return;
}

