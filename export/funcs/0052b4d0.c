
void __fastcall FUN_0052b4d0(FuseAction *param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0040e990();
  }
                    /* WARNING: Could not recover jumptable at 0x0052b4e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FuseAction::UnLoad(param_1);
  return;
}

