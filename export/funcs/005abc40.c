
ConnectStatus __fastcall FUN_005abc40(int param_1)

{
  ConnectStatus CVar1;
  
  if (*(CGunWrapper **)(param_1 + 0x234) != (CGunWrapper *)0x0) {
    CVar1 = CGunWrapper::GetStatus(*(CGunWrapper **)(param_1 + 0x234));
    return CVar1;
  }
  return 3;
}

