
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b450(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0066da80 != (int *)0x0) {
    if (param_1 == 0) {
      local_c = _DAT_005ceec4;
      local_4 = 0xbf800000;
      local_8 = _DAT_005ceec8;
      (**(code **)(*DAT_0066da80 + 0x14))(&local_c);
      FUN_00579cc0(DAT_005ceebc,DAT_005ceec0);
    }
    else if (param_1 == 1) {
      local_18 = _DAT_005ceed4;
      local_10 = 0xbf800000;
      local_14 = _DAT_005ceed8;
      (**(code **)(*DAT_0066da80 + 0x14))(&local_18);
      FUN_00579cc0(DAT_005ceecc,DAT_005ceed0);
      return;
    }
  }
  return;
}

