
void FUN_004f79a0(size_t param_1)

{
  if (param_1 != 0x84) {
                    /* WARNING: Could not recover jumptable at 0x004f79af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    malloc(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004f79ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Heap::Malloc((Heap *)&DAT_00674ccc);
  return;
}

