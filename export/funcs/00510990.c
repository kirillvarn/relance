
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00510990(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  
  iVar6 = param_1;
  fVar11 = (float10)_DAT_005c7474;
  switch(param_2) {
  case 2:
    iVar5 = ftol();
    iVar6 = iVar5 + -1;
    iVar4 = iVar6;
    if (iVar6 < 1) {
      iVar4 = iVar5 + 0xb;
    }
    iVar8 = iVar5 + 1;
    iVar10 = iVar8;
    if (0xc < iVar8) {
      iVar10 = iVar5 + -0xb;
    }
    iVar7 = iVar5 + 2;
    iVar9 = iVar7;
    if (0xc < iVar7) {
      iVar9 = iVar5 + -10;
    }
    iVar3 = *(int *)(param_4 + 0x14);
    iVar1 = iVar3 + iVar5 * 0x18;
    fVar11 = (float10)*(float *)(iVar1 + 0x10);
    pfVar2 = (float *)(iVar3 + 0x10 + iVar9 * 0x18);
    param_1 = 10;
    fVar12 = (float10)*pfVar2;
    fVar11 = fVar12 + fVar12 +
             (float10)*(float *)(iVar3 + 0x10 + iVar10 * 0x18) * (float10)_DAT_005db628 +
             fVar11 + fVar11 + (float10)*(float *)(iVar3 + 0x10 + iVar4 * 0x18) + (float10)*pfVar2;
    if (2 < *(int *)(iVar3 + 0x2b0)) {
      iVar4 = iVar5 + -2;
      if (iVar4 < 0) {
        iVar4 = iVar5 + 10;
      }
      if (iVar6 < 0) {
        iVar6 = iVar5 + 0xb;
      }
      if (0xb < iVar8) {
        iVar8 = iVar5 + -0xb;
      }
      if (0xb < iVar7) {
        iVar7 = iVar5 + -10;
      }
      param_1 = 0x18;
      fVar11 = (float10)*(float *)(iVar3 + 0x148 + iVar8 * 0x18) * (float10)_DAT_005db638 +
               (float10)*(float *)(iVar1 + 0x148) * (float10)_DAT_005db630 +
               (float10)*(float *)(iVar3 + 0x148 + iVar6 * 0x18) * (float10)_DAT_005db638 +
               fVar11 + (float10)*(float *)(iVar3 + 0x148 + iVar4 * 0x18) +
               (float10)*(float *)(iVar3 + 0x148 + iVar7 * 0x18);
    }
    break;
  default:
    goto switchD_005109b1_caseD_3;
  case 4:
  case 6:
    iVar5 = ftol();
    iVar6 = iVar5 + 1;
    iVar4 = iVar6;
    if (0xc < iVar6) {
      iVar4 = iVar5 + -0xb;
    }
    iVar8 = iVar5 + 2;
    if (0xc < iVar8) {
      iVar8 = iVar5 + -10;
    }
    iVar10 = *(int *)(param_4 + 0x14);
    fVar11 = (float10)*(float *)(iVar10 + 0x10 + iVar4 * 0x18);
    iVar4 = iVar10 + iVar5 * 0x18;
    param_1 = 4;
    fVar11 = fVar11 + fVar11 + (float10)*(float *)(iVar4 + 0x10) +
             (float10)*(float *)(iVar10 + 0x10 + iVar8 * 0x18);
    if (2 < *(int *)(iVar10 + 0x2b0)) {
      iVar8 = iVar5 + -1;
      if (iVar8 < 0) {
        iVar8 = iVar5 + 0xb;
      }
      if (0xb < iVar6) {
        iVar6 = iVar5 + -0xb;
      }
      return ((float10)*(float *)(iVar4 + 0x148) * (float10)_DAT_005db638 +
              fVar11 + (float10)*(float *)(iVar10 + 0x148 + iVar8 * 0x18) +
             (float10)*(float *)(iVar10 + 0x148 + iVar6 * 0x18)) / (float10)9;
    }
    break;
  case 0xc:
    iVar4 = param_1 + 1;
    if (0xc < iVar4) {
      iVar4 = param_1 + -0xb;
    }
    iVar5 = *(int *)(param_4 + 0x14);
    fVar11 = (float10)*(float *)(iVar5 + 0x10 + iVar4 * 0x18);
    param_1 = 1;
    if (2 < *(int *)(iVar5 + 0x2b0)) {
      return (fVar11 + (float10)*(float *)(iVar5 + 0x148 + iVar6 * 0x18)) / (float10)2;
    }
  }
  fVar11 = fVar11 / (float10)param_1;
switchD_005109b1_caseD_3:
  return fVar11;
}

