
void __fastcall FUN_0052bf40(FuseAction *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(param_1 + 0x28);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 != 0) {
    FUN_0040e960(0);
  }
                    /* WARNING: Could not recover jumptable at 0x0052bf62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FuseAction::Load(param_1);
  return;
}

