
void __fastcall FUN_0052b4a0(FuseAction *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(param_1 + 0x28);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 != 0) {
    FUN_0040e960(0);
  }
                    /* WARNING: Could not recover jumptable at 0x0052b4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FuseAction::Load(param_1);
  return;
}

