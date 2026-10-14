
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0050f2a0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_005c7474;
  if (*(int *)(param_1 + 0x2b0) == 0) {
    return (float10)*(float *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x2b0) < 3) {
    iVar2 = 0xc;
    pfVar1 = (float *)(param_1 + 0x28);
    do {
      iVar2 = iVar2 + -1;
      fVar3 = fVar3 + (float10)*pfVar1;
      pfVar1 = pfVar1 + 6;
    } while (iVar2 != 0);
    return (float10)*(float *)(param_1 + 0x10) * (float10)_DAT_005cf100 +
           fVar3 * (float10)_DAT_005db5f8 * (float10)_DAT_005d7e50;
  }
  iVar2 = 0xc;
  pfVar1 = (float *)(param_1 + 0x28);
  do {
    iVar2 = iVar2 + -1;
    fVar3 = fVar3 + (float10)*pfVar1;
    pfVar1 = pfVar1 + 6;
  } while (iVar2 != 0);
  iVar2 = 0xc;
  pfVar1 = (float *)(param_1 + 0x148);
  do {
    iVar2 = iVar2 + -1;
    fVar3 = fVar3 + (float10)*pfVar1;
    pfVar1 = pfVar1 + 6;
  } while (iVar2 != 0);
  return (float10)*(float *)(param_1 + 0x10) * (float10)_DAT_005c7720 +
         fVar3 * (float10)_DAT_005db5f0 * (float10)_DAT_005d3ed8;
}

