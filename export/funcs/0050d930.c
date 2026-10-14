
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0050d930(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  param_1[2] = 0.5;
  param_1[3] = 0.5;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  iVar5 = 1;
  pfVar4 = param_1 + 8;
  do {
    iVar1 = iVar5 + -1;
    iVar5 = iVar5 + 1;
    fVar6 = (float10)iVar1 * (float10)_DAT_005db5e8;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    pfVar4[-2] = (float)fVar7;
    pfVar4[-1] = -(float)fVar6;
    *pfVar4 = (float)((fVar7 + (float10)_DAT_005c89b8) * (float10)_DAT_005c75e8);
    pfVar4[1] = (float)_DAT_005c75e8 - (float)fVar6 * (float)_DAT_005c75e8;
    pfVar4 = pfVar4 + 6;
  } while (iVar5 < 0xd);
  fVar3 = (float)_DAT_005c89b8 - param_1[0xbc];
  iVar5 = 0xc;
  fVar2 = param_1[0xbc];
  pfVar4 = param_1 + 0x4e;
  do {
    iVar5 = iVar5 + -1;
    *pfVar4 = fVar3 * *param_1 + fVar2 * pfVar4[-0x48];
    pfVar4[1] = fVar3 * param_1[1] + fVar2 * pfVar4[-0x47];
    pfVar4[2] = fVar3 * param_1[2] + fVar2 * pfVar4[-0x46];
    pfVar4[3] = fVar3 * param_1[3] + fVar2 * pfVar4[-0x45];
    pfVar4 = pfVar4 + 6;
  } while (iVar5 != 0);
  return 1;
}

