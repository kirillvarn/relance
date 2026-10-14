
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051be10(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  int iVar11;
  undefined4 unaff_EDI;
  float10 fVar12;
  float fVar13;
  float fStack_58;
  float fStack_50;
  float local_4c;
  float *pfStack_40;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  local_4c = (_DAT_006164d0 - _DAT_005d3d24) * (_DAT_006164d0 - _DAT_005d3d24);
  iVar5 = FUN_005792b0(0x25);
  if (iVar5 != 0) {
    iVar5 = FUN_00509f20();
    puVar1 = *(undefined4 **)(iVar5 + 4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      piVar6 = (int *)(**(code **)(*(int *)puVar2[2] + 0x28))();
      iVar5 = (**(code **)(*(int *)puVar2[2] + 0x18))();
      if (iVar5 == 1) {
        pfVar7 = (float *)(**(code **)(*param_1 + 0xc))();
        pfVar8 = (float *)(**(code **)(*piVar6 + 0x10))();
        FUN_00422b80(*pfVar8 - *pfVar7,pfVar8[1] - pfVar7[1],pfVar8[2] - pfVar7[2]);
        local_4c = fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28;
        fVar10 = (float)(0x5f3759df - ((int)local_4c >> 1));
        fVar10 = (_DAT_005ca220 - fVar10 * fVar10 * local_4c * _DAT_005c75e0) * fVar10 * local_4c;
        fVar13 = _DAT_005c75dc / fVar10;
        fStack_30 = fStack_30 * fVar13;
        fStack_2c = fStack_2c * fVar13;
        fStack_28 = fStack_28 * fVar13;
        fVar12 = (float10)(**(code **)(*piVar6 + 0x40))(&fStack_30);
        if (((float10)fStack_58 < fVar12 != ((float10)fStack_58 == fVar12)) ||
           (fVar13 = (float)(((float10)fStack_58 - fVar12) * ((float10)fStack_58 - fVar12)),
           fVar13 < _DAT_005c75dc)) {
          fVar13 = 1.0;
        }
        if (fVar10 <= fVar13) {
          puVar9 = (undefined4 *)FUN_0051ec80(0x10);
          if (puVar9 == (undefined4 *)0x0) {
            FUN_0051f140(0);
          }
          else {
            puVar9[2] = puVar2[2];
            *puVar9 = &PTR_LAB_005dc06c;
            puVar9[1] = fVar10;
            puVar9[3] = 0;
            FUN_0051f140(puVar9);
          }
        }
        else {
          puVar9 = (undefined4 *)FUN_0051ec80(0x10);
          if (puVar9 == (undefined4 *)0x0) {
            FUN_0051efc0(0);
          }
          else {
            puVar9[2] = puVar2[2];
            puVar9[1] = fVar10;
            *puVar9 = &PTR_LAB_005dc06c;
            puVar9[3] = 0;
            FUN_0051efc0(puVar9);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xc))(param_1);
        (**(code **)(*param_1 + 0x40))(param_1);
        iVar11 = 0;
        if (0 < iVar5) {
          do {
            (**(code **)(*(int *)puVar2[2] + 0x20))(iVar11);
            pfVar7 = (float *)(**(code **)(*(int *)puVar2[2] + 0x1c))(iVar11);
            if (pfVar7 == (float *)0x0) {
              (**(code **)FDUMP_exref)
                        (0x100001,"%s(%d) : *** ERROR: %s",
                         "E:\\FL\\Scratch\\Source\\Client\\space\\Gamecam.cpp",0x1ca,
                         "ring piece returned null position pointer");
            }
            if (DAT_00675240 == (int *)0x0) {
              DAT_00675240 = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_00675240 + 0x28))(DAT_00675240,&fStack_28,local_4c,pfVar7);
            fStack_28 = uStack_38._4_4_;
            fStack_24 = fStack_30;
            fStack_2c = (float)uStack_38;
            uVar4 = (**(code **)(*param_1 + 0x3c))(param_1,&fStack_2c,unaff_EDI);
            if (2 < uVar4) {
              fVar10 = (pfVar7[1] - pfStack_40[1]) * (pfVar7[1] - pfStack_40[1]) +
                       (pfVar7[2] - pfStack_40[2]) * (pfVar7[2] - pfStack_40[2]) +
                       (*pfVar7 - *pfStack_40) * (*pfVar7 - *pfStack_40);
              uStack_38 = (double)fVar10;
              if (fVar10 <= local_4c) {
                if (fStack_50 * fStack_50 <= fVar10) {
                  uStack_38 = (double)(fVar10 - fStack_50 * fStack_50);
                }
                else {
                  uStack_38 = 0.0;
                }
                puVar9 = (undefined4 *)FUN_0051ec80(0x10);
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  uVar3 = puVar2[2];
                  puVar9[1] = (float)uStack_38;
                  *puVar9 = &PTR_LAB_005dc06c;
                  puVar9[2] = uVar3;
                  puVar9[3] = iVar11;
                }
                FUN_0051efc0(puVar9);
              }
              else {
                puVar9 = (undefined4 *)FUN_0051ec80(0x10);
                if (puVar9 == (undefined4 *)0x0) {
                  FUN_0051f140(0);
                }
                else {
                  puVar9[2] = puVar2[2];
                  puVar9[1] = fVar10;
                  *puVar9 = &PTR_LAB_005dc06c;
                  puVar9[3] = iVar11;
                  FUN_0051f140(puVar9);
                }
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar5);
        }
      }
    }
  }
  return;
}

