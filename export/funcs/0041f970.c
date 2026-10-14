
undefined1 __thiscall FUN_0041f970(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = (byte)~*(byte *)(param_1 + 0x14) >> 4 & 1;
  uVar1 = 0;
  if (param_2 != 0) {
    if (DAT_00616840 < 0) {
      if (bVar2 == 0) {
        DAT_00616840 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (DAT_00610850 <= DAT_00616840) {
      if (bVar2 == 0) {
        DAT_00616840 = DAT_00610850 + -1;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  if (param_3 != 0) {
    if (DAT_00616844 < 0) {
      if (bVar2 != 0) {
        return 1;
      }
      DAT_00616844 = 0;
      return uVar1;
    }
    if (DAT_00610854 <= DAT_00616844) {
      if (bVar2 != 0) {
        return 1;
      }
      DAT_00616844 = DAT_00610854 + -1;
    }
  }
  return uVar1;
}

