
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051b730(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  float fVar11;
  float10 fVar12;
  float fStack_20;
  float fStack_18;
  float local_10;
  float fStack_c;
  float fStack_8;
  
  _DAT_00675230 = _DAT_006164d0 * _DAT_006164d0;
  DAT_00675244 = (int *)0x0;
  DAT_0067524c = 0;
  _DAT_00675248 = 0.0;
  iVar4 = FUN_005792b0(0x25);
  if ((iVar4 != 0) && (iVar4 = FUN_005792b0(0x27), iVar4 != 0)) {
    local_10 = (float)FUN_005553a0();
    piVar10 = (int *)**(int **)((int)local_10 + 4);
    if (piVar10 != *(int **)((int)local_10 + 4)) {
      do {
        piVar1 = (int *)piVar10[2];
        piVar5 = (int *)(**(code **)(*piVar1 + 0x4c))();
        pfVar6 = (float *)(**(code **)(*param_1 + 0xc))(param_1);
        pfVar7 = (float *)(**(code **)(*piVar5 + 0x10))();
        fVar2 = pfVar7[2] - pfVar6[2];
        fStack_c = pfVar7[1] - pfVar6[1];
        local_10 = *pfVar7 - *pfVar6;
        fVar3 = fVar2 * fVar2 + fStack_c * fStack_c + local_10 * local_10;
        fVar11 = (float)(0x5f3759df - ((int)fVar3 >> 1));
        fStack_8 = _DAT_005c75dc /
                   ((_DAT_005ca220 - fVar11 * fVar11 * fVar3 * _DAT_005c75e0) * fVar11 * fVar3);
        local_10 = fStack_8 * local_10;
        fStack_c = fStack_8 * fStack_c;
        fStack_8 = fStack_8 * fVar2;
        fVar12 = (float10)(**(code **)(*piVar5 + 0x40))(&local_10);
        if ((float10)fStack_18 < fVar12 == ((float10)fStack_18 == fVar12)) {
          fStack_20 = (float)(((float10)fStack_18 - fVar12) * ((float10)fStack_18 - fVar12));
        }
        else {
          fStack_20 = 0.0;
        }
        if (DAT_0067524c == 0) {
          iVar4 = *piVar1;
          uVar8 = (**(code **)(*param_1 + 0xc))(param_1);
          fVar12 = (float10)(**(code **)(iVar4 + 0x20))(uVar8);
          if ((float10)_DAT_005c75dc <= fVar12) {
            DAT_0067524c = 2;
            DAT_00675244 = piVar1;
            fVar12 = (float10)(**(code **)(*piVar1 + 0x40))();
            _DAT_00675248 = (float)(fVar12 * fVar12);
            FUN_0051ed20();
            return;
          }
          if (fVar12 <= (float10)_DAT_005c7474) {
            if ((DAT_0067524c != 0) || (_DAT_00675230 <= fStack_20)) goto LAB_0051b97b;
            if (DAT_00675244 != (int *)0x0) {
              puVar9 = (undefined4 *)FUN_0051ec80(0xc);
              piVar5 = DAT_00675244;
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9[1] = _DAT_00675230;
                *puVar9 = &PTR_LAB_005dc01c;
                puVar9[2] = piVar5;
              }
              FUN_0051f140(puVar9);
            }
            _DAT_00675230 = fStack_20;
            DAT_00675244 = piVar1;
          }
          else {
            if (DAT_00675244 != (int *)0x0) {
              puVar9 = (undefined4 *)FUN_0051ec80(0xc);
              piVar5 = DAT_00675244;
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9[1] = _DAT_00675230;
                *puVar9 = &PTR_LAB_005dc01c;
                puVar9[2] = piVar5;
              }
              FUN_0051f140(puVar9);
            }
            DAT_0067524c = 1;
            DAT_00675244 = piVar1;
            fVar12 = (float10)(**(code **)(*piVar1 + 0x40))();
            _DAT_00675248 = (float)(fVar12 * fVar12);
          }
        }
        else {
LAB_0051b97b:
          puVar9 = (undefined4 *)FUN_0051ec80(0xc);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = &PTR_LAB_005dc01c;
            puVar9[2] = piVar1;
            puVar9[1] = fStack_20;
          }
          FUN_0051f140(puVar9);
        }
        piVar10 = (int *)*piVar10;
        if (piVar10 == (int *)*(int *)((int)local_10 + 4)) {
          return;
        }
      } while( true );
    }
  }
  return;
}

