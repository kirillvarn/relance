
void FUN_0051ec80(size_t param_1)

{
  if (param_1 == 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0051eca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Heap::Malloc((Heap *)&DAT_00675340);
    return;
  }
  if (param_1 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x0051ec92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    malloc(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0051ec9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Heap::Malloc((Heap *)&DAT_00675350);
  return;
}

