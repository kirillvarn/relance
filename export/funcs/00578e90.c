
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00578e90(int *param_1)

{
  uint uVar1;
  int iVar2;
  __int64 _Var3;
  double dVar4;
  float local_10;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x23) == '\0') {
    _Var3 = Timing::read_ticks();
    iVar2 = (int)((ulonglong)_Var3 >> 0x20);
    uVar1 = (uint)_Var3;
    if (DAT_0067c3e0 == '\0') {
      local_10 = (float)(uVar1 - param_1[4]);
      local_c = (iVar2 - param_1[5]) - (uint)(uVar1 < (uint)param_1[4]);
      dVar4 = Timing::seconds((__int64 *)&local_10);
      if (_DAT_005ca228 < dVar4) {
        (**(code **)(*param_1 + 4))();
        return;
      }
    }
    else {
      local_10 = (float)(uVar1 - param_1[6]);
      local_c = (iVar2 - param_1[7]) - (uint)(uVar1 < (uint)param_1[6]);
      dVar4 = Timing::seconds((__int64 *)&local_10);
      local_10 = (float)dVar4;
      if ((double)_DAT_00615108 < ABS(dVar4)) {
        FUN_00578f70(local_10);
        _DAT_0067c3f4 = _DAT_0067c3f4 + 1;
        return;
      }
      _DAT_0067c3f8 = _DAT_0067c3f8 + 1;
    }
  }
  return;
}

