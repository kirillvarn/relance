
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051b650(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float unaff_retaddr;
  
  pfVar4 = (float *)(**(code **)(*param_1 + 0xc))(param_1);
  if (unaff_retaddr != _DAT_005c7474) {
    fVar1 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = _DAT_005c75dc / unaff_retaddr;
    param_1[0x37] = (int)(fVar3 * (*pfVar4 - (float)param_1[0x34]));
    param_1[0x38] = (int)(fVar3 * (fVar1 - (float)param_1[0x35]));
    param_1[0x39] = (int)(fVar3 * (fVar2 - (float)param_1[0x36]));
  }
  param_1[0x34] = (int)*pfVar4;
  param_1[0x35] = (int)pfVar4[1];
  param_1[0x36] = (int)pfVar4[2];
  return;
}

