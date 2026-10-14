
void FUN_00428f80(size_t param_1)

{
  if (param_1 == 0x30) {
                    /* WARNING: Could not recover jumptable at 0x00428fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Heap::Malloc((Heap *)&DAT_00667a44);
    return;
  }
  if (param_1 != 0x40) {
    if (param_1 != 100) {
                    /* WARNING: Could not recover jumptable at 0x00428f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      malloc(param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00428fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Heap::Malloc((Heap *)&DAT_00667a34);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00428fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Heap::Malloc((Heap *)&DAT_00667a24);
  return;
}

