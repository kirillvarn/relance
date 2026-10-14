
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054de10(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  int iStack_10;
  
  if (param_1[3] != 0.0) {
    FUN_005b7e1d(param_1[3]);
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    fVar5 = (float)ftol();
    param_1[5] = fVar5;
    if ((int)fVar5 < 1) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceTerrainRenderComp.cpp",0x297,
                 "Billboard rock count is not > 0  If we have no rocks to draw, this instance should not exist"
                );
    }
    pvVar6 = operator_new((int)param_1[5] << 5);
    fVar5 = param_1[10];
    fVar1 = param_1[9];
    param_1[3] = (float)pvVar6;
    fVar2 = param_1[5];
    iStack_10 = 0;
    fVar4 = (float)_DAT_005c89b8;
    if (0 < (int)fVar2) {
      iVar10 = 0;
      do {
        puVar7 = (undefined4 *)((int)param_1[3] + iVar10);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        iVar8 = rand();
        *(float *)(iVar10 + 0xc + (int)param_1[3]) =
             ((float)iVar8 * (fVar5 - fVar1) * _DAT_005caeec + param_1[9]) * _DAT_005c75e0;
        *(undefined4 *)(iVar10 + 0x10 + (int)param_1[3]) = 0x3f800000;
        *(undefined1 *)(iVar10 + 0x14 + (int)param_1[3]) = 1;
        iVar8 = rand();
        *(bool *)(iVar10 + 0x15 + (int)param_1[3]) = _DAT_005c75e0 < (float)iVar8 * _DAT_005caeec;
        iVar8 = rand();
        *(bool *)(iVar10 + 0x16 + (int)param_1[3]) = _DAT_005c75e0 < (float)iVar8 * _DAT_005caeec;
        iVar8 = rand();
        *(bool *)(iVar10 + 0x17 + (int)param_1[3]) = _DAT_005c75e0 < (float)iVar8 * _DAT_005caeec;
        iVar8 = rand();
        fVar3 = (float)iStack_10;
        *(bool *)(iVar10 + 0x18 + (int)param_1[3]) = _DAT_005c75e0 < (float)iVar8 * _DAT_005caeec;
        iStack_10 = iStack_10 + 1;
        *(float *)(iVar10 + 0x1c + (int)param_1[3]) = fVar3 * (fVar4 / (float)(int)fVar2);
        iVar10 = iVar10 + 0x20;
      } while (iStack_10 < (int)param_1[5]);
    }
    if (_DAT_005c7474 < param_1[2]) {
      fVar11 = (float10)fptan((float10)_DAT_005e0b00);
      fVar11 = ((float10)param_1[0x1e] * (float10)param_1[2] * fVar11) /
               ((float10)_DAT_005c89b8 - fVar11);
      *param_1 = (float)fVar11;
      param_1[1] = (float)(fVar11 + (float10)param_1[0x1e] * (float10)param_1[2]);
      param_1[0xb] = (float)(fVar11 * (float10)param_1[0xc]);
    }
    if (param_1[8] != 0.0) {
      iVar10 = **(int **)Pipeline_exref;
      uVar9 = FUN_00425640(0);
      iVar10 = (**(code **)(iVar10 + 0xbc))(*(undefined4 *)Pipeline_exref,uVar9);
      if (iVar10 != 0) {
        param_1[8] = 0.0;
      }
    }
  }
  return;
}

