
void __fastcall FUN_004bb6b0(int param_1)

{
  size_t sVar1;
  short *psVar2;
  short *psVar3;
  FmtStr *pFVar4;
  
  if (DAT_0067232c != 0) {
    pFVar4 = (FmtStr *)(*DAT_00672328 + 8);
    if (*(int *)(*DAT_00672328 + 0xc) != 0x762) {
      FmtStr::operator=((FmtStr *)&DAT_0067230c,pFVar4);
      DAT_00672404 = 1;
    }
    FUN_004ba860(pFVar4,&DAT_0066dc60,DAT_006119f8,0);
    (*(code *)PTR_FUN_00616420)(&DAT_0066dc60);
    sVar1 = wcslen(&DAT_0066dc60);
    psVar3 = &DAT_0066dc60;
    psVar2 = &DAT_0066fc60;
    if (0 < (int)sVar1) {
      do {
        if (*psVar3 != 10) {
          *psVar2 = *psVar3;
          psVar2 = psVar2 + 1;
        }
        psVar3 = psVar3 + 1;
        sVar1 = sVar1 - 1;
      } while (sVar1 != 0);
    }
    *psVar2 = 0;
    (**(code **)(**(int **)(param_1 + 0x33c) + 0xa8))(0x1d,&DAT_0066fc60,0);
  }
  return;
}

