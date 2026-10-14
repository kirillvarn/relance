
void FUN_00537a90(size_t param_1)

{
  if (param_1 != 300) {
                    /* WARNING: Could not recover jumptable at 0x00537a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    malloc(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00537aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Heap::Malloc((Heap *)&DAT_006789a4);
  return;
}

