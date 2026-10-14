
void __fastcall FUN_0052b2c0(FuseAction *param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00536170(*(int *)(param_1 + 0x3c));
  }
                    /* WARNING: Could not recover jumptable at 0x0052b2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FuseAction::UnLoad(param_1);
  return;
}

