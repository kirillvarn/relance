
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a3aa0(int param_1)

{
  float10 fVar1;
  char cVar2;
  float10 fVar3;
  
  FUN_005a17b0();
  if (*(char *)(param_1 + 0x35e) != '\0') {
    fVar3 = (float10)FUN_0042d680();
    fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x360);
    fVar1 = (float10)_DAT_005c75dc;
    *(float *)(param_1 + 0x360) = (float)fVar3;
    if (fVar1 < fVar3) {
      cVar2 = *(char *)(param_1 + 0x35f);
      do {
        fVar3 = fVar3 - (float10)_DAT_005c75dc;
        cVar2 = cVar2 == '\0';
      } while ((float10)_DAT_005c75dc < fVar3);
      *(float *)(param_1 + 0x360) = (float)fVar3;
      *(char *)(param_1 + 0x35f) = cVar2;
      return;
    }
  }
  return;
}

