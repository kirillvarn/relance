
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00507340(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  
  pfVar11 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
  fVar1 = *pfVar11;
  fVar2 = pfVar11[1];
  fVar3 = pfVar11[2];
  pfVar11 = *(float **)(param_1 + 0xe0);
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0xdc)) {
    pfVar12 = pfVar11 + 6;
    do {
      fVar4 = (param_2 - fVar1) - *pfVar11;
      fVar7 = (param_3 - fVar2) - pfVar12[-5];
      fVar6 = (param_4 - fVar3) - pfVar12[-4];
      fVar5 = _DAT_005c75dc / SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar4 = fVar4 * fVar5;
      fVar7 = fVar7 * fVar5;
      fVar6 = fVar6 * fVar5;
      if ((float)_DAT_005cbf58 < ABS(fVar4 * pfVar12[-1] + fVar7 * *pfVar12 + fVar6 * pfVar12[1])) {
        fVar9 = fVar7 * pfVar12[1] - fVar6 * *pfVar12;
        fVar5 = fVar6 * pfVar12[-1] - fVar4 * pfVar12[1];
        fVar10 = fVar4 * *pfVar12 - fVar7 * pfVar12[-1];
        fVar8 = _DAT_005c75dc / SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar10 * fVar10);
        pfVar12[-1] = fVar5 * fVar8 * fVar6 - fVar10 * fVar8 * fVar7;
        *pfVar12 = fVar10 * fVar8 * fVar4 - fVar6 * fVar9 * fVar8;
        pfVar12[1] = fVar7 * fVar9 * fVar8 - fVar5 * fVar8 * fVar4;
      }
      iVar13 = iVar13 + 1;
      pfVar11 = pfVar11 + 8;
      pfVar12 = pfVar12 + 8;
    } while (iVar13 < *(int *)(param_1 + 0xdc));
  }
  return;
}

