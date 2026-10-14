
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d770(void)

{
  float fVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  
  fVar1 = (float)_DAT_005c89b8 / _DAT_00610a0c;
  while( true ) {
    Timing::Delta::stop((Delta *)&DAT_00667cf8);
    dVar4 = Timing::Delta::calc_dt((Delta *)&DAT_00667cf8);
    if ((double)fVar1 <= dVar4) break;
    Sleep(1);
  }
  Timing::Delta::swap((Delta *)&DAT_00667cf8);
  _DAT_00667d40 = dVar4;
  if ((double)((float)_DAT_005c89b8 / _DAT_00610a08) <= dVar4) {
    _DAT_00667d40 = (double)((float)_DAT_005c89b8 / _DAT_00610a08);
  }
  _DAT_00667d38 = _DAT_00667d38 + _DAT_00667d40;
  DAT_00667d50 = DAT_00667d50 + 1;
  DAT_00667d6c = DAT_00667d6c + 1;
  _DAT_00610a00 = _DAT_00610a00 + _DAT_00667d40;
  if (_DAT_005ca228 < _DAT_00610a00) {
    _DAT_00667d60 = (double)DAT_00667d6c;
    DAT_00667d6c = 0;
    _DAT_00667d60 = _DAT_00610a00 / _DAT_00667d60;
    _DAT_00610a00 = 0.0;
  }
  _DAT_00667d48 = dVar4;
  DAT_00667d20 = timeGetTime();
  DAT_00667d58 = 0;
  bVar2 = SinglePlayer();
  if (!bVar2) {
    uVar3 = CDPClient::GetLastMsgTimestamp();
    if (1000 < DAT_00667d20 - uVar3) {
      DAT_00667d58 = 1;
    }
  }
  return;
}

