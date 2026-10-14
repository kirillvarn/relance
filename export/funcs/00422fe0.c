
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422fe0(float *param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_804 [256];
  float afStack_404 [257];
  
  iVar3 = 0;
  fVar2 = _DAT_005c8a5c / (float)(param_4 + -1);
  fVar5 = (float10)_DAT_005c7474;
  if (0 < param_3) {
    do {
      iVar3 = iVar3 + 1;
      fVar6 = (float10)fcos(fVar5);
      local_804[iVar3] = (float)fVar6;
      fVar6 = (float10)fsin(fVar5);
      afStack_404[iVar3] = (float)fVar6;
      fVar5 = fVar5 + (float10)((float)_DAT_005c97f8 / (float)param_3);
    } while (iVar3 < param_3);
  }
  fVar5 = (float10)_DAT_005c7474;
  if (0 < param_4) {
    do {
      iVar3 = 0;
      fVar6 = (float10)fcos(fVar5);
      fVar7 = (float10)fsin(fVar5);
      pfVar4 = param_1;
      if (0 < param_3) {
        do {
          fVar1 = local_804[iVar3 + 1];
          pfVar4[1] = (float)(fVar6 * (float10)param_2);
          param_1 = pfVar4 + 3;
          iVar3 = iVar3 + 1;
          *pfVar4 = (float)(fVar7 * (float10)param_2) * fVar1;
          pfVar4[2] = (float)(fVar7 * (float10)param_2) * afStack_404[iVar3];
          pfVar4 = param_1;
        } while (iVar3 < param_3);
      }
      param_4 = param_4 + -1;
      fVar5 = fVar5 + (float10)fVar2;
    } while (param_4 != 0);
  }
  return;
}

