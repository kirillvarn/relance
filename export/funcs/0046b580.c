
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b580(void)

{
  int *piVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((DAT_0066da80 == (int *)0x0) && (DAT_0066da68 != 0)) {
    DAT_0066da80 = (int *)FUN_0059db20("MsgWin","MsgWin",0,0);
    if (DAT_0066da80 != (int *)0x0) {
      local_c = _DAT_005ceec4;
      local_4 = 0xbf800000;
      local_8 = _DAT_005ceec8;
      (**(code **)(*DAT_0066da80 + 0x14))(&local_c);
      FUN_00579cc0(DAT_005ceebc,DAT_005ceec0);
    }
    piVar1 = DAT_0066da80;
    DAT_0066da80[0x126] = DAT_0066da68;
    piVar1[0x127] = 0;
    *(byte *)(DAT_0066da80 + 0x1b) = *(byte *)(DAT_0066da80 + 0x1b) | 3;
    FUN_00579860(0);
    FUN_00579a60(3);
    FUN_005799f0(0);
  }
  return;
}

