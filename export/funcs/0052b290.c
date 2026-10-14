
void __fastcall FUN_0052b290(FuseAction *param_1)

{
  Explosion *pEVar1;
  
  pEVar1 = Archetype::GetExplosion((ID_String *)(param_1 + 0x28));
  *(Explosion **)(param_1 + 0x3c) = pEVar1;
  if (pEVar1 != (Explosion *)0x0) {
    FUN_00536100(pEVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0052b2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FuseAction::Load(param_1);
  return;
}

