
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a1ce0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_78;
  int local_74;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 uStack_40;
  float local_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((((*(int *)(param_1 + 2000) != 0) && (bVar6 = SinglePlayer(), !bVar6)) && (DAT_0067204c != 0))
     && (local_74 = (DAT_00672050 - DAT_0067204c) / 0x18, local_74 != 0)) {
    if (*(int *)(param_1 + 0x8a0) == -1) {
      FUN_0059ec80("Interface\\NeuroNet\\NavMap\\NewNavMap\\SpaceObjects\\NAV_playership.3db",0,0);
      *(float *)(param_1 + 0x8b0) = (float)(byte)DAT_00679bac * _DAT_005c7f68;
      *(float *)(param_1 + 0x8b4) = (float)DAT_00679bac._1_1_ * _DAT_005c7f68;
      *(float *)(param_1 + 0x8b8) = (float)DAT_00679bac._2_1_ * _DAT_005c7f68;
      *(float *)(param_1 + 0x8c0) = (float)DAT_00679bac._3_1_ * _DAT_005c7f68;
    }
    pfVar1 = (float *)(param_1 + 0x418);
    FUN_00422b80(-(*pfVar1 * _DAT_005c75e0),-(*(float *)(param_1 + 0x41c) * _DAT_005c75e0),
                 -(*(float *)(param_1 + 0x420) * _DAT_005c75e0));
    fVar3 = *(float *)(param_1 + 0x3f8) - _DAT_005c75dc;
    fVar2 = *(float *)(param_1 + 0x3f8);
    FUN_00422b80(*(float *)(param_1 + 0x46c) * fVar2 + (local_54 - *pfVar1 * _DAT_005c75e0 * fVar3),
                 *(float *)(param_1 + 0x470) * fVar2 +
                 (local_50 - *(float *)(param_1 + 0x41c) * _DAT_005c75e0 * fVar3),
                 fVar2 * *(float *)(param_1 + 0x474) +
                 (local_4c - *(float *)(param_1 + 0x420) * _DAT_005c75e0 * fVar3));
    fVar3 = *pfVar1 * *(float *)(param_1 + 0x3f8);
    fVar4 = *(float *)(param_1 + 0x41c) * *(float *)(param_1 + 0x3f8);
    fVar2 = *(float *)(param_1 + 0x7e4);
    if (*(char *)(param_1 + 0x478) == '\0') {
      fVar7 = *(float *)(param_1 + 0x3f8) * _DAT_005c75e0;
      if (fVar7 < _DAT_005c75dc) {
        fVar7 = _DAT_005c75dc;
      }
      fVar2 = fVar2 / fVar7;
    }
    else {
      fVar7 = (*(float *)(param_1 + 0x4a8) / *(float *)(param_1 + 0x4a0)) * _DAT_005c75e0;
      if (fVar7 < _DAT_005c75dc) {
        fVar7 = _DAT_005c75dc;
      }
      fVar5 = (*(float *)(param_1 + 0x4a8) /
              (*(float *)(param_1 + 0x490) + *(float *)(param_1 + 0x4a0))) * _DAT_005c75e0;
      if (fVar5 < _DAT_005c75dc) {
        fVar5 = _DAT_005c75dc;
      }
      fVar2 = (fVar2 / fVar5 - fVar2 / fVar7) * *(float *)(param_1 + 0x47c) + fVar2 / fVar7;
    }
    fVar2 = (fVar2 / (*(float *)(param_1 + 0x4ac) + *(float *)(param_1 + 0x4ac))) * fVar3 *
            _DAT_005d3e4c;
    if (0 < local_74) {
      local_78 = 0;
      do {
        pfVar1 = (float *)(local_78 + DAT_0067204c);
        fVar7 = (float)(**(code **)**(undefined4 **)(param_1 + 0x7e0))();
        if (pfVar1[4] == fVar7) {
          uStack_4 = 0;
          uStack_8 = 0;
          uStack_c = 0;
          uStack_28 = 0;
          fStack_1c = 0.0;
          fStack_18 = 0.0;
          fStack_14 = 0.0;
          uStack_10 = 0x3f800000;
          fVar7 = local_3c +
                  ((*(float *)(param_1 + 0xf48) * *pfVar1 + *(float *)(param_1 + 0x4a8)) /
                  (*(float *)(param_1 + 0x4a8) + *(float *)(param_1 + 0x4a8))) * fVar3;
          fVar5 = fStack_38 +
                  ((float)_DAT_005c89b8 -
                  (*(float *)(param_1 + 0xf48) * pfVar1[2] + *(float *)(param_1 + 0x4ac)) /
                  (*(float *)(param_1 + 0x4ac) + *(float *)(param_1 + 0x4ac))) * fVar4;
          fVar8 = (float10)fcos((float10)_DAT_005c8ba8);
          uStack_40 = 0xbf0ccccc;
          fVar9 = (float10)fsin((float10)_DAT_005c8ba8);
          fStack_30 = (float)fVar8;
          fStack_2c = (float)-fVar9;
          fStack_24 = (float)fVar9;
          fStack_20 = (float)fVar8;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x10))(DAT_0067209c,&fStack_30,&fStack_30,fVar2);
          fStack_1c = fVar7;
          fStack_18 = fVar5;
          fStack_14 = fVar4;
          (**(code **)(**(int **)Engine_exref + 0x9c))
                    (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x8a0),&uStack_40);
          (**(code **)(**(int **)Engine_exref + 0x6c))
                    (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x8a0),0,0);
          (**(code **)(**(int **)Renderer_exref + 0x1c))
                    (*(int **)Renderer_exref,param_1 + 0xc80,*(undefined4 *)(param_1 + 0x8a0),
                     0x3f800000,0x308,0,0);
        }
        local_78 = local_78 + 0x18;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
  }
  return;
}

