
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ab380(int param_1,int *param_2)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0x21c) = 1;
  FUN_004c4680(*param_2);
  bVar1 = SinglePlayer();
  if (!bVar1) {
    Reputation::Vibe::SetClientID(*param_2,DAT_00673344);
    _DAT_0067ecd8 = param_2[2];
    _DAT_0067ecdc = param_2[3];
    return;
  }
  _DAT_0067ecd8 = param_2[2];
  _DAT_0067ecdc = param_2[3];
  return;
}

