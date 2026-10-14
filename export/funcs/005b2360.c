
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2360(void)

{
  bool bVar1;
  float10 fVar2;
  
  FUN_0042d770();
  bVar1 = SinglePlayer();
  if (bVar1) {
    fVar2 = (float10)FUN_0042d680();
    _DAT_0067ecd8 = (double)(fVar2 + (float10)_DAT_0067ecd8);
    return;
  }
  fVar2 = (float10)FUN_0042d6a0();
  _DAT_0067ecd8 = (double)(fVar2 + (float10)_DAT_0067ecd8);
  return;
}

