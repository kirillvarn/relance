
void FUN_005b27c0(char param_1)

{
  uint uVar1;
  
  if (param_1 != '\0') {
    _clearfp();
    uVar1 = _controlfp(0,0);
    _control87(uVar1 & 0xffffffe3,0x8001f);
    return;
  }
  _control87(0x9001f,0x8001f);
  return;
}

