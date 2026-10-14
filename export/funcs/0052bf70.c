
void __fastcall FUN_0052bf70(FuseAction *param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0040e990();
  }
                    /* WARNING: Could not recover jumptable at 0x0052bf82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FuseAction::UnLoad(param_1);
  return;
}

