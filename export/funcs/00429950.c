
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00429950(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 == 2) {
      if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
        return (float10)_DAT_00667c9c;
      }
    }
    else if ((param_2 == 1) && ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
      return (float10)_DAT_005ca238;
    }
  }
  return (float10)_DAT_005c7474;
}

