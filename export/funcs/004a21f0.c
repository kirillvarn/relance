
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FUN_004a21f0(int param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  
  bVar2 = SinglePlayer();
  if (!bVar2) {
    if (DAT_0067204c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (DAT_00672050 - DAT_0067204c) / 0x18;
    }
    fVar1 = *(float *)(param_1 + 0x3f8) * _DAT_005c75e0;
    if (fVar1 < _DAT_005c75dc) {
      fVar1 = _DAT_005c75dc;
    }
    iVar4 = 0;
    fVar1 = (*(float *)(param_1 + 0x7e4) / fVar1) * _DAT_005d3e6c;
    fVar1 = fVar1 * fVar1;
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        pfVar6 = (float *)(DAT_0067204c + iVar7);
        fVar3 = (float)(**(code **)**(undefined4 **)(param_1 + 0x7e0))();
        if ((pfVar6[4] == fVar3) &&
           (fVar3 = (param_2[1] - pfVar6[1]) * (param_2[1] - pfVar6[1]) +
                    (param_2[2] - pfVar6[2]) * (param_2[2] - pfVar6[2]) +
                    (*param_2 - *pfVar6) * (*param_2 - *pfVar6), fVar3 < fVar1 != (fVar3 == fVar1)))
        {
          return pfVar6[5];
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x18;
      } while (iVar4 < iVar5);
    }
  }
  return -NAN;
}

