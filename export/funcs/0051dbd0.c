
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051dbd0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  FUN_0051db00();
  fVar1 = DAT_00675294;
  if (_DAT_005c7474 < DAT_00675294) {
    fVar2 = -DAT_00675294;
    iVar3 = rand();
    iVar5 = 3;
    fVar6 = ((float10)fVar1 - (float10)fVar2) * (float10)iVar3 * (float10)_DAT_005caeec +
            (float10)fVar2;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    pfVar4 = (float *)(param_1 + 0x18);
    do {
      fVar1 = pfVar4[-6];
      iVar5 = iVar5 + -1;
      pfVar4[-6] = (float)((float10)fVar1 * (float10)(float)fVar7 + fVar6 * (float10)*pfVar4);
      *pfVar4 = (float)((float10)(float)fVar7 * (float10)*pfVar4 - (float10)fVar1 * fVar6);
      fVar1 = DAT_00675294;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 != 0);
    fVar2 = -DAT_00675294;
    iVar3 = rand();
    iVar5 = 3;
    fVar6 = ((float10)fVar1 - (float10)fVar2) * (float10)iVar3 * (float10)_DAT_005caeec +
            (float10)fVar2;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    pfVar4 = (float *)(param_1 + 0xc);
    do {
      fVar1 = pfVar4[-3];
      iVar5 = iVar5 + -1;
      pfVar4[-3] = (float)((float10)(float)fVar7 * (float10)fVar1 - fVar6 * (float10)*pfVar4);
      *pfVar4 = (float)((float10)fVar1 * fVar6 + (float10)(float)fVar7 * (float10)*pfVar4);
      pfVar4 = pfVar4 + 1;
    } while (iVar5 != 0);
  }
  return;
}

