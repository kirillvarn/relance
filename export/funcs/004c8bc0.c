
void __thiscall FUN_004c8bc0(int param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fcos((float10)param_2);
  iVar3 = 3;
  fVar5 = (float10)fsin((float10)param_2);
  pfVar2 = (float *)(param_1 + 0xc);
  do {
    fVar1 = pfVar2[-3];
    iVar3 = iVar3 + -1;
    pfVar2[-3] = (float)((float10)fVar1 * fVar4 - fVar5 * (float10)*pfVar2);
    *pfVar2 = (float)((float10)fVar1 * fVar5 + fVar4 * (float10)*pfVar2);
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0);
  return;
}

